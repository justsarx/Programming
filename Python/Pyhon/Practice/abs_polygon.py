from abc import ABC, abstractmethod
class Polygon(ABC):
    @abstractmethod
    def get_info(self):
        pass
    
class Triangle(Polygon):
    def __init__(self, base, height):
        self.base = base
        self.height = height
        
    def get_info(self):
        print("\nShape :- ")
        for i in range(1, 5 + 1):
            for j in range(5 - i):
                print(" ", end="")
        
            for k in range(1, 2*i):
                print("*", end="")
            print()
        print("\nHeight =", self.height)
        print("Base =", self.base)
        print("Area =", ((1/2)*self.height*self.base))
        
class Square(Polygon):
    def __init__(self, side):
        self.side = side
        
    def get_info(self):
        print("\nShape :- ")
        for i in range(5):
            for j in range(5):
                print("* ", end="")
            print()
        print("\nSide =", self.side)
        print("Area =", self.side*self.side)
                
t1 = Triangle(15,20)
t1.get_info()
s1 = Square(5)
s1.get_info()