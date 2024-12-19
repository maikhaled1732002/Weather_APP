
#ifndef CURL_H
#define CURL_H
#include "curl_abstract.h"


class Curl  : public curl_abstract   {
public:
Curl();
~Curl();
void Curl_operate ( std::string latitude ,std::string longitude , Data* data ) override  ;




private :
CURL * curl ;
CURLcode status;

};

#endif