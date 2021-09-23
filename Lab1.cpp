#include <iostream>

using namespace std;

int main() {
    float A,B,a;
    cin >> A >> B >> a;
    float S = 0.5 * A * B * sin(a * 3.14 / 180);
    cout << S;
}