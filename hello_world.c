#include <stdio.h>

/*
Escape sequences:
    \t, \n, \\, and \"
    \n = new line character forces cursor to change position on next line. 
    \t = horizontal tab
    \\ = inserts backslash
    \" = inserts quote character

*/

int main() {
    printf("Hello World!\n");
    printf("I'm learning C.\n\n"); // two \n\n creates blank line.
    printf("This will be my 6th computer language!!\nVery cool stuff.\n\n"); // difficult to read on one line but possible.
    printf("Testing the horizontal tab \t today\n\n"); 
    printf("Testing the backslash \\ here.\n\n");
    printf("Testing the insertion of quote character \" here.");
    return 0; // ends program.
}
