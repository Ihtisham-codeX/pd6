#include<iostream>
#include<string>
using namespace std;
float CallAmoutCalculator(string service ,  int minutes );
int main()
{
    int minutes;
    string service;
    float amount_due;
    cout<<"Enter the service code ( For Regular r/R and For premium p/P ) :";
    cin>> service;
    cout<<"Enter the minutes :";
    cin >> minutes;
    amount_due = CallAmoutCalculator( service ,minutes );
    cout<< "The Due Amount = " << amount_due <<endl; 
}
float CallAmoutCalculator(string service , int minutes )
{
    float ChargedTime, amount , amount_due;
    if(service == "p" || service =="P")
    {
        string time;
        cout<<"Enter Time ( For day d/D and For Night n/N ) :";
        cin>> time;
        
        if(time == "D" || time == "d")
        {
            if(minutes >= 75)
            {
                ChargedTime = minutes - 75;
                amount = ChargedTime * 0.10;
            }
            if(minutes < 75)
            {
                amount = 0;
            }
        }
        if(time == "N" || time == "n")
        {
             if(minutes >= 100)
            {
                ChargedTime = minutes - 100;
                amount = ChargedTime * 0.05;
            }
            if(minutes < 100)
            {
                amount = 0;
            }
        }
        amount_due = 25 + amount;
    }
    if(service == "r" || service == "R")
    {
         if(minutes >= 50)
            {
                ChargedTime = minutes - 50;
                amount = ChargedTime * 0.20;
            }
            if(minutes < 50)
            {
                amount = 0;
            }
            amount_due = 10 + amount;
 
    }
    return amount_due;
        

        
}
