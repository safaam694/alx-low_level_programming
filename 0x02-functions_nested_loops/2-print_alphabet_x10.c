1 #include "main.h"
2 
3 /**
4  * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line
5  */
6 void print_alphabet_x10(void)
7 {
8   int i;
9   int j;
10   char c;
11 
12   for (i = 0; i < 10; i++) {
13     for (j = 0; j < 26; j++) {
14       c = 'a' + j;
15       _putchar(c);
16     }
17     _putchar('\n');
18   }
19 }
