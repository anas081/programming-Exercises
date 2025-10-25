#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number;
    int nums;
    int count2=0,count3=0,count4=0;

    cout<<"Enter Total Numbers: ";
    cin>>number;

    if(number>=1 && number<=1000)
    {
        cout<<endl<<"Enter Numbers: "<<endl;
        for(int i=1; i<=number;i++)
        {
            
            cin>>nums;

            if(nums % 2==0)
            count2++;
            if(nums % 3==0)
            count3++;
            if(nums % 4==0)
            count4++;
        
        }

        cout<<fixed<<setprecision(2);
        cout<<endl<<(count2*100.0/number)<<"%";
        cout<<endl<<(count3*100.0/number)<<"%";
        cout<<endl<<(count4*100.0/number)<<"%";

    }
    else
    cout<<endl<<"Number is not in the limits";

    return 0;
}