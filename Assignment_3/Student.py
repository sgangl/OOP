class Student:
    """Implements a student in Python"""
    def __init__(self, name, grade, id):
        self.name = name
    	self.grade = grade
	self.id = id

    def printStudent(self):
        print "Name: " + self.name
        print "Grade: " + self.grade
        print "ID: " + str(self.id)
        print "**********"

    def setGrade(self, nuGrade):
        self.grade = nuGrade

    def setName(self, nuName):
        self.name = nuName

    def setId(self, nuId):
        self.id = nuId
