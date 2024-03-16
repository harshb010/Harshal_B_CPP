/* Write a program to print the volume of a box by creating a class named 
'Volume' with an initialization list to initialize its length, breadth and height. 
(just to make you familiar with initialization lists)*/
#include <iostream>
using namespace std;

class Volume
{
    int l,w,h,volume;

    public:
        Volume(int a,int b,int c);
        void vol();
};

Volume::Volume(int a,int b,int c)
{
    l=a;
    w=b;
    h=c;
    volume=l*w*h;
}

void Volume::vol()
{
    cout<<"\nDimensions Of the Box are : \n";
    cout<<"\nLength of Box : "<<l<<"\nWidth of Box : "<<w<<"\nHeight of Box : "<<h<<"\nVolume of Box :"<<volume<<"\n";
}


int main()
{
    Volume x(2,5,3),y(6,2,4);

    x.vol();
    y.vol();

    return 0;
}