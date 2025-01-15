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
    Student s1;

    s1.name="Prince";
    s1.age=23;
    s1.roll_number=143;
    s1.grade="A+";

    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_number<<" "<<s1.grade<<" ";

    
}

// Now if i want to print the age name or roll number it will not be printed why? because by default it is private inside the class
// to make it accessable we need to make it  public