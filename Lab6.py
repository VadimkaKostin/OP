def Ln(x,E):                                #Функція обчислення натурального логарифму
    a2 = -(x-1)**2 / 2                      #Знаходження перших двох елементів у ряді Тейлора(ряд Тейлора в умові вказаний невірно, перед парними елементами мінус)
    a1 = x -1
    S = a1 + a2                             #Додавання перших двох елементів у суму(результат підпрограми)
    j = 2
    while abs(a2)>E:                        #За умовою, поки останній елемент за модулем більший за точність, проводимо ітерацію
        j += 1
        a1 = a2                             #Поточний елемент з попередньої ітерації стає попереднім
        a2 = (-1)**(j-1) * (x-1)**j / j     #Новий поточний елемент рахується за рекурентною формулою
        S += a2                             #Додавання поточного елемента у суму
    return S                                #Повернення результату

def Browse(l,Rez):                          #Функція, яка виводить результат
    print("y(",l,") = ",Rez, sep = "")

def Solution():                             #Функція, яка проводить розв'язок задачі
    i = 1
    while i <= 3:                           #Починаємо перелічувати x від 0 до 3(Нуль не враховується за умовою задачі)
        if i<=2:
            rez = Ln(i*i/2,e)               #Результат для x від 1 до 2( Ln(x)+Ln(x/2)=Ln(x * x/2) )
        else:
            rez = Ln(i/2-1,e)               #Результат для x від 2.5 до 3(за умовою задачі 2 треба віднести сюди, але тоді вийде Ln(0))
        Browse(i,rez)                       #Вивід результату
        i += 0.5

e = float(input("Enter e: "))               #Введення точності
Solution()                                  #Розв'язок задачі

input("Press Enter to continue...")