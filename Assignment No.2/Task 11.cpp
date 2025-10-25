#include<iostream>
using namespace std;
int main()
{
    int age,moves;
    float avg;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<endl<<"Enter number of times you moved: ";
    cin>>moves;
    avg=(float)age/(moves+1);
    cout<<endl<<"Average years lived in one house: "<<avg;
    return 0;
}
