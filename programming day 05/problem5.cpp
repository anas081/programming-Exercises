#include<iostream>
using namespace std;

int main()
{
    char ch;
    double bill;
    int mins,f_mins;
    string service;

    cout<<"Enter which type of customer you are:";
    cout<<endl<<"('r' for regular and 'p' for premium): ";
    cin>>ch;
    
    if(ch=='r'||ch=='R')
    {
    cout<<endl<<"---Regular Service---";
    cout<<endl<<"Enter total minutes consumed: ";
    cin>>mins;
     if(mins>50)
     {
      f_mins=mins-50;
      bill=10.00f+(f_mins*0.20f);
     }
     else
     {
        bill=10.00f;
     }
    }

    if(ch=='p'||ch=='P')
    {
        char ch_1;
     cout<<endl<<"---Premium User---";
     
     cout<<endl<<"Press 'D' for day time and 'N' for night time: ";
     cin>>ch_1;
      if(ch_1=='d'||ch_1=='D')
      {
        cout<<endl<<"---Minutes consumed in Day time---";
        cout<<endl<<"Enter total minutes consumed:";
        cin>>mins;

        if(mins>75)
        {
         f_mins=mins-75;
         bill=25.00f+(f_mins*0.10f);
        } 
        else
        {  
            bill=25.00f;
        }

      }

      if(ch_1=='n'||ch_1=='N')
      {   
       cout<<endl<<"---Minutes consumed in night time---";
       cout<<endl<<"Enter total minutes consumed:";
       cin>>mins;

       if(mins>100)
       {
        f_mins=mins-100;
        bill=25.00f+(f_mins*0.05f);
       } 
       else
       {
        bill=25.00f;
       }
      }  


    }
    if(ch=='p'||ch=='P')
    service="Premium";
    else
    service ="Regular";
cout<<endl<<"Your service: "<<service;    
cout<<endl<<"Total minutes Consumed:"<<mins;
cout<<endl<<"Total charges: "<<bill;
return 0;


}