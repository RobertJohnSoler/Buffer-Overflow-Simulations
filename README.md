# Buffer-Overflow-Simulations
Various levels of buffer overflows by complexity.

To compile, use the command:
```gcc vuln.c -o vuln.exe -fno-stack-protector```
`-fno-stack-protector` is to remove any default stack protections from the code so we can do buffer overflows easier.