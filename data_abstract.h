#ifndef data_abstract_H
#define data_abstract_H 
#include <iostream>

class data_abstract {
public:


virtual std::string Get_response () = 0 ;
virtual  void set_response ( std::string& data ) =0;


private:
std::string response;


};

#endif