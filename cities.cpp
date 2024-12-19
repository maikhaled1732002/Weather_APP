#include "cities.h"

 Cities::Cities () {
    /*inialize cities 
    "Cairo" "Alex"
         "Luxor",
         "Faiyum", 
      "Giza"
        "Port Said*/

        city["Cairo"]= std::make_pair("30.0626","31.2497");
        city["Alex"]= std::make_pair("31.2018","29.9158");
        city["Luxor"]= std::make_pair("25.6989","32.6421");
        city["Dahab"]= std::make_pair("28.4821","34.495");
        city["Giza"]= std::make_pair("30.0094","31.2086");
        city["Port Said"]= std::make_pair("31.2653","32.3019");
        

 };
 void Cities::  Add_city (std::string name ,  std::string latitude ,std::string longitude ) {

    city[name] = std::make_pair(latitude,longitude);
 }

std::pair<std::string,std::string>  Cities:: Get_coordinate (  const std::string & name) {


    if(city.find(name) != city.end() ){
       std::pair<std::string,std::string> result;
       result=city[name];
    return result ;
    }
return std::make_pair ("not found","not found");

    
}







//std::map<std::string,std::pair<double,double>> city;


