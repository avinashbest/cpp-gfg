#include <bits/stdc++.h>
using namespace std;
// Write a program to find the area of a triangle. Take the length of sides as user input. (Area printed should be rounded off to two decimal places).
int main(void) {
  int a, b, c;
  cin>>a>>b>>c;

  //we shall use heron's formla to calculate triangle area.
  double s = (a+b+c)/2.0;
  double area = sqrt(s*(s-a)*(s-b)*(s-c));

  cout<<setprecision(2)<<fixed<<area<<endl;

  return 0;
}
