#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'||ch=='I'|| ch=='O'|| ch=='U')
    {
      
      cout<<endl<<"It is a vowel";
    } 
    if(ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&& ch!='u'&&ch!='A'&& ch!='E'&&ch!='I'&& ch!='O'&& ch!='U')
    {
        if(ch!='1'&& ch!='2' && ch!='3'&& ch!='4'&& ch!='5'&& ch!='6'&& ch!='7'&& ch!='8'&& ch!='9')
        {
             cout<<endl<<"It is a consonent";
        }
    }
   
    if(ch=='1'|| ch=='2'||ch=='3'|| ch=='4'|| ch=='5'||ch=='6'|| ch=='7'||ch=='8'|| ch=='9')
    cout<<endl<<"It is a Number";



    return 0;
}