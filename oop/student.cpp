 class Student {              ///CLASS is a blueprint which contains the functions and properties of object.
    public:

     int rollnumber;

     private:    ////can be accessed within class

     int age;

     public:

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