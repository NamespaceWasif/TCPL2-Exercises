# Output After Removing Different Parts of Code
### Removing `#include <stdio.h>`
An error message is displayed when compiling:

main.c: In function ‘main’:
main.c:3:5: error: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    3 |     printf("Hello World!");
      |     ^~~~~~
main.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 |
main.c:3:5: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
    3 |     printf("Hello World!");
      |     ^~~~~~
main.c:3:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’

### Removing `int main() {`
An error message is displayed when compiling:

main.c:4:12: error: expected declaration specifiers or ‘...’ before string constant
    4 |     printf("Hello World!");
      |            ^~~~~~~~~~~~~~
main.c:5:5: error: expected identifier or ‘(’ before ‘return’
    5 |     return 0;
      |     ^~~~~~
main.c:6:1: error: expected identifier or ‘(’ before ‘}’ token
    6 | }
      | ^

### Removing `printf()`
The code runs, but there is no output because of the lack of printf.

### Removing `return 0;`
The code works. It is because `return 0;` is not necessary in most simple C programs, because modern compilers are advanced enough to default to error code 0.

### Removing last line `}`
An error message is displayed when compiling:
main.c: In function ‘main’:
main.c:5:5: error: expected declaration or statement at end of input
    5 |     return 0;
      |     ^~~~~~

---
# THE END
