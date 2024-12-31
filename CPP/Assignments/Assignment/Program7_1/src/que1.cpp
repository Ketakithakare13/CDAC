#include <iostream>
using namespace std;

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p1 = {"Ketaki", 23};


  cout<<"Name: "<<p1.name<<endl;
  cout<<"Age: "<<p1.age<<endl;

    return 0;
}
