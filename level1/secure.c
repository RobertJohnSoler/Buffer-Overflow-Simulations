#include <stdio.h>
#include <string.h>

void some_func(){
    char buffer[10];
    int secret = 15;
    printf("Enter an input.\n");
    fgets(buffer, sizeof(buffer), stdin);
    
    // Remove the newline character if it exists
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len-1] == '\n') {
        buffer[len-1] = '\0';
    }
    
    printf("Your input is: %s \n", buffer);
    printf("Secret is: %i \n", secret);
}

int main(){
    printf("Testing...\n");
    some_func();
    printf("Exiting normally...\n"); 
    return 0;
}