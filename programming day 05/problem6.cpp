#include<iostream>
using namespace std;

int main()
{
    float week_banana=2.50,week_apple=1.20,week_orange=0.85,week_grapefruit=1.45,week_kivi=2.70, week_pineapple=5.50,week_grapes=3.85;
    
    float weekend_banana=2.70,weekend_apple=1.25,weekend_orange=0.90,weekend_grapefruit=1.60,weekend_kivi=3.00, weekend_pineapple=5.60,weekend_grapes=4.20;
    double price=0;

    string day,fruit;
    float quantity;
    cout<<"Enter Fruit: ";
    cin>>fruit;
    cout<<endl<<"Enter day: ";
    cin>>day;
    cout<<endl<<"Enter Qauntity: ";
    cin>>quantity;

    if(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday")
    {
        if(fruit=="Apple"||fruit=="Banana"||fruit=="Orange"||fruit=="Grapefruit"||fruit=="Kivi"||fruit=="Pineapple"||fruit=="Grapes")
        {
            if(fruit=="Apple")
            {
                price=quantity*week_apple;
            }
            else if(fruit=="Banana")
            price=quantity*week_banana;
            else if(fruit=="Orange")
            price=quantity*week_orange;
            else if(fruit=="Grapefruit")
            price=quantity*week_grapefruit;
            else if(fruit=="Kivi")
            price=quantity*week_kivi;
            else if(fruit=="Pineapple")
            price=quantity*week_pineapple;
            else if(fruit=="Grapes")
            price=quantity*week_grapes;

            cout<<endl<<"Total price of "<<fruit<<" of quantity: "<<quantity<<" is: "<<price;

        }
        else
        cout<<endl<<"Fruit is invalid";
    }


    else if(day=="Saturday"||day=="Sunday")
    {
        if(fruit=="Apple"||fruit=="Banana"||fruit=="Orange"||fruit=="Grapefruit"||fruit=="Kivi"||fruit=="Pineapple"||fruit=="Grapes")
        {
            if(fruit=="Apple")
            {
                price=quantity*weekend_apple;
            }
            else if(fruit=="Banana")
            price=quantity*weekend_banana;
            else if(fruit=="Orange")
            price=quantity*weekend_orange;
            else if(fruit=="Grapefruit")
            price=quantity*weekend_grapefruit;
            else if(fruit=="Kivi")
            price=quantity*weekend_kivi;
            else if(fruit=="Pineapple")
            price=quantity*weekend_pineapple;
            else if(fruit=="Grapes")
            price=quantity*weekend_grapes;

            cout<<endl<<"Total price of "<<fruit<<" of quantity: "<<quantity<<" is: "<<price;

        }
        else
        cout<<endl<<"Fruit is invalid";

    }
    else 
    cout<<endl<<"Day is invalid";
    
    return 0;

    

    
}
