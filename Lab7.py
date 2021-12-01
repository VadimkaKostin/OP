from random import randint

def input_A(n):                     #Функція що створює масив А
    a = []
    for i in range(n):
        a.append(randint(0,100))    #Присвоєння елементу масиву А рандомного числа
    return a

def output(a,n):                    #Функція виведення будь-якого масиву
    for i in range(n):
        print(a[i], end=" ")
    print()

def max(a,n):                       #Функція пошуку максимального в масиві А
    m = a[0]
    for i in range(n):
        if a[i] > m:
            m = a[i]
    return m

def input_B(a,m,n):                 #Функція що створює масив В
    b = []
    for i in range(n):
        b.append(m - a[i])          #Присвоєння елементу масиву В значення вказанного в умові
    return b

def find_d(a,b,n):                  #Функція що знаходить значення d
    S = 0
    for i in range(n):
        S += (a[i]-b[i])**2
    return S

def change_A(a,D,n):                #Функція що збільшує на d кожний елемент масиву А що ділиться на 7
    for i in range(n):
        if a[i]%7 == 0:
            a[i] += D
    return a

N = int(input("Enter the size of Array: ")) #Введення розмірності масиву

A = input_A(N)                              #Створення масиву А
print("Array A:")
output(A,N)                                 #Виведення масиву А

print()

maxA = max(A,N)                             #Пошук максимального елемента масиву А

B = input_B(A,maxA,N)                       #Створення масиву В
print("Array B:")
output(B,N)                                 #Виведення масиву В

print()

d = find_d(A,B,N)                           #Знаходження d
print("d = ",d)

print()

A = change_A(A,d,N)                         #Збільшення на d кожного елементу масиву А що ділиться на 7
print("New Array A:")
output(A,N)                                 #Виведення нового масиву А на екран

input("Press Enter to continue...")