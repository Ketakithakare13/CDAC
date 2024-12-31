#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;

    void init(string n, int a){
    	name = n;
    	age = a;
    }

    void display(){
    	 cout << "Name: " << name << endl;
    	 cout << "Age: " << age << endl;
    }
};



int main() {
    Person p1;
    p1.init("Ketaki", 23);
    p1.display();
    return 0;
}
