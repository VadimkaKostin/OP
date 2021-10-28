#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float x,S;
    int n,i;

    cout << "Enter x: "; cin >> x;        //Введення x
    cout << "Enter n: "; cin >> n;        //Введення n
    
    S = 0;                                //Початкове значення S

    for (i=1;i<=n;i++){                   //Початок арифметичного циклу
        S += pow(-1,i-1) * pow(x,i) / i;  //Додавання до S наступного члену ряду
    }

    cout << "S = " << S << endl;         //Виведення S

    system("pause");                      //Завершення програми
}