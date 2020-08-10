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
    cout << "Class Roster Application" << endl;
    cout << "C867 Scripting and Programming - Applications. Built with C++." << endl;
    cout << "Student ID: 001460800 - Joseph Surla. \n" << endl;;
    
    const string studentData[5] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Joseph,Surla,jsurla@wgu.edu,33,23,32,43,SOFTWARE" };
    
    int numOfStudents = sizeof(studentData) / sizeof(studentData[0]);
    int index = 0;

    //Instance of Roster class
    Roster* classRoster = new Roster(numOfStudents);
    
    cout << "***** Parsing student data and adding students *****" << endl;
    
    //Adds each student to classRoster
    while (index != numOfStudents) {
        classRoster->parseAdd(studentData[index]);
        index++;
    }
    
    //Prints all students from classRoster
    classRoster->printAll();
    
    //Prints invalid emails
    cout << "\n---- Invalid Emails ----" << endl;
    classRoster->printInvalidEmails();
    
    //Prints average days in course
    cout << "\n---- Students average days in course ----" << endl;
    for (int i = 0; i < numOfStudents; i++) {
        string studentID = studentData[i].substr(0,2);
        classRoster->printAverageDaysInCourse(studentID);
    }
    
    //Prints students in the SOFTWARE degree program
    cout << "\n---- Students in the SOFTWARE degree program ----\n";
    classRoster->printByDegreeProgram(SOFTWARE);
    
    //Removes student with student ID: A3
    cout << "\n***** Removing student from roster *****\n";
    classRoster->remove("A3");
    
    //Prints classRoster with student 'A3' removed
    cout << "\n---- Class Roster ----\n";
    classRoster->printAll();
    
    //Throws error because student ID 'A3' has been removed
    cout << "\n***** Removing student from roster *****\n";
    classRoster->remove("A3");
    
    return 0;
};
