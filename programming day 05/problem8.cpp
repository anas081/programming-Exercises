#include<iostream>
using namespace std;

int main()
{
    int exam_Hour,exam_Min,arrive_Hour,arrive_Min;
    int exam_Total,arrive_Total,diff;

    cout<<"Enter exam starting (hour): ";
    cin>>exam_Hour;
    cout<<endl<<"Enter exam starting (minutes): ";
    cin>>exam_Min;
    cout<<endl<<"Enter arrival (hour): ";
    cin>>arrive_Hour;
    cout<<endl<<"Enter arrival (minutes): ";
    cin>>arrive_Min;

    exam_Total=exam_Hour*60+exam_Min;
    arrive_Total=arrive_Hour*60+arrive_Min;
    diff=arrive_Total-exam_Total;

    if(diff>0)
    {
        cout<<endl<<"Late";
        if(diff<60)
            cout<<endl<<diff<<" minutes after the start";
        else
        {
            int h=diff/60;
            int m=diff%60;

            if(m<10)
                cout<<endl<<h<<":0"<<m<<" hours after the start";
            else
                cout<<endl<<h<<":"<<m<<" hours after the start";
        }
    }
    else if(diff==0||diff>=-30)
    {
        cout<<endl<<"On time";
        if(diff!=0)
            cout<<endl<<abs(diff)<<" minutes before the start";
    }
    else
    {
        cout<<endl<<"Early";
        diff=abs(diff);
        if(diff<60)
            cout<<endl<<diff<<" minutes before the start";
        else
        {
            int h=diff/60;
            int m= diff%60;
            if(m<10)
                cout<<endl<<h<<":0"<<m<<" hours before the start";
            else
                cout<<endl<<h<<":"<<m<<" hours before the start";
        }
    }
    return 0;
}
