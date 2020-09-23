/*Switch Statement*/
#include <iostream>
using namespace std;

int main(void)
{
    int x_position = 0, y_position = 0;
    char move;
    cin >> move;
    switch (move)
    {
    case 'L':
        x_position--;
        break;
    case 'R':
        x_position++;
        break;
    case 'U':
        y_position++;
        break;
    case 'D':
        y_position--;
        break;
    default:
        cout << "Invalid Key!";
        break;
    }
    cout << x_position << " " << y_position << endl;
    return 0;
}