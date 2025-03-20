#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[10];
    strcpy(buffer, input);
    printf("You entered: %s\n", buffer);
}

int main() {
    char input[1024];
    printf("Enter a string: ");
    gets(input);
    vulnerable_function(input);
    return 0;
}