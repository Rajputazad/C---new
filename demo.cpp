#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    printf("hello\nworld");
int myNum = 15;            // Integer (whole number) %d
float myFloatNum = 5.99;   // Floating point number %f
char myLetter = 'D';       // Character %d

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

bool istrue=true;
if (istrue)
{
  printf("%c\n",istrue);
}else
{
  printf("%c",istrue);
    /* code */
}

int day;
printf("enter a number:- ");
 cin >>  day;

switch (day)
{
case 1:
    printf("Sunday");
    break;

default:
    printf("Funday");
    break;
}
  int numbers[] = {1, 2, 3, 4, 5};

    // Determine the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Iterate through the array and print each element
    printf("\nArray elements: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }

    // Add a newlin
}
