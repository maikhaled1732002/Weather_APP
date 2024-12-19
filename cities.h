#ifndef CITIES_H
#define CITIES_H

#include<iostream>
#include<map>



class Cities {
public:
Cities ( ) ;


void Add_city (std::string name , std::string latitude , std::string longitude ) ;

std::pair<std::string,std::string>  Get_coordinate (  const std::string & name) ;







private:
std::map<std::string,std::pair<std::string,std::string>> city;


};
#endif
