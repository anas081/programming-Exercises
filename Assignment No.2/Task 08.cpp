#include<iostream>
using namespace std;
int main()
{
    float vegPrice,fruitPrice,totalCoins,totalRps;
    int vegKg,fruitKg;
    cout<<"Enter vegetable price per kg (coins): ";
    cin>>vegPrice;
    cout<<endl<<"Enter fruit price per kg (coins): ";
    cin>>fruitPrice;
    cout<<endl<<"Enter total kg of vegetables: ";
    cin>>vegKg;
    cout<<endl<<"Enter total kg of fruits: ";
    cin>>fruitKg;
    totalCoins=(vegPrice*vegKg)+(fruitPrice*fruitKg);
    totalRps=totalCoins/1.94;
    cout<<endl<<"Total earnings in Rps: "<<totalRps;
    return 0;
}
