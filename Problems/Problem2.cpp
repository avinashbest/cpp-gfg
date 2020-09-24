// Write a program to convert temperature given in Celsius (user input) to Fahrenheit.
#include<iostream>
using namespace std;

int main(){
  float Celsius;
  float Fahrenheit;
  //Taking User Input
  printf("Enter the Temperature in degree Celsius: ");
  scanf("%f", &Celsius);
  //Calculation
  Fahrenheit = 9.0 / 5 * Celsius + 32;
  //Displaying Output
  printf("Temperature Corresponding to Fahrenheit is = %.3f F\n\n", Fahrenheit);
  
  return 0;
}
