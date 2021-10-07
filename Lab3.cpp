#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    float x,a1,a2,c,e,res;
    cout << "Enter x: ";cin >> x;
    if (x>=1 || x<=-1)
    {
        cout << "Inncorect value of x";
    } else {
        e = 0.00001;
        a1 = x;
        a2 = -pow(x,2)/2;
        res = a1 + a2;
        n = 2;
        while (abs(a2-a1)>e)
        {
            n += 1;
            c = a2;
            a2 = pow(-1,n-1) * pow(x,n) / n;
            a1 = c;
            res += a2;
        }
        cout << "Ln(x+1) = " << res << endl;
    }
    system("pause");
}