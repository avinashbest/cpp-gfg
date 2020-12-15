#include <iostream>
using namespace std;
//structure (argument)
struct point {
  int x;
  int y;
};

void print(point p) {
  cout << p.x << " " << p.y << endl;
}

int main() {
  point p = {10, 20};
  print(p);
  return 0;
}
