//guys this page is about variables in c
//variables is a name of memory location and it can be called as many time as we want and change the values of it as per our needs 

/*The example of declaring the variable is given below:
int a;  
float b;  
char c;
*/  


//local variable :- declared inside the function or block
void main(){
  int a=10;
  return 0;
}

//global variable :- declared outside the function 
int a=10;
void main(){
  int a=10;
return 0;
}

//static variable :- declared with the static keyword is called static variable,It retains its value between multiple function calls.
void main(){
  int x=10;
static int y = 10;
x = x+1;
y = y+1;
printf("%d,%d",x,y);
  return 0;
}

//automatic variable :- an automatic variable is a variable that is created and initialized each time a block of code is entered and destroyed when the block is exited.
void main(){
  int x=10;
auto int y=20;
}

//external variable:- an external variable is a variable that is declared outside of any function and can be accessed by multiple source files. It allows sharing data between different parts of a program.
extern int x=10;//external variable (also global it is in myfile.h)

#include "myfile.h"  //it is in program1.c
#include <stdio.h>  
void printValue(){  
    printf("Global variable: %d", global_variable);  
}  
