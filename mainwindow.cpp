#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    
    

}

void MainWindow::on_pushButton_clicked()
{
    
    if(current_view){
        delete current_view;
       current_view = nullptr ;
    }
QLineSeries * max_temp = new QLineSeries();
QLineSeries * min_temp = new QLineSeries();
QCategoryAxis *xaxis = new QCategoryAxis();
QValueAxis * yaxis = new QValueAxis();

std::map <int , std::string> datemap ;
int index =0 ;

    Cities * Cities_ = new Cities();
   Data * data_ = new Data();
   Curl* Curl_ =new Curl ();
   rapid_jason* jason  =new rapid_jason ();
   QString selected_city =ui->comboBox->currentText(); // Add your code here for what happens when the button is clicked
   std:: string city_name = selected_city.toStdString();
   auto coordinate = Cities_ ->Get_coordinate (city_name);
   Curl_ ->Curl_operate(coordinate.first,coordinate.second, data_ ) ;
   std::map<std::string,std::pair<double,double>>  result ;
   jason->rapid_operate(data_ );
   result = jason->get_map_of_data();

   for (const auto & [date , temp] : result ){
   max_temp->append( index , temp.first);
   min_temp->append( index , temp.second);
   std::cout<<temp.second<<std::endl;
   
   datemap.emplace(index , date) ;
   index ++ ;
   
   }
   for ( const auto & it :datemap) {
    xaxis->append( QString ::fromStdString (it.second) , it.first);
   }

max_temp->setName("Max Temp");
max_temp->setPen(QPen(Qt::blue));  // Set the color for max temperature

min_temp->setName("Min Temp");
min_temp->setPen(QPen(Qt::red));  // Set the color for min temperature
 
QChart * chart  = new QChart();
chart->addSeries(max_temp);
chart->addSeries (min_temp);


    yaxis->setMin(0); // Set a minimum value for y-axis
    yaxis->setMax(30); // Set a maximum value for y-axis

    chart->addAxis(xaxis , Qt::AlignBottom);
    max_temp->attachAxis(xaxis);
    min_temp->attachAxis(xaxis);

    chart->addAxis(yaxis, Qt::AlignLeft);
    max_temp->attachAxis(yaxis);
    min_temp->attachAxis(yaxis);
//display chart
 current_view = new QChartView(chart);
current_view->setRenderHint(QPainter::Antialiasing);

ui->chart_layout->addWidget(current_view); 


 double temp_txt =  jason->get_current_temp() ;
 QString date_txt =  QString::fromStdString (jason->get_current_date() );

ui->current_date ->setText(QString("%1").arg(date_txt));
ui->current_temp->setText(QString("%1").arg(temp_txt));

   //std::cout<<"coordinate of slected city : "<<city_name<<" is of  latitude : "<<coordinate.first<< "and  of longitude : "<<coordinate.second<<std::endl;


}



MainWindow::~MainWindow()
{
    delete ui;
}
