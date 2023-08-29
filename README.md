# ft_printf - 42Prague
Recoded **_printf()_** function from libc :printer:

### **What is ft_printf?**
The aim of this project is to recode **printf** function and be able to reuse it in future projects.
It is primarily about learning what **variadic functions** are and how to work with them.
The key to a successful **ft_printf** is well-structured and good extensible code.

### **School instructions for the project:**

- project must be written in accordance with the **42 Norm**
- allocated memory space must be properly freed -> **No leaks!**
- we must submit a **Makefile** with the flags -Wall, -Wextra and -Werror
- submit project to assigned **git repository**
- prototype of ft_printf should be: int ft_printf(const char *, ...);
- It will manage the following conversions: **cspdiuxX%**
- You must use the command **ar** to create your librairy, using the command **libtool** is forbidden

### **A small description of the required conversion:**

-  `%c` print a single character
-  `%s` print a string of characters
-  `%p` The void * pointer argument is printed in hexadecimal
-  `%d` print a decimal (base 10) number
-  `%i` print an integer in base 10
-  `%u` print an unsigned decimal (base 10) number
-  `%x` print a number in hexadecimal (base 16), with lowercase
-  `%X` print a number in hexadecimal (base 16), with uppercase
-  `%%` print a percent sign


### **How to use it?**

**Compilation:**

To compile run `$ make`

To clean 'o' files run `$ make clean`


**Using it in code:**

Include header

```c
#include "ft_printf.h"
```
