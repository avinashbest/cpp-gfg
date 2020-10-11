#include <iostream>
using namespace std;

struct student
{
  int rollNo;
  string name;
  string address;
  int age;
  string section;
};

void print(const student &x)
{ //passing as Reference program littler, faster and efficient because copy is not created => adding const if we don't want to change the data
  cout << x.rollNo << " " << x.name << " " << x.address << " " << x.age << " " << x.section << " ";
}

// void print(const student &x) { //passing as pointer program littler,faster and efficient because copy is not created => adding const if we don't want to change the data
//   cout<<x->rollNo<<" "<<x->name<<" "<<x->address<<" "<<x->age<<" "<<x->section<<" ";
// }

int main()
{

  return 0;
}
