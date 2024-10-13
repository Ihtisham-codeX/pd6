#include<iostream>
#include<string>
using namespace std;
float prices(string day , string fruit , float quantity);
int main()
{
    string day, fruit;
    float price , quantity;
    cout<<"Enter the day : ";
    cin >> day;
    cout<<"Enter the Fruit : ";
    cin >> fruit;
    cout<<"Enter the quantity : ";
    cin>> quantity;
    price = prices(day , fruit , quantity);
    cout<<"Amount : " << price;
}
float prices(string day , string fruit , float quantity)
{
    float price;
    if( day == "sunday" || day == "saturday")
    {
        if(fruit=="banana")
        {
            price = quantity *2.70; 
        }
        if(fruit=="apple")
        {
            price = quantity *1.25;
        }
        if(fruit=="orange")
        {
            price = quantity *0.90;
        }
        if(fruit=="grapefruit")
        {
            price = quantity *1.60;
        }
        if(fruit=="kiwi")
        {
            price = quantity *3.00;
        }
        if(fruit=="pineapple")
        {
            price = quantity *5.60;
        }
        if(fruit=="grapes")
        {
            price = quantity *4.20;
        }

    }
    if( day != "sunday" || day != "saturday")
    {
        if(fruit=="banana")
        {
            price = quantity *2.50;
        }
        if(fruit=="apple")
        {
            price = quantity *1.20;
        }
        if(fruit=="apple")
        {
            price = quantity *0.85;
        }
        if(fruit=="grapefruit")
        {
            price = quantity *1.45;
        }
        if(fruit=="kiwi")
        {
            price = quantity *2.70;
        }
        if(fruit=="pineapple")
        {
            price = quantity *5.50;
        }
        if(fruit=="grapes")
        {
            price = quantity *3.85;
        }

    }
    return price;
}