#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person p1 = {"Ketaki", 23};


    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}
