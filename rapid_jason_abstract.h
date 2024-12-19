#ifndef RAPID_JASON_abstract_H
#define RAPID_JASON_abstract_H

#include <iostream>
#include "data.h"
#include "rapidjson/document.h"
#include <map>

class rapid_jason_abstract {
    public:
 virtual ~rapid_jason_abstract() = default;
 virtual void rapid_operate( Data* result) =0;
 virtual std::map<std::string,std::pair<double,double>>  get_map_of_data ()=0;
virtual double get_current_temp ()=0;
  virtual std::string get_current_date () =0;
   private :
    std::map<std::string,std::pair<double,double>>  data_tobe_visual;
    double current_temp;
    std::string current_date;

};
#endif