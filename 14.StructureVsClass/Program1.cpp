#include <iostream>
using namespace std;
//In structure things are public by default however we can make thing private in structure
struct point
{
	int x;
	int y;
};

int main()
{
	point p;
	p.x = 10;
	cout << p.x; // 10
	return 0;
}
