#include<iostream>
using namespace std;
int main()
{
   int win,loss,draw,points;
   cout<<"Enter Number of Wins: ";
   cin>>win;
   cout<<endl<<"Enter Number of Losses: ";
   cin>>loss;
   cout<<endl<<"Enter Number of Draws: ";
   cin>>draw;
   points=(3*win)+(1*draw)+(0*loss);
   cout<<endl<<"The team has obtained "<<points<<" points in the tournament";
system("pause");   
   return 0;
}