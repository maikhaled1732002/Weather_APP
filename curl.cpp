#include "curl.h"


 Curl::Curl(){

    curl=curl_easy_init();
 }
 Curl::~Curl(){
    curl_easy_cleanup(curl);
 }
void Curl:: Curl_operate ( std::string latitude ,std::string longitude , Data* data ) {
    std:: string data_sent ;
    std::string url = "https://api.open-meteo.com/v1/forecast?latitude="+latitude+"&longitude="+longitude+"&current=temperature_2m&daily=temperature_2m_max,temperature_2m_min";
    curl_easy_setopt (curl, CURLOPT_URL, url.c_str()) ;
    curl_easy_setopt ( curl , CURLOPT_WRITEFUNCTION , data->writecallback);
    curl_easy_setopt  ( curl , CURLOPT_WRITEDATA , &data_sent );

    status=curl_easy_perform(curl);
    if (status == CURLE_OK) {  data->set_response(data_sent);
    std::cout<<"Response from API" <<data->Get_response()<<std::endl;}
    else {
        std::cerr << "CURL error: " << curl_easy_strerror(status) << std::endl;
    
   
    }
}

 