#include <stdio.h>
#include <string.h>

void win(){
    printf("Buffer overflow successful! \n");
}

void vuln_func(){
    char buffer[40];
    printf("Enter an input.\n");
    gets(buffer);
    printf("You went past the buffer!\n");
}

int main(){
    printf("Buffer overflow level 1...\n");
    vuln_func();
    printf("Buffer overflow failed. Exiting normally...\n");
    return 0;
}