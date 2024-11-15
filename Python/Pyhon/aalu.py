from abc import ABC,abstractmethod

class Person(ABC):
    @abstractmethod
    def showname(self):
        pass
    @abstractmethod
    def showage(self):
        pass
    
class Student(Person):
    def __init__(self,name,age,roll) -> None:
        self.__name = name
        self.__age = age
        self.__roll = roll
    def showname(self):
        print("Name is",self.__name)
    def showage(self):
        print("Age is",self.__age)
    def showroll(self):
        print("Roll is",self.__roll)
    def showinfo(self):
        self.showname()
        self.showage()
        self.showroll()
class Teacher(Person):
    def __init__(self,name,age,teacherid) -> None:
            self.__name = name
            self.__age = age
            self.__teacherid = teacherid
    def showname(self):
        print("Name is",self.__name)
    def showage(self):
        print("Age is",self.__age)
    def showteacherid(self):
        print("TeacherId is",self.__teacherid)
    def showinfo(self):
        self.showname()
        self.showage()
        self.showteacherid()


if __name__ == "__main__":
    ob1 = Student("Sarthak",21,226015)
    ob2 = Teacher("Alok Sir",54,12123)
    ob1.showinfo()
    ob2.showinfo()
    