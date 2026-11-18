#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    // Encapsulated private data members
    char* name;        // Dynamic memory management
    int rollNumber;
    double marks;

    // Static member to track the total number of Student objects
    static int studentCount;

public:
    // Constructor
    Student(const char* studentName, int roll, double studentMarks) {
        name = new char[strlen(studentName) + 1]; // Dynamic allocation
        strcpy(name, studentName);
        rollNumber = roll;
        marks = studentMarks;
        studentCount++; // Increment static counter
    }

    //  constructor overload (Deep Copy of Constructor)
    Student(const Student& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        rollNumber = other.rollNumber;
        marks = other.marks;
        studentCount++;
    }

    // Destructor 
    ~Student() {
        delete[] name;
        int id = studentCount;
        cout << "Student object " << id << " destroyed." << "\n\n" << endl;
        studentCount--;
    }

    // Function Overloading 
    void updateMarks(double newMarks) {
        marks = newMarks;
    }

    void updateMarks(double baseMarks, double bonusMarks) {
        marks = baseMarks + bonusMarks;
    }

    // Overloaded '>' Operator to compare students based on marks
    bool operator>(const Student& other) const {
        return this->marks > other.marks;
    }

    // Static Member Function to access the static variable
    static int getStudentCount() {
        return studentCount;
    }

    // Friend Function Declaration
    friend void displayStudentDetails(const Student& s);
};

// Initialize static data member outside the class
int Student::studentCount = 0;

// Friend Function Definition (Accesses private members directly)
void displayStudentDetails(const Student& s) {
    cout << "Name: " << s.name 
         << " | Roll No: " << s.rollNumber 
         << " | Marks: " << s.marks << endl;
}

int main() {
    cout << "Initial Student Count: " << Student::getStudentCount() << "\n\n";

    // Creating objects using the parameterized constructor
    Student s1("Ayush", 101, 85.5);
    Student s2("Bhuvan", 102, 78.0);
    Student s3("Chetan", 103, 92.0);
    cout << "Current Student Count: " << Student::getStudentCount() << "\n\n";

    {Student s4("Deepak", 104, 88.0); cout << "Current Student Count: " << Student::getStudentCount() << "\n\n";}

    cout << "--- Student Records ---" << endl;
    displayStudentDetails(s1);
    displayStudentDetails(s2);
    displayStudentDetails(s3);
    cout << "Current Student Count: " << Student::getStudentCount() << "\n\n";

    // Demonstrating Function Overloading
    cout << "--- Updating Marks ---" << endl;
    s2.updateMarks(80.0, 9.5); // Calls the overloaded version with 2 arguments
    s1.updateMarks(90.0);      // Calls the version with 1 argument
    cout << "After bonus, Bhuvan's updated record:" << endl;
    displayStudentDetails(s2);
    cout << endl;
    cout <<"After bonus, Ayush's updated record:" << endl;
    displayStudentDetails(s1);
    cout << endl;

    // Demonstrating Overloaded '>' Operator
    cout << "--- Comparing Students ---" << endl;
    if (s1 > s2) {
        cout << "Ayush has higher marks than Bhuvan." << endl;
    } else {
        cout << "Bhuvan has higher marks than Ayush." << endl;
    }
    
    cout << endl;

    return 0;
}
