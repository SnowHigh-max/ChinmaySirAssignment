
#include <cstdio>

class Employee {
public:
    virtual void display() {
        printf("I am an Employee.\n");
    }
};

class Manager : public Employee {
public:
    void display() override {
        printf("I am a Manager.\n");
    }
};

int main() {
    Employee e;
    Manager m;

    Employee *ptr;

    ptr = &e;
    ptr->display();

    ptr = &m;
    ptr->display();

    return 0;
}
