#include<iostream>
using namespace std;

int main()
{
    int date;
    string month;
    cout<<"Enter date: ";
    cin>>date;
    cout<<endl<<"Enter month: ";
    cin>>month;
    
    if((date>=20&&month=="January")||(date<=18&&month=="February"))
        cout<<"The Water Bearer"<<endl;
        else if(date>=19&&month=="February"||(date<=20&&month=="March"))
        cout<<endl<<"The Fish"<<endl;
        else if(date>=21&&month=="March"||(date<=19&&month=="April"))
        cout<<endl<<"The Ram"<<endl;
        else if(date>=20&&month=="April"||(date<=20&&month=="May"))
        cout<<endl<<"The Bull ";
        else if(date>=21&&month=="May"||date>=20&&month=="June")
        cout<<endl<<"The Twins";
        else if(date>=21&&month=="June"||(date<=22&&month=="July"))
        cout<<endl<<"The Crab";
        else if(date>=23&&month=="July"||(date<=22&&month=="August"))
        cout<<endl<<"The Lion";
        else if(date>=23&&month=="August"||(date<=22&&month=="September"))
        cout<<endl<<"The Virgin";
        else if(date>=23&&month=="September"||(date<=22&&month=="October"))
        cout<<endl<<"The Scales";
        else if(date>=23&&month=="October"||(date<=21&&month=="November"))
        cout<<endl<<"The Scorpion";
        else if(date>=22&&month=="November"||(date<=21&&month=="December"))
        cout<<endl<<"The Archer";
        else if(date>=22&&month=="December"||(date<=19&&month=="January"))
        cout<<endl<<"The Goat";
        else 
        cout<<"Invalid input";
        return 0;

}