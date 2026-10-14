#include<iostream>
using namespace  std;

class shape{

public:
void area (double side){
    cout << "Area of Square: " << side*side <<endl;
}

void area (double lenght, double breadth){
    cout << "Area of Rectangle: " << lenght*breadth <<endl;
}

void area (float radius){
    cout << "Area of Square: " << 3.14*radius*radius <<endl;
}
};

int main(void){
    shape a;
    a.area(7.0);
    a.area(10.0,7.0);
    a.area(22.7f);
}
