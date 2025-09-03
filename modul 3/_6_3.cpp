#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string course;

public:
    void setStudentDetails(string n, int a, string c) {
        setPersonDetails(n, a);
        course = c;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Course: " << course << endl;
    }
};

class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string s) {
        setPersonDetails(n, a);
        subject = s;
    }

    void displayTeacherDetails() {
        displayPersonDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    s.setStudentDetails("Raj", 20, "Computer Science");
    cout << "\nStudent Details:" << endl;
    s.displayStudentDetails();

    Teacher t;
    t.setTeacherDetails("Mr. Sharma", 40, "Mathematics");
    cout << "\nTeacher Details:" << endl;
    t.displayTeacherDetails();

    return 0;
}
