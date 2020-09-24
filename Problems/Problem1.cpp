#include <bits/stdc++.h>
using namespace std;
// Change the case of the character entered. (using operators only)
int main(){
  char ch1 = 'p', ch2 = 'P';

  cout<<"Character p changed to: "<<(char)((ch1 >= 'a' && ch1 <= 'z') ? (ch1 - 'a' + 'A') : (ch1 - 'A' + 'a'))<<endl;
  cout<<"Character P changed to: "<<(char)((ch2 >= 'a' && ch2 <= 'z') ? (ch2 - 'a' + 'A') : (ch2 - 'A' + 'a'))<<endl;
  return 0;
}
