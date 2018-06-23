#include<iostream>
#include "Faculty.h"
using namespace std;
class Akinator
{
  public:
  Akinator()
  {
    this->ans="yes";
    this->name=" ";
  }
  void Start()
  {
    cout<<endl<<"                       Hello,I am Akinator  "     <<endl<<endl;
    cout<<"      Think about any UBIT teacher and I'll try to guess who it is !! " <<endl<<endl;
    cout<<"Enter your name : ";
    cin>> this->name;
    system("cls");
    faculty Teacher;
    cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
 while(ans == "yes" || ans == "Yes" )
 {
 Teacher.Faculty();
 cout<<endl<<"Wanna continue??"<<endl; 
 cin>>ans;
 system("cls");
 cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
 }
  }
 protected:
  string ans;
  string name;
};