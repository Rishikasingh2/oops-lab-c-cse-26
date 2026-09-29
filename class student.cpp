#include <iostream>
#include <string>

class StudentNumber {
private:
    std::string name;
    long long rollNumber;
    int lastThreeDigits;

public:
    // Parameterized constructor to initialize the object
    StudentNumber(std::string studentName, long long studentRoll) {
        name = studentName;
        rollNumber = studentRoll;
        // Extract the last three digits using the modulo operator
        lastThreeDigits = studentRoll % 1000;
    }

    // Member function to display the original three-digit value
    void displayOriginal() {
        std::cout << "Original Three-Digit Value: " << lastThreeDigits << std::endl;
    }

    // Member function to display its reverse
    void displayReverse() {
        int temp = lastThreeDigits;
        int reverse = 0;
        while (temp > 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp /= 10;
        }
        std::cout << "Reverse Value: " << reverse << std::endl;
    }

    // Member function to display its square
    void displaySquare() {
        int square = lastThreeDigits * lastThreeDigits;
        std::cout << "Square Value: " << square << std::endl;
    }

    // Member function to display the sum of its digits
    void displayDigitSum() {
        int temp = lastThreeDigits;
        int sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        std::cout << "Sum of Digits: " << sum << std::endl;
    }
};

int main() {
    // Provide your name and roll number inside the constructor
    StudentNumber student("Your Name", 1234567);

    // Call member functions to display the calculations
    student.displayOriginal();
    student.displayReverse();
    student.displaySquare();
    student.displayDigitSum();

    return 0;
}