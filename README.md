# Buffer-Overflow-Simulations
Various levels of buffer overflows by complexity.

To compile, use the command:
```gcc vuln.c -o vuln -fno-stack-protector -no-pie -z execstack -g```
`-fno-stack-protector` is to remove any default stack protections from the code so we can do buffer overflows easier.

For level2 and above, I strongly suggest doing them in Linux and not Windows.
