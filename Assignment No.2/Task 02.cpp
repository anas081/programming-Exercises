#include<iostream>
using namespace std;
int main()
{
    long n,fps,total;
    cout<<"Enter Number of minutes: ";
    cin>> n;
    
    cout<<endl<<"Enter Number of Frames per second: ";
    cin>> fps;
    n=n*60;
    total=n*fps;
    cout<<endl<<"Total number of frames: "<<total;
   
    return 0;
    

}