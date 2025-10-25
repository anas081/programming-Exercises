#include <iostream>
using namespace std;

int main()
{
    int days;
    int patients;
    int doctors = 7;
    int treated = 0, untreated = 0;

    cout<<"Enter Number of Days: ";
    cin>>days;

    for (int day = 1; day <= days; day++)
    {
        
        cout<<"Enter Number of patients: ";
        cin>>patients;

        if(day%3==0&&untreated>treated)
        {
            doctors++;
        }

        if(patients <=doctors)
        {
            treated +=patients;
        }
        else
        {
            treated +=doctors;
            untreated +=(patients-doctors);
        }
    }

    cout<<endl<<"Treated patients: "<<treated << ".";
    cout<<endl<<"Untreated patients: "<<untreated << ".";

    return 0;
}
