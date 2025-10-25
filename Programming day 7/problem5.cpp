#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number,tons;
    double minibusTons = 0, truckTons = 0, trainTons = 0, totalTons = 0;
    double totalCost, averagePrice;

    cout<<"Enter Number of Cargos: ";
    cin>>number;

    cout<<endl<<"Enter tons: ";

    for(int i=0; i<number;i++)
    {
        cout<<endl;
        cin>>tons;

        totalTons +=tons;
        if(tons<=3)
            minibusTons +=tons;
        else if(tons<=11)
            truckTons +=tons;
        else
            trainTons +=tons;

    }
    totalCost =minibusTons*200+truckTons*175+trainTons*120;
    averagePrice= totalCost/totalTons;

    cout<<endl<<fixed << setprecision(2);
    cout<<endl<<averagePrice;

    cout<<endl<<(minibusTons/totalTons)*100<<"%";
    cout<<endl<<(truckTons/totalTons)*100<<"%";
    cout<<endl<<(trainTons/totalTons)*100<<"%";

    return 0;


}