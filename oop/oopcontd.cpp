#include<iostream>
using namespace std;

#include"student.cpp"

int main() {
    Student s1;
    Student *s2 = new Student;

    s1.setAge(20);
    s2->setAge(79);

    s1.display();
    s2->display();

}