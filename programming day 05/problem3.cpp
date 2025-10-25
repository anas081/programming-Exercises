#include<iostream>
using namespace std;

int main()
{
    string name;
    float total_marks,sub1,sub2,sub3,sub4,sub5,percentage;
    string grade;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter marks of 5 subjects: ";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    total_marks=sub1+sub2+sub3+sub4+sub5;
    
    if(total_marks>500||sub1>100||sub2>100||sub3>100||sub4>100||sub5>100||sub1<0||sub2<0||sub3<0||sub4<0||sub5<0)
    {
        cout<<"Invalid input"<<endl;
    }
    else{
    
    percentage=(total_marks/500)*100;
    
    if(percentage>=90)
        grade="A+";
    else if(percentage>=80)
        grade="A";
    else if(percentage>=70)
        grade="B+";
    else if(percentage>=60)
        grade="B";
    else if(percentage>=50)
        grade="C";
    else if(percentage>=40)
        grade="D";
    else
        grade="F";

        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Total Marks: "<<total_marks;
        cout<<endl<<"Percentage: "<<percentage<<"%";
        cout<<endl<<"Grade: "<<grade;
    }
        return 0;
        
}