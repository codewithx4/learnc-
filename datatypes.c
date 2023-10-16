//derived data types 
//arrays :- are the set of elements and strings stored in contigious block of memory & access by the key and the index of that element 

// Include the standard input/output library
#include <stdio.h>

// The main function, the entry point of the program
int main() {

  // Declare an integer array 'n' with a size of 5
  int n[5];

  // Assign values to specific indices in the array
  n[0] = 1;
  n[2] = 2;
  n[3] = 3;
  n[4] = 4;

  // Print a message indicating that values in the array will be displayed
  printf("Values in array: ");

  // Use a loop to iterate through the array and print each element
  for (int i = 0; i < 5; i++) {
    printf("%d", n[i]); // Print the current element in the array
  }

  // Print a newline character to improve output formatting
  printf("\n");

  // Indicate successful execution of the program by returning 0
  return 0;
}


//pointer :- it holds the value of any another variable used in the program 
// Include the standard input/output library
#include <stdio.h>

// The main function, the entry point of the program
int main() {
  
  // Declare an integer variable 'n' and assign it the value 42
  int n = 42;

  // Declare an integer pointer variable 'ptr'
  int *ptr;

  // Assign the address of the variable 'n' to the pointer 'ptr'
  ptr = &n;

  // Print the value stored at the memory address pointed to by 'ptr'
  printf("Value of number: %d\n", *ptr);

  // Indicate successful execution of the program by returning 0
  return 0;
}


//structures :- it allows you to group all the variables of different type in one single name 
// Include the standard input/output library
#include <stdio.h>

// Include the string manipulation library for functions like strcpy
#include <string.h>

// Define a structure named 'Person' with three members: 'name', 'age', and 'height'
struct Person {
    char name[50];
    int age;
    float height;
};

// The main function, the entry point of the program
int main() {
    // Declare a variable 'person1' of type 'struct Person'
    struct Person person1;

    // Copy the string "John" into the 'name' member of 'person1'
    strcpy(person1.name, "John");

    // Assign the value 30 to the 'age' member of 'person1'
    person1.age = 30;

    // Assign the value 5.8 to the 'height' member of 'person1'
    person1.height = 5.8;

    // Print the 'name' member of 'person1'
    printf("Name: %s\n", person1.name);

    // Print the 'age' member of 'person1'
    printf("Age: %d\n", person1.age);

    // Print the 'height' member of 'person1' with two decimal places
    printf("Height: %.2f\n", person1.height);

    // Indicate successful execution of the program by returning 0
    return 0;
}


//unions:- data type that allows you to store different types of data in the same memory location. Unlike structures, where each member has its own separate memory space, the members of a union share the same memory, allowing the union to hold only one value at a time.
// Include the standard input/output library
#include <stdio.h>

// Define a union named 'NumVal' with three members: 'ivalue' (int), 'fvalue' (float), and 'cvalue' (char)
union NumVal {
    int ivalue;
    float fvalue;
    char cvalue;
};

// The main function, the entry point of the program
int main() {
    // Declare a variable 'value' of type 'union NumVal'
    union NumVal value;

    // Assign the value 42 to the 'ivalue' member of the union 'value'
    value.ivalue = 42;

    // Print the 'ivalue' member of the union 'value'
    printf("Integer value: %d\n", value.ivalue);

    // Assign the value 3.14 to the 'fvalue' member of the union 'value'
    value.fvalue = 3.14;

    // Print the 'fvalue' member of the union 'value' with two decimal places
    printf("Float value: %.2f\n", value.fvalue);

    // Indicate successful execution of the program by returning 0
    return 0;
}


//enumeration data types :-  In C, an enumeration (enum) is a user-defined data type that consists of a set of named integer constants, often referred to as enumerators. Enumerations provide a way to create symbolic names for integer values, making the code more readable and understandable.
// Define an enumeration named 'week' with constants: Mon, Tue, Wed, Thur, Fri, Sat, Sun
#include <stdio.h>
// Define an enumeration named 'week' with constants: Mon, Tue, Wed, Thur, Fri, Sat, Sun
enum week {
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

// The main function, the entry point of the program
int main() {
    // Declare a variable 'today' of type 'enum week'
    enum week today;

    // Assign the value 'Mon' to the 'today' variable
    today = Mon;

    // Print the numeric value of 'today'
    printf("Today is %d\n", today);

    // Indicate successful execution of the program by returning 0
    return 0;
}
