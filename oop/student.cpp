 class Student {              ///CLASS is a blueprint which contains the functions and properties of object.
    public:

     int rollnumber;

     private:    ////can be accessed within class

     int age;

     public:

     //Deafult constructor
     Student() {
         cout<<"COnstructor called !"<<endl;
     }

     ////DESTRUCTOR//
    ~Student () {
        cout<<"destructor caled!"<<endl;
    }

     //parametrised constructor.....take arguments
     Student(int r) {
         rollnumber=r;
         cout<<"constructor  2 called"<<endl;
     }
     Student (int r,int a) {
         rollnumber=r;
         age=a;
         cout<<"constructor 3 called"<<endl;
     }

     void display() {

         cout << age << " " << rollnumber <<endl;
     }
     int getAge() {
         return age; 
     }

     void setAge(int a) {
         age=a;
     }

 };