# Buffer-Overflow-Simulations
Various levels of buffer overflows by complexity.

To compile, use the command:
```gcc vuln.c -o vuln -fno-stack-protector -no-pie -z execstack -g```
`-fno-stack-protector` is to remove any default stack protections from the code so we can do buffer overflows easier.

When in gdb... 
...use the command `x/20x $rsp` to see 20 hex values of the stack.
...use the command `break *0x<address>` to add a breakpoint on the specific memory location.

For level2 and above, I strongly suggest doing them in Linux and not Windows.
