#include <stdio.h>
#include <string.h>


void success(){
    printf("Buffer overflow successful!\n");
}

void vuln_func(){
    char buffer[20];
    int secret = 15;
    printf("Enter an input.\n");
    gets(buffer);
    // If your input is longer than 20 chars, then your secret variable will be overwritten and will no longer be 15.
    printf("Your input is: %s \n", buffer);
    printf("Secret is: %i \n", secret);
}

int main(){
    printf("Buffer overflow level 2...\n");
    vuln_func();

    // If you overflow the buffer in vuln_func(), then these lines shouldn't be executed.
    printf("Buffer overflow failed. Exiting normally...\n"); 
    return 0;
}