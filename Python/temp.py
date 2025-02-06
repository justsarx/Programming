API_KEY = 2391743c-fe9b-4816-b4f3-71356b3941e2
def fx(x):
    return x**2 - 3
arr = [None] * len(range(0,10))
for i in range(0,10):
    arr[i] = fx(i)

print(arr)
for i in arr:
    if i < 0:
        a = arr.index(i)
    if i > 0:
        b = arr.index(i)
        break

print(a,b)

if(fx(a)<0 and fx(b)>0):
    while(round(a,3)!=round(b,3)):
        t = (a+b)/2
        if fx(t) > 0 :
            b = t
        else :
            a = t

print("Root of x^2 - 3 is",round(a,3)) 
