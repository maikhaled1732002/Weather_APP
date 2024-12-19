
#ifndef curl_abstract_H
#define curl_abstract_H
#include "data.h"
#include <curl/curl.h>
#include <string>

class curl_abstract {
public:

virtual void  Curl_operate ( std::string latitude ,std::string longitude , Data* data  ) = 0;




private :
CURL * curl ;
CURLcode status;

};

#endif