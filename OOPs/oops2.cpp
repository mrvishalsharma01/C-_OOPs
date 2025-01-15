//To avoid all this we want to make a class of name student where we can create our own defined user data type and can be used in our 
//entire program as per our need 

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age, roll_number;
    string grade;

};

int main(){
    //here student is data type and s1 is object or variable
    Student s1;

    s1.name="Prince";
    s1.age=23;
    s1.roll_number=143;
    s1.grade="A+";

    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_number<<" "<<s1.grade<<" "<<endl;

    Student s2;

    s2.name="Vishal";
    s2.age=22;
    s2.roll_number=1235;
    s2.grade="B+";

   cout<<s2.name<<" "<<s2.age<<" "<<s2.roll_number<<" "<<s2.grade<<" "<<endl;

    Student s3;

    s3.name="Pratik";
    s3.age=26;
    s3.roll_number=1742;
    s3.grade="C+";

   cout<<s3.name<<" "<<s3.age<<" "<<s3.roll_number<<" "<<s3.grade<<" "<<endl;

}

// Now if i want to print the age name or roll number it will not be printed why? because by default it is private inside the class
// to make it accessable we need to make it  public