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

   void getname(){
      cout<<name<<endl;
   }
   void getage(){
      cout<<age<<endl;
   }
   int getroll_no(){
     return roll_number;
   }
   string get_grade(int pin){
    if(pin==123)
        return grade;
    return "Wrong";    

   }

};

int main(){
    
    Student s1;
    s1.setname("Prince");
    s1.setage(22);
    s1.setroll_number(122);
    s1.setgrade("B+");
    s1.getname();
    s1.getage();
    cout<<s1.getroll_no();
    cout<<s1.get_grade(123)<<endl;
    

}