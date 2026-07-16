//attempting to use an array fro the levels to contain th different sets of reults for the years.
//currently trying to use vectors instead

//level has its own vector
//semester has its own vector
//courses

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;

class student {
    public:
    string name;
    string dept;
    friend class course;
    friend class semester;

    student () {};

};

class course {
    public:
    string code;
    int cred_unit = 0;
    int score = 0;
    int cred_points = 0;
    string grade;
    friend class student;
    friend class semester;

    course(){};
    course (student i){};
    
    void reg_Course() {
        cout << "Enter Course Code (eg MTH101): \n";
        cin >> code;
        cout << "Enter Credit Unit: \n";
        cin >> cred_unit;
        cout << "Enter Score: \n";
        cin >> score;
    if (score < 40) {
        grade = "F";
        cred_points = 0;
    }
    else if ((score >= 40) && (score < 45)){
        grade = "E";
        cred_points = 1;
    }
    else if ((score >= 45) && (score < 50)){
        grade = "D";
        cred_points = 2;
    }
    else if((score >= 50) && (score < 60)){
        grade = "C";
        cred_points = 3;
    }
    else if((score >= 60) && (score < 70)){
        grade = "B";
        cred_points = 4;
    }
    else if((score >= 70) && (score <= 100)){
        grade = "A";
        cred_points = 5;
    }
    cout << "Your grade: " << grade << "(" << cred_points << " points) \n";
    cout << endl;
    };
};

class semester {
    public:
    vector<course> courseVector;
    float gpa = 0.0;
    int semNum;

    void calcCGPA(){
        int total_Units = 0;
        int total_Points = 0;
        for (const auto& c: courseVector){
            total_Units += c.cred_unit;
            total_Points += (c.cred_points * c.cred_unit);
        }
        if (total_Points > 0){
            gpa = static_cast<float>(total_Points) / total_Units;
            //static_cast used to temporarily change the type of a variable for  specific calculation
        }
        else{
            gpa = 0.0;
        }
    };
    friend class course;
    friend class student;
};

double calcCumulativeGPA(const vector<vector<semester>>& academicHistory){
    int globalUnits = 0;
    int globalPoints = 0;
    //serching each level
        for (const auto& levelSem : academicHistory){
            //searching each semester
            for (const auto& sem : levelSem){
                //searching thorugh each course
                for (const auto& c : sem.courseVector){
                    globalPoints += (c.cred_points * c.cred_unit);
                    globalUnits += c.cred_unit;
                }
            }
        }
        if (globalUnits > 0){
            return static_cast<double>(globalPoints) / globalUnits;
        }
    return 0.0;
}

int main() {
    // vector<course> courseVector;
    student student1;

    cout << "Student Name: \n";
    getline(cin, student1.name);
    
    cout << "Department: \n";
    getline(cin, student1.dept);

    cout << "How many years' results are you inputting? \n";
    int maxLevel;
    cin >> maxLevel;

    //vector that holds the different semesters for different levels
    vector<vector<semester>> academicHistory(maxLevel); //2D Vectors (need more understanding)

    for (int level = 0; level < maxLevel; ++level){
        cout << "---- Level " << (level + 1) * 100 << " ----\n";

        for(int sem = 1; sem <= 2; ++sem){
            semester currentSem;
            currentSem.semNum = sem;

            cout << "---- Semester " << sem << " ----\n";
            cout << "How many courses did you take? \n";
            int courseNum;
            cin >> courseNum;
            for(int n = 0; n < courseNum; ++n){
                cout << "---- Course " << (n + 1) << " ----\n";
                course temp;
                temp.reg_Course();
                currentSem.courseVector.push_back(temp);
            }
            currentSem.calcCGPA();
            cout << "---- Semester " << sem << " GPA: " << currentSem.gpa << " ----\n";
            cout << endl;
//putting the semester into the level's history
            academicHistory[level].push_back(currentSem);

            if(sem == 1){
                string choose;
                cout << "Do you have the second semester for this level? [Y/N] \n";
                cin >> choose;
                if (choose != "y" && choose != "Y"){
                    break;
                }
            }
        }
    };
cout << "---- Academic Summary for " << student1.name << " in " << student1.dept << " ----\n";
for (size_t lvl = 0; lvl < academicHistory.size(); ++lvl){
    cout << "Level " << (lvl + 1)*100 << ": \n";
    //for each loop
    for (const auto& sem : academicHistory[lvl]){
        cout << " Semester " << sem.semNum << " GPA: " << sem.gpa << " \n";

    }
}
cout << endl;
//working with the cumulative CGPA function above
double cumulativeCGPA = calcCumulativeGPA(academicHistory);
cout << "Overall Cumulative CGPA: " << cumulativeCGPA << "\n";












    
    // cout << "What level? \n";
    // int level;
    // cin >> level;
    // for (int i = 1; i <= level; ++i){
    //     unordered_map<string, course> courseRegistry;
    //     cout << "How many courses do you want to register this semester? \n";
    //     int Courses;
    //     cin >> Courses;

    //     for (int n = 1; n <= Courses; ++n) {
    //     cout << "---- Registering Course ----\n";
    //     cout << "Enter \'s\' to stop the whole process \n";
    //     cout <<  "(Enter course code/name, e.g., MTH101): \n";
    //     string inputCourseName;
    //     cin >> inputCourseName;
    //     if (inputCourseName == "s" || inputCourseName == "S"){
    //         break;
    //     }
    //     cin.ignore();
    //     courseVector.push_back(course(student1));
    //     cout << "---- Course added successfully ---- \n";
    //     };

    // //  cout << semesterVector.at(0).cgpa << endl;

    //     if (courseVector.empty()){
    //     cout << "No Courses Registered \n";
    //     };

    //     string more;
    //     cout << "Do you have the next semester? [Y/N]\n";
    //     cin >> more;

    //     if (more == "y" || more == "Y" || more == "yes" || more == "Yes" || more == "YES"){
    //         continue;
    //     }
    //     else if (more == "n" || more == "N" || more == "no" || more == "No" || more == "NO"){
    //         break;
    //     }


    // }


    return 0;
}