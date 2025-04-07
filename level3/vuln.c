#include <stdio.h>
#include <string.h>

void vuln_func() {
    char buffer[100];  // Larger buffer to fit shellcode
    printf("Enter your input:\n");
    gets(buffer);      
}

int main() {
    printf("Buffer overflow level 3...\n");
    vuln_func();
    printf("Buffer overflow failed. Exiting normally...\n");
    return 0;
}