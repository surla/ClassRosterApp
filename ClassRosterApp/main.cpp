//
//  main.cpp
//  ClassRosterApp
//
//  Created by Joseph Surla on 8/7/20.
//  Copyright © 2020 Joseph Surla. All rights reserved.
//


#include <iostream>
#include "Roster.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Class Roster Application \n C867 Scriping and Programming - Applications. Built with C++. \n Student ID: 001460800 - Joseph Surla. \n";
    

    const string studentData[5] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Joseph,Surla,jsurla@wgu.edu,33,23,32,43,SOFTWARE" };
    
    int numOfStudents = sizeof(studentData) / sizeof(studentData[0]);
    int index = 0;

    Roster* classRoster = new Roster(numOfStudents);
    
    cout << "Parsing student data and adding books" << endl;
    
    while (index != numOfStudents) {
        classRoster->parseAdd(studentData[index]);
        index++;
    }
    
    //Prints all students from classRoster
    classRoster->printAll();
    
    classRoster->remove("A3");

    classRoster->printAverageDaysInCourse("A5");
    classRoster->printInvalidEmails();
    classRoster->printByDegreeProgram(SOFTWARE);
    return 0;
};
