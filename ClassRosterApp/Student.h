//
//  Student.h
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/7/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//

#ifndef Student_h
#define Student_h

#include <stdio.h>

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
//Accessors (getter)
    string getStudentId();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int getDaysInCourse();
    DegreeProgram getDegreeProgram();
}

#endif /* Student_hpp */