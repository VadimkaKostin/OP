#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <iomanip>

using namespace std;

int * input_A(int n){                   //Функція що створює масив А
    srand(time(NULL));
    int * a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%100;              //Присвоєння елементу масиву А рандомного числа
    }
    return a;
}

void output(int * a, int n){            //Функція виведення будь-якого масиву
    for (int i = 0; i < n; i++)
    {
        cout << setw(2) << a[i] << " ";
    }
    cout << endl;
}

int max(int * a, int n){                //Функція пошуку максимального в масиві А
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > m)
            m = a[i];
    }
    return m;
}

int * input_B(int * a, int m, int n){   //Функція що створює масив В
    int * b = new int[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = m - a[i];                //Присвоєння елементу масиву В значення вказанного в умові
    }
    return b;
}

int find_d(int * a, int * b, int n){    //Функція що знаходить значення d
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        S += pow(abs(a[i]-b[i]),2);
    }
    return S;
}

void change_A(int * a, int D, int n){   //Функція що збільшує на d кожний елемент масиву А що ділиться на 7
    for (int i = 0; i < n; i++)
    {
        if (*a%7 == 0)
            *a += D;
        a++; 
    }
}

int main(){
    int N;
    cout << "Enter the size of Array: "; cin >> N;  //Введення розмірності масиву

    int * A = new int[N];
    A = input_A(N);                                 //Створення масиву А
    cout << "Array A:" << endl;
    output(A,N);                                    //Виведення масиву А

    cout << endl;

    int maxA;                                       //Пошук максимального елемента масиву А
    maxA = max(A,N);

    int * B = new int[N];                           //Створення масиву В
    B = input_B(A,maxA,N);
    cout << "Array B: " << endl;
    output(B,N);                                    //Виведення масиву В

    cout << endl;

    int d;                                          //Знаходження d
    d = find_d(A,B,N);
    cout << "d = " << d << endl;

    cout << endl;

    change_A(A,d,N);                                //Збільшення на d кожного елементу масиву А що ділиться на 7
    cout << "New Array A: " << endl;
    output(A,N);                                    //Виведення нового масиву А на екран

    system("pause");
}