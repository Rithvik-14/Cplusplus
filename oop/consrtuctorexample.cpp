#include<iostream>
using namespace std;
#include"student.cpp"
int main() {
    Student s1;    ////DEFAULT CONSTRUCTOR  CONSTRUCTOR 1 IS CALLED

    s1.display();

    Student s2(10);  ////PARAMETERISED CONSTRUCTOR  CONSTRUCTOR 2 IS CALLED
    s2.display();


    Student s3(15,69);  ///  '''''''''               CONSTRUCTOR 3 IS CALLED
    s3.display();

    s1=s2;
    s1.display();

    Student s5=s3;       ////Student s5;
                                //s5=s3;
        s5.display();
}