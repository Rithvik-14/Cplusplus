#include<iostream>
using namespace std;
#include"Student.cpp"
int main() {
    Student s1;

    s1.display();

    Student s2;

    Student *s3= new Student;
    s3->display(); 

    cout<<"parameterised constructor called"<<endl;
    //Student s4;   ///when u call like this it will take garbage value---{s4.student();}
    Student s4(10);
    s4.display();

    Student *s5=new Student(69);
    s5->display();

    Student s6(19,38);
    s6.display();

    Student *s7=new Student(96,20);
    s7->display();

}