#include<iostream>
using namespace std;
 
int main()
{
    string month;
    int nights;
    double studio_Dis,apart_Dis,studio,apartment;

    cout<<"Enter month: ";
    cin>>month;    
    cout<<endl<<"Enter number of stays: ";
    cin>>nights;

    if(month=="May"||month=="October")
    {
        studio=nights*50;
        apartment=nights*65;
        if(nights>7&&nights<=14)
        {
            studio_Dis=(5.0/100)*studio;
            studio=studio-studio_Dis;
        }
        else if(nights>14)
        {
            studio_Dis=(30.0/100)*studio;
            studio=studio-studio_Dis;
            apart_Dis=(10.0/100)*apartment;
            apartment=apartment-apart_Dis;
        }
    }
    else if(month=="June"||month=="September")
    {
        studio=nights*75.20;
        apartment=nights*68.70;
        if(nights>14)
        {
            studio_Dis=(20.0/100)*studio;
            studio=studio-studio_Dis;
            apart_Dis=(10.0/100)*apartment;
            apartment=apartment-apart_Dis;
        }
    }
    else if(month=="July"||month=="August")
    {
        studio=nights*76;
        apartment=nights*77;
        if(nights>14)
        {
            apart_Dis=(10.0/100)*apartment;
            apartment=apartment-apart_Dis;
        }
    }

    cout<<endl<<"Apartment: "<<apartment<<"$."<<endl<<"Studio: "<<studio<<"$.";

    return 0;
}

