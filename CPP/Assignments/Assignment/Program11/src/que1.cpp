#include <iostream>
using namespace std;

class MyClass {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    MyClass() {
        privateVar = 10;
        protectedVar = 20;
    }

    void display() {
        cout << "Private Variable: " << privateVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
    }
};

int main() {
    MyClass obj;
    obj.display();

    return 0;
}
