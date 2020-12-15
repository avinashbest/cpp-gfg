#include <iostream>
using namespace std;

struct base {
	int x;
};

struct derived: base {

};

int main() {
	derived d;
	d.x = 20;
	return 0;
}
