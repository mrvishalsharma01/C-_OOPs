// It is a usser defined data-type and a blue print for creating objects

// Important Point:- Now by default the data member is private but ther are other ways to access it by writing functin inside class 
// i.e by getter and setter functions

#include <bits/stdc++.h>
using namespace std;

class Student{

    string name;
    int age, roll_number;
    string grade;

    //Function getter and setter
    public:

    void setname(string s){
        name=s;
    }

    void setage(int a){
        age=a;
    }
    void setroll_number(int r){
        roll_number=r;
    }
    void setgrade(string s){
        grade=s;
    }



};

int main(){
    
    Student s1;
    s1.setname("Prince");
    s1.setage(22);
    s1.setroll_number(122);
    s1.setgrade("B+");

    

}