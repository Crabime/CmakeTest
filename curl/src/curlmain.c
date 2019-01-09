#include <stdio.h>
#include <curl/curl.h>

FILE *fp = NULL;

size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream) {
    size_t written = fwrite(ptr, size, nmemb, fp);
    return written;
}

int main() {
    fp = fopen("/tmp/curl-test", "w");
    curl_global_init(CURL_GLOBAL_ALL);

    CURL *curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, "http://www.baidu.com");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);

    CURLcode code = curl_easy_perform(curl);
    curl_easy_cleanup(curl);

    return 0;
}

