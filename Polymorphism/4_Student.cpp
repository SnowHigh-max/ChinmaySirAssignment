
#include <cstdio>

class Student
{
    int rollNo;
    int std;
    float marks;

public:
    // Default Constructor (Parameter-less)
    Student()
    {
        rollNo = 0;
        std = 0;
        marks = 0;
    }

    // Parameterized Constuctor
    Student(int r, int s, float m)
    {
        rollNo = r;
        std = s;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        std = s.std;
        marks = s.marks;
    }

    void display()
    {
        printf("Roll No: %d\n", rollNo);
        printf("Standard is : %d\n", std);
        printf("Marks: %.2f\n\n", marks);
    }
};

int main (void){
    Student s1;
    Student s2(1, 10, 85.5f);
    Student s3(s2);

    printf("Default Constructor:\n");
    s1.display();

    printf("Parameterized Constructor:\n");
    s2.display();

    printf("Copy Constructor:\n");
    s3.display();

    return 0;
}
