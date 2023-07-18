1 #include "main.h"
2 /**
3 * print_alphabet - Prints the lowercase alphabet followed by a new line
4 */
5 void print_alphabet(void)
6 {
7 int i;
8 char c;
9 
10 for (i = 0; i < 13; i++) {
11 c = 'a' + i;
12 _putchar(c);
13 }
14 
15 for (i = 13; i < 26; i++) {
16 c = 'a' + i;
17 _putchar(c);
18 }
19 _putchar('\n');
20 }
