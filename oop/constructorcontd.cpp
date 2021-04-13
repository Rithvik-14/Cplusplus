///  INBILUT CONSTRUCTOR////     1. COPY CONSTRUCTOR  2.copy assignment  3. destructor
#include<iostream>
using namespace std;
#include"Student.cpp"

int main() {
    /*Student s1(10,1001);
    cout<<"S1:"<<endl;
    s1.display();

    Student s2(s1);
    cout<<"S2:"<<endl;
    s2.display();

    Student *s3=new Student(10,250);
    cout<<"s3:"<<endl;
    s3->display();

    Student *s4=new Student(*s3);
    cout<<"s4:";
    s4->display();

    Student *s5=new Student(s1);
    s5->display();*/

    Student s1(10,1001);
    Student s2(20,2001);

    Student *s3=new Student(30,69);

    s1=s2;
    s1.display();               
    *s3=s2;
    s3->display();           //(*s3).display();//
    delete s3;              //since s3 is dynamically allocated i.e in heap we have to amnually deallocate the memory//



}