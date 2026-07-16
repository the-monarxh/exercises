#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

class student {
    public:
    float cgpa = 0.0;
    string name;
    string dept;
    friend class course;

    student () {};

};

class course {
    public:
    int cred_unit;
    int score;
    int cred_points;
    string grade;
    friend class student;

    course(){};
    
    course (student i){
        cout << "Enter credit unit and score for the course:\n";
        cin >> cred_unit;
        cin >> score;
    if (score < 40) {
        grade = "F";
        cred_points = 0;
        cout << grade << endl;
    }
    else if ((score >= 40) && (score < 45)){
        grade = "E";
        cred_points = 1;
        cout << grade << endl;
    }
    else if ((score >= 45) && (score < 50)){
        grade = "D";
        cred_points = 2;
        cout << grade << endl;
    }
    else if((score >= 50) && (score < 60)){
        grade = "C";
        cred_points = 3;
        cout << grade << endl;
    }
    else if((score >= 60) && (score < 70)){
        grade = "B";
        cred_points = 2;
        cout << grade << endl;
    }
    else if((score > 70)){
        grade = "A";
        cred_points = 1;
        cout << grade << endl;
    }
    };
};

int main() {
    student student1;

    cout << "Student Name: \n";
    getline(cin, student1.name);
    
    cout << "Department: \n";
    getline(cin, student1.dept);
    
    unordered_map<string, course> courseRegistry;
    
    cout << "We are going to help you calculate your cgpa now \n";
    cout << "Starting from 100 Level \n";

        cout << "How many courses do you want to register? \n";
        int Courses;
        cin >> Courses;
        for (int n = 1; n <= Courses; ++n){
        cout << "---- Registering Course # " << n << " ----\n";
        cout <<  "(Enter course code/name, e.g., MTH101): \n";
        string inputCourseName;
        cin >> inputCourseName;
        courseRegistry[inputCourseName] = course(student1);
    };

    cout << "Do you have the next set of results? [Y/N] \n";
    string YN;
    cin >> YN;
    if (YN == "Y" || YN == "Yes" || YN == "YES"){
        cout << "How many courses do you want to register? \n";
        int Courses;
        cin >> Courses;
        for (int n = 1; n <= Courses; ++n){
        cout << "---- Registering Course # " << n << " ----\n";
        cout <<  "(Enter course code/name, e.g., MTH101): \n";
        string inputCourseName;
        cin >> inputCourseName;
        courseRegistry[inputCourseName] = course(student1);
    };
    }
    else {
        cout << "Thank you \n";
    }





    // cin >> level;
    // switch(level){
    //     case 100:
    //     cout << "How many courses do you want to register? \n";
    //     int Courses;
    //     cin >> Courses;
    //     for (int n = 1; n <= Courses; ++n){
    //     cout << "---- Registering Course # " << n << " ----\n";
    //     cout <<  "(Enter course code/name, e.g., MTH101): \n";
    //     string inputCourseName;
    //     cin >> inputCourseName;
    //     courseRegistry[inputCourseName] = course(student1);
        
    // };
    
    //     break;
    //     case 200:

    //     break;
    //     case 300:

    //     break;
    //     case 400:

    //     break;
    //     case 500:

    //     break;
    // }

    // cout << "Any more?" << endl;


    // cout << "How many courses do you want to register? \n";
    // int Courses;
    // cin >> Courses;
    // for (int n = 1; n <= Courses; ++n){
    // cout << "---- Registering Course # " << n << " ----\n";
    // cout <<  "(Enter course code/name, e.g., MTH101): \n";
    // string inputCourseName;
    // cin >> inputCourseName;
    // courseRegistry[inputCourseName] = course(student1);
    // // cout << courseRegistry[inputCourseName].cred_unit;
    // };
    
    
     // unordered_map<string, student> studentRegistry;
    // studentRegistry[studentName] = ;
    
    // cout << "\nSuccess! Course " << inputCourseName << " registered for " << one.name << ".\n";
    // cout << "Credit Units: " << courseRegistry[inputCourseName].cred_unit << "\n";

    return 0;
}