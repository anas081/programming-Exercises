#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int totalNumbers,currentNum;
    int countRange1,countRange2,countRange3,countRange4,countRange5;
    double percentRange1,percentRange2,percentRange3,percentRange4,percentRange5;
    
    countRange1=0;
    countRange2=0;
    countRange3=0;
    countRange4=0;
    countRange5=0;
    
    cout<<"Enter total count of numbers: ";
    cin>>totalNumbers;
    
    for(int i=0; i<totalNumbers; i++)
    {
        cout<<endl<<"Enter number "<<i+1<<": ";
        cin>>currentNum;
        
        if(currentNum<200)
            countRange1++;
        else if(currentNum>=200&&currentNum<=399)
            countRange2++;
        else if(currentNum>=400&&currentNum<=599)
            countRange3++;
        else if(currentNum>=600&&currentNum<=799)
            countRange4++;
        else
            countRange5++;
    }
    
    percentRange1=(countRange1*100.0)/totalNumbers;
    percentRange2=(countRange2*100.0)/totalNumbers;
    percentRange3=(countRange3*100.0)/totalNumbers;
    percentRange4=(countRange4*100.0)/totalNumbers;
    percentRange5=(countRange5*100.0)/totalNumbers;
    
    cout<<fixed<<setprecision(2);

    cout<<endl<<percentRange1<<"%";
    cout<<endl<<percentRange2<<"%";
    cout<<endl<<percentRange3<<"%";
    cout<<endl<<percentRange4<<"%";
    cout<<endl<<percentRange5<<"%";
    
    return 0;
}

