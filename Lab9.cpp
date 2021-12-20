#include <iostream>
#include <string>

using namespace std;

void deleteSimilar(string);                                 //Функція що вилучає з рядка символи які співпадають та підраховує кількість вилучень

int countStr(string, char, int);                            //Функція що підраховує кількість входжень символа у рядок

int main(){
    string str;                                             //Ініціалізація рядка
    cout << "Enter string: ";
    getline(cin,str);

    cout << "Your string:\n" << str << endl;                //Виведення початкового рядка

    deleteSimilar(str);                                     //Вилучення з рядка символів що співпадають та підрахування кількості вилучень

    system("pause");
}

int countStr(string A, char a, int n){                      //Функція що підраховує кількість входжень символа у рядок
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(A[i]==a)
            sum++;
    }
    return sum;
}

void deleteSimilar(string A){                               //Функція що вилучає з рядка символи які співпадають та підраховує кількість вилучень
    int N = A.length();
    int n = N;
    int i=0;
    
    while(i<n){
        if(countStr(A,A[i],n)>1){
            int j = i+1;
            while(j<n)
            {
                if(A[i]==A[j]){
                    A.erase(j,1);
                    n--;
                } else j++;
            }
            A.erase(i,1);
            n--;
        } else i++;
    }
    int totalSum = N - n;
    cout << "\nNew string:\n" << A << "\n\nTotal amount of deleting: " << totalSum << endl;
}