﻿#include <iostream>
#include <stdio.h> 
#include <curl/curl.h> 


int main(void)
{
	CURL *curl;
	CURLcode res;

	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://google.com");
		res = curl_easy_perform(curl);

		/* always cleanup */
		curl_easy_cleanup(curl);
	}
	system("pause");
	return 0;
}
