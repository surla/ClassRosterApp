//
//  Student.h
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/7/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "Degree.h"

using namespace std;

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;

public:
//Empty constructor
    Student();
//Full constructor
    Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);

//Accessors (getter)
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int* getDaysInCourse();
    DegreeProgram getDegreeProgram();
    
//Mutators (setters)
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse[]);
    void setDegreeProgram(DegreeProgram degreeProgram);
    void print();
};
