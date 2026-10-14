#include <cstdio>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        printf("Animal makes sound\n");
    }
};

class Dog : public Animal
{
    public :
    void sound () override{
        printf("Woof Woof !!\n");
    }
};

class Cat : public Animal
{
    public :
    void sound () override{
        printf("Meow Meow Moewdar.... !!\n");
    }
};

int main (void){

    Animal a;
    Dog d;
    Cat c ;

    a.sound();
    d.sound();
    c.sound();

    return 0;
}

