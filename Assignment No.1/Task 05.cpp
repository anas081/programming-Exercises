#include<iostream>
using namespace std;
int main()
{
    string name;
   int matric,inter,ecat;
   double agr;
   cout<<"Enter your Name:";
   cin>>name;
   cout<<endl<<"Enter Marks of Matric (out of 1100):";
   cin>>matric;
   cout<<endl<<"Enter Marks of Inter (out of 550):";
   cin>>inter;
   cout<<endl<<"Enter Marks of ECAT (out of 400):";
   cin>>ecat;
   matric=matric/1100.0*100;
   inter=inter/550.0*100;
   ecat=ecat/400.0*100;
   agr=(10.0/100*matric)+(40.0/100*inter)+(50.0/100*ecat);
   cout<<endl<<"Aggregate of student "<<name<<"is:"<<agr;

    return 0;
}