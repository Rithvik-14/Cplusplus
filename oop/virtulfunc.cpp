/// Virtual Function is a memeber function which is declared within base class and is redefined in derived class..
///used to achieve run-time polymorphism..
#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void eat()               ////when added virtual keyword in base class its gets overwritten which helps in runtime polymorphism.
    {
        cout<<"Eating Food";
    }
};
class cat : public Animal
{
    public:
    
        void eat()
        {
            cout<<"eating cat food:";
        }
    
};

int main()
{
    Animal*ptr;
    cat obj;
    ptr = &obj;
    ptr->eat();
}

