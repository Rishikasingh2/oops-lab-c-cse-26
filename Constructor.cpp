#include <iostream>
#include <string>
#include <cmath>

class StudentCode {
private:
    std::string name;
    long long rollNo;

public:
    // Parameterized constructor to initialize the data
    StudentCode(std::string studentName, long long studentRollNo) {
        name = studentName;
        rollNo = studentRollNo;
    }

    // Method to calculate and display all the required values
    void generateAndDisplayCode() {
        // 1. Calculate sum of all digits of roll number
        long long tempRoll = std::abs(rollNo);
        int digitSum = 0;
        while (tempRoll > 0) {
            digitSum += tempRoll % 10;
            tempRoll /= 10;
        }

        // 2. Calculate number of characters in name excluding spaces
        int charCountWithoutSpaces = 0;
        for (char ch : name) {
            if (ch != ' ') {
                charCountWithoutSpaces++;
            }
        }

        // 3. Calculate final personal code
        long long personalCode = (long long)digitSum * charCountWithoutSpaces;

        // Displaying all required outputs
        std::cout << "--- Student Details & Personal Code ---" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNo << std::endl;
        std::cout << "Sum of Roll Number Digits: " << digitSum << std::endl;
        std::cout << "Character Count (excluding spaces): " << charCountWithoutSpaces << std::endl;
        std::cout << "Final Personal Code: " << personalCode << std::endl;
    }
};

int main() {
    
    std::string inputName = "Rishika singh" ;
    long long inputRollNo = 2503201000926;


    StudentCode student(inputName, inputRollNo);

    
    student.generateAndDisplayCode();

    return 0;
}