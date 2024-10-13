#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int DecideActivity(string temp , string humidity);
int main()
{
    string temp, humidity;
    cout<<"Enter Tem[erature (warwm or cold)";
    cin>> temp;
    cout<<"Enter Humidity(dry or humid) ";
    cin>> humidity;
    DecideActivity(temp ,humidity);

}
int DecideActivity(string temp , string humidity)
{
    if(temp == "warm")
    {
        if( humidity == "dry")
        {
            cout<<"Play Tennis";
        }
        if( humidity == "humid")
        {
            cout<<"swim";
        }
    }
    if( temp == "cold")
    {
        if( humidity == "dry")
        {
            cout<<"Play BasketBall";
        }
        if( humidity == "humid")
        {
            cout<<"Watch tv";
        }
    }
    
}
