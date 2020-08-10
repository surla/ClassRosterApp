//
//  Roster.h
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/9/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include "Student.h"
using namespace std;

class Roster {
private:
    int studentIndex;
    int numOfStudents;
    Student** classRosterArray;
    
public:
    //Default constructor
    Roster();
    
    //Full constructor
    Roster(int numStudents);
    
    //Destructor
    ~Roster();
    
    //Parses studentData[]
    void parseAdd(string dataRow);
    
    //Creates instances of Student class and adds to classRosterArray
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
    //Removes student from class roster
    void remove(string studentID);
    
    //Prints class roster
    void printAll();
    
    //Prints average days in course
    void printAverageDaysInCourse(string studentID);
    
    //Prints invalid email
    void printInvalidEmails();
    
    //Prints student information by degree program
    void printByDegreeProgram(DegreeProgram degreeProgram);
};
