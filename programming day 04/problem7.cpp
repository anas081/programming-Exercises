#include<iostream>
using namespace std;

int main()
{
    char figure;

    cout<<"Select figure: ";
    cout<<endl<<"For Square (press 1)";
    cout<<endl<<"For Rectangle (press 2)";
    cout<<endl<<"For Circle (press 3)";
    cout<<endl<<"For Triangle (press 4)";
    
    cout<<endl<<"Type: ";

    cin>>figure;

    if(figure=='1')
    {
    float sq_Length,sq_area;
    cout<<endl<<"---SQUARE---";
    cout<<endl<<"Enter length of side of Square: ";
    cin>> sq_Length;
    sq_area=(sq_Length*sq_Length);
    cout<<endl<<"Area of Square: "<<sq_area;
    }

    else if(figure=='2')
    {
    float rec_Length,rec_width,rec_area;
    cout<<endl<<"---RECTANGLE---";
    cout<<endl<<"Enter length of Rectangle: ";
    cin>> rec_Length;
    cout<<endl<<"Enter width of Rectangle: ";
    cin>> rec_width;
    rec_area=(rec_Length*rec_width);
    cout<<endl<<"Area of Rectangle: "<<rec_area;
    }

    else if(figure=='3')
    {
    float circle_Radi,circle_area;
    
    cout<<endl<<"---CIRCLE---";
    cout<<endl<<"Enter Radius of Circle: ";
    cin>> circle_Radi;
    circle_area=(3.14*(circle_Radi*circle_Radi));
    cout<<endl<<"Area of Circle: "<<circle_area;
    }
    else if(figure=='4')
    {
    float tri_Base,tri_height,tri_area;
    cout<<endl<<"---TRIANGLE---";
    cout<<endl<<"Enter length of Base of Triangle: ";
    cin>> tri_Base;
    cout<<endl<<"Enter length of Height of Triangle: ";
    cin>> tri_height;
    tri_area=(0.5*tri_Base*tri_height);
    cout<<endl<<"Area of Triangle: "<<tri_area;
    }
    else
    cout<<endl<<"Invalid character";

    return 0;

}