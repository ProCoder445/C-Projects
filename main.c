#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
  int length;
  int width;

  char triag_name[25]; //When creating an array of any type in C, you must specify a size for the array.

  
  printf("What is the name of your triangle?");
  fgets(triag_name, 25, stdin); //fgets is used to include whitespace in user input. Arguments: fgets(variable_name, variable_size, Input/Output)
  triag_name[strlen(triag_name) - 1] = '\0'; // Removes the \n escape character. Syntax: variable_name[strlen(variable_name) -1] = '\0'.
                                   // \0 is the escape sequence for nothing.



  printf("What is the width of the triangle?:");
  scanf("%d", &width);

  printf("What is the height of the triangle?:");
  scanf("%d", &length);

  int hyp = sqrt( pow(length, 2) + pow(width, 2) );

  printf("Here is the length of the hypotenuse for triangle %s: %d",triag_name, hyp);

  return 0;
}
