#include<iostream>
#include<string>
using namespace std;
int PointCheck(int x, int y , int h);
int main()
{
    int x, y, h;
    cout<< "height : ";
    cin>> h;
    cout<<" x-cordinates : ";
    cin>> x;
    cout<< " y -cordinates : ";
    cin >> y;
    PointCheck( x,  y , h);

}
int PointCheck(int x, int y , int h)
{
//on border
if( (x>=0 || x <= (3*h)) && (y == h || y == 0))
{
    cout<<"on border";
}
else if(( x==h || x == (2*h) )&& (y >= h && y <= (4*h) ))
{
    cout<<"on border";   
}

//inside
else if( (x>=0 || x <= (3*h)) && y < h )
{
    cout<<"inside";
}
else if(( x>=h && x <= (2*h) )&& (y >= h && y <= (4*h) ))
{
    cout<<"inside";

}
//outside
else
{
    cout<<"outside";
}
}