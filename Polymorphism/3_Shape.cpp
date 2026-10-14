#include<cstdio>
using namespace std;

class Shape
{
public :
virtual void area(){
    printf("Area of Shape\n");
}
};

class circle : public Shape
{
float radius ;

    public :
    circle(float r){
        radius = r;
    }

    void area() override{
        printf("Area of Cricle %.2f \n",3.14*radius*radius);
    }
};

class rectangle : public Shape
{
float len ;
float bre ;

    public :
    rectangle(float l, float b){
        len = l;
        bre = b;
    };

    void area() override{
        printf("Area of Rectangle %.2f \n",3.14*len*bre);
    }
};

int main(void){
    Shape *s;

    circle c(5.6);
    rectangle r(45,15);

    s=&r;
    s->area();

    s=&c;
    s->area();

    return 0;

 

}
