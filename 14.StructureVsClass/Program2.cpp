#include <iostream>
using namespace std;
//In class things are private by default however we can make thing public in class
class point {
	int x;
	int y;
};

int main() {
	point p;
	p.x = 10;
	cout << p.x; // compiler error -> accessing private members.
	return 0;
}
