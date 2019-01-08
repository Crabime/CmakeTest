
#include <wchar.h>
#include <stdlib.h>

char *GenerateRandomString(size_t size) {
    static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char * randomString;
    if (size) {
        randomString = (char*) malloc(sizeof(char) * (size + 1));
        if (randomString) {
            for (int i = 0; i < size; ++i) {
                int key = rand() % (int)(sizeof(charset) - 1);
                randomString[i] = charset[key];
            }

            randomString[size] = '\0';
        }
    }

    return randomString;
}