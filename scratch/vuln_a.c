#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[8];
    strcpy(buffer, input);
    printf("You entered: %s\n", buffer);
}

int main() {
    char input[256];
    printf("Enter a string: ");
    fgets(input, 256, stdin);
    vulnerable_function(input);
    return 0;
}