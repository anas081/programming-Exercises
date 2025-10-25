#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int holiday,work_day,play_Time,diff;
    int sleep_time=30000;

    cout<<"Enter number of holidays: ";
    cin>>holiday;
    work_day=365-holiday;
    play_Time=(work_day*63)+(holiday*127);
    diff=sleep_time-play_Time;

    int hours = abs(diff) / 60;
    int minutes = abs(diff) % 60;

    if(diff>=0)
    {
     cout<<endl<<"Tom sleeps well";
     cout<<endl<<hours<<" hours and "<<minutes<<" minutes less for play";
    }
    else {
        cout<<endl<<"Tom will run away" << endl;
        cout<<endl<<hours<<" hours and "<<minutes<<" minutes for play";
    }
    return 0;


}