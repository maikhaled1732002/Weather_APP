
#ifndef RAPID_JASON_H
#define RAPID_JASON_H
#include "rapid_jason_abstract.h"

class rapid_jason  : public rapid_jason_abstract{
    public:
 rapid_jason ();
 ~rapid_jason () ;
 void rapid_operate( Data* result)  override;
 std::map<std::string,std::pair<double,double>>  get_map_of_data () override;
double get_current_temp () override ;
 std::string get_current_date () override ;
   private :
    std::map<std::string,std::pair<double,double>>  data_tobe_visual;
    double current_temp;
    std::string current_date;

};

#endif