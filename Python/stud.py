class Course:
    def __init__(self, scourse):
        if scourse == "BCA" or scourse =="BBA" or scourse == "MBA" or scourse =="MCA":
            self.scourse = scourse
        else:
            print("Please enter valid course name")
            exit()
    def get_course(self):
        return self.scourse

class Department:
    def __init__(self,scourse):
        if scourse == "BCA" or scourse == "MCA":
            self.sdepartment = "Technical"
        else:
            self.sdepartment = "Management"
    
    def get_department(self):
        return self.sdepartment

class Student:
    def __init__(self,sname,scourse) -> None:
        self.sname = sname
        self.scourse = Course(scourse)
        self.sdepartment = Department(scourse)
    def enroll(self):
        print("Student",":",self.sname,"got enrolled in",self.scourse.get_course(),"course of", self.sdepartment.get_department(),"department.")
        
std1 = Student("Misha","BCA")
std1.enroll()