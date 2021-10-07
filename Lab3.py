x = float(input('Enter x: '))

if x>=1 or x<=-1:
    print('Inccorect value of x')
else:
    e = 0.00001
    a1 = x
    a2 = -x**2/2
    res = a1 + a2
    n = 2
    while abs(a2-a1) > e:
        n += 1
        c = a2
        a2 = (-1)**(n-1) * x**n / n
        a1 = c
        res += a2
    print('Ln(x+1) = ',res)

input('Press ENTER to exit') 