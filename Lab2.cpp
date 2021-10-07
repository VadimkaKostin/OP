#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x,y;
    cin >> x;
    if (x<=0) {
        y = 1;
    } else if (x>0 and x<3.14) {
        y = cos(x);
    } else {
        y = -1;
    }
    cout << y;
}