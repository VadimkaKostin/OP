#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>

using namespace std;

typedef int Matrix[100][2];                 //Створення новогу типу для об'явленняя масиву
//Прототипи функцій
void input_A(Matrix, int);

void output(Matrix, int);

double dist(float, float, float, float);

void check_dist(Matrix, int);

int main(){
    int N;
    cout << "Enter N: "; cin >> N;          //Введення кількості точок

    Matrix A;                               //Об'явлення матриці з координатами точки

    input_A(A,N);                           //Введення матриці

    output(A,N);                            //Виведення матриці

    check_dist(A,N);                        //Знаходження дистанції між точками
}

void input_A(Matrix a,int n){               //Функція що створює матрицю точок з рандомними координатами
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i][0] = rand()%20 - 10;
        a[i][1] = rand()%20 - 10;
    }
}

void output(Matrix a, int n){               //Функція виведення матриці
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " point: " << setw(2) <<a[i][0] << " " << a[i][1] << endl;
    }
}

double dist(float x1, float y1, float x2, float y2){    //Функція знаходження дистанції між двома точками
    double d = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
    return d;
}

void check_dist(Matrix a, int n){                       //Функція знаходження максимальної дистанції
    float distance;
    int p1, p2;
    float max = dist(a[0][0],a[0][1],a[1][0],a[1][1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            distance = dist(a[i][0],a[i][1],a[j][0],a[j][1]);
            if (distance > max){
                max = distance;
                p1 = i+1;
                p2 = j+1;
            }
        }
    }
    cout << endl << "The max distance is between " << p1 << " and " << p2 << " points" << endl;
    cout << "The distance between them is " << max;
}