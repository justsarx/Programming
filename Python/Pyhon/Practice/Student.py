class Student:
    def __init__(self, name, roll):
        self.name = name
        self.roll = roll
        self.courses = []

    def enroll_in_course(self, course):
        self.courses.append(course)
        
    def get_enrolledCourses(self):
        for course in self.courses:
            print(self.name, "is enrolled in", course.course_name)
            

class Course:
    def __init__(self, course_code, course_name, department):
        self.course_code = course_code
        self.course_name = course_name
        self.department = department
        self.students = []

    def add_student(self, student):
        self.students.append(student)
        
    def get_studentsEnrolled(self):
        for student in self.students:
            print(self.course_name,"has enrollment of", student.name, "with roll", student.roll)

class Department:
    def __init__(self, department_name):
        self.department_name = department_name
        self.courses = []

    def add_course(self, course):
        self.courses.append(course)
        
    def get_coursesOffered(self):
        for course in self.courses:
            print(self.department_name, "offers", course.course_name)


student1 = Student("Lalit Kumar", "226009")

course1 = Course("BCA501", "Software Engineering", "Computer Science")
course2 = Course("BCA502", "Python Programming", "Computer Science")
course3 =Course("BCA503", "Visual Basic with Dotnet", "Computer Science")

department1 = Department("Computer Science")

department1.add_course(course1)
department1.add_course(course2)
department1.add_course(course3)

course1.add_student(student1)
course2.add_student(student1)
course3.add_student(student1)

student1.enroll_in_course(course1)
student1.enroll_in_course(course2)
student1.enroll_in_course(course3)

student1.get_enrolledCourses()

course1.get_studentsEnrolled()
course2.get_studentsEnrolled()
course3.get_studentsEnrolled()

department1.get_coursesOffered()