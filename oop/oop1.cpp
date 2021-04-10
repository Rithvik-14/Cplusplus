#include<iostream>
using namespace std;
#include "Student.cpp" 

int main() {
    //CREATE OBJECTS STACTICALLY

    Student s1;
    Student s2;
    
    Student s3 , s4 , s5; 

    s1.age=24;
    s1.rollnumber=40;
    
    cout<<s1.age<<endl;
    cout<<s1.rollnumber<<endl;

    //CREATE OBJECTS DYNAMICALLY
    Student *s6 =new Student;

    (*s6).age=33;
    (*s6).rollnumber=104; 
        
        ////or

    s6->age=32;
    s6->rollnumber=44;

}