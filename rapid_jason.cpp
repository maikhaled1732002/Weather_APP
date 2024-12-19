#include "rapid_jason.h"

 rapid_jason:: rapid_jason () =default;
  rapid_jason::  ~rapid_jason ()  = default ;

 void  rapid_jason:: rapid_operate( Data* result) {

rapidjson::Document doc;
doc.Parse(result->Get_response().c_str ());

 const auto & daily = doc["daily"].GetObject();
   // Check if temperature arrays are available
  
   
const auto & temp_max= daily["temperature_2m_max"].GetArray();
const auto & temp_min =daily["temperature_2m_min"].GetArray();
const auto & date =daily["time"].GetArray();

const auto & current =doc["current"].GetObject();
const auto & c_temp = current["temperature_2m"].GetDouble();
current_temp=c_temp;

current_date = date[0].GetString();

for (rapidjson::SizeType  i =0 ; i<date.Size() ;i++) {
  data_tobe_visual.emplace(date[i].GetString(),std::make_pair(temp_max[i].GetDouble(),temp_min[i].GetDouble()) );  
}





 }

 std::map<std::string,std::pair<double,double>>   rapid_jason::  get_map_of_data () {
return  data_tobe_visual ;
 }
   

double  rapid_jason:: get_current_temp (){ std::cout<<current_temp<<std::endl; return current_temp ;}
 std::string rapid_jason::  get_current_date (){return current_date ;}
    //std::map<std::string,std::pair<double,double>>  data_tobe_visual;