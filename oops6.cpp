#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    // Default Constructor
    Demo() {
        value = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Demo(int v) {
        value = v;
        cout << "Parameterized Constructor Called: "
             << value << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy Constructor Called: "
             << value << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called: "
             << value << endl;
    }
};

int main() {
    cout << "Object Lifecycle Started" << endl;

    // Default Constructor
    Demo obj1;

    // Parameterized Constructor
    Demo obj2(100);

    // Copy Constructor
    Demo obj3(obj2);

    cout << "Object Lifecycle Ending" << endl;

    return 0;
}