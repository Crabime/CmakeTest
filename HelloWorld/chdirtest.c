#include <stdio.h>
#include <unistd.h>

int main() {
    char *home = "/home";

    chdir(home);
    char * cur;
    getcwd(cur, 100);
    printf("current directory is : %s\n", cur);
}

