#include <stdio.h>

/*  
- Declaring Variables:
    - Syntax: type variableName = value;
    - Types: int, float, char


- Format Specifiers:
    - "%d", "%c", "%f"
    - Specifier assists compiler in printf() by telling compiler data type of variable value.
    - print() in C has different behavior than seen in Python/Java when printing variable value. 
        - returns warning: incompatible implicit declaration of built-in function 'printf.
        - add a specifier. 

*/

int main(){

int myNum = 7;
myNum = 22; // overwrites previous value 7.
// printf(myNum);
printf("%d\n", myNum);


int newNum;
newNum = 10;
printf("%d\n", newNum);


float floatedNum = 10.99;
printf("%f\n", floatedNum);


char myLetter = 'm';
printf("%c\n", myLetter);

printf("My name starts with \"%c\" and the number of the day is %d", myLetter, myNum);
}
