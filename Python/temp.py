#name = input("Enter your name: ")
name = "Alok Ranjan Kumar"
i = 0
while i < len(name):
    if(i==0):
        print(name[i].upper(), end=". ")
    elif(name[i]==" "):
        print(name[i+1].upper(), end=". ")
        break
    i += 1