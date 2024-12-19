#ifndef DATA_H
#define DATA_H 
#include "data_abstract.h"

class Data : public data_abstract {
public:
Data();
~Data();
 static size_t writecallback ( void * contents  ,size_t size_of_one , size_t total_num ,std::string * output);
std::string Get_response ()  override;
void set_response ( std::string& data ) override ;    


private:
std::string response;


};

#endif