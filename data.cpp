#include "data.h"


 Data::Data()=default;
 Data::~Data()=default;
size_t Data::   writecallback ( void * contents ,size_t size_of_one , size_t total_num ,std::string * output){
size_t total_size = size_of_one*total_num;
output->append((char *) contents , total_size);
return total_size ;

}
std::string Data:: Get_response () {
    return response;
}

void  Data :: set_response ( std::string & data ){
response = std::move (data) ;

}