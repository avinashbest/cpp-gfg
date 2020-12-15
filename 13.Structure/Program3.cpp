#include <iostream>
using namespace std;
struct student
{
  int rollNo;
  string name;
  string address;
};

int main()
{
  student s = {101, "GFG", "gfg"};
  cout << s.rollNo << " " << s.name << " " << s.address;
  return 0;
}
