#include<iostream>
#include<string>
using namespace std;
int ZodiacSign(int day , string month);
int main()
{
    int day;
    string month;
    cout<<"Enter the day of month:";
    cin>> day;
    cout<<"Enter the month (1st alphabet should be capital):";
    cin>> month;
     ZodiacSign(day , month);

}
int ZodiacSign(int day , string month)
{
    //ram
    if(month == "March")
    {
        if(day >= 21 && day <= 30 )
        cout<<"Aries";
    }
    if(month == "April")
    {
        if(day >= 1 && day <= 19)
        cout<<"Aries";
    }
    //bull
    if(month == "April")
    {
        if(day >= 20 && day <= 30 )
        cout<<"Taurus";
    }
    if(month == "May")
    {
        if(day >= 1 && day <= 20 )
        cout<<"Taurus";
    }
    //twins
    if(month == "May")
    {
        if(day >= 21 && day <= 30 )
        cout<<"Gemini";
    }
    if(month == "June")
    {
        if(day >= 1 && day <= 20 )
        cout<<"Gemini";
    }
    //crab
    if(month == "June")
    {
        if(day >= 21 && day <= 30 )
        cout<<"Cancer";
    }
    if(month == "July")
    {
        if(day >= 1 && day <= 22 )
        cout<<"Cancer";
    }
    //lion
    if(month == "July")
    {
        if(day >= 22 && day <= 30 )
        cout<<"Leo";
    }
    if(month == "August")
    {
        if(day >= 1 && day <= 22 )
        cout<<"Leo";
    }
    //virgin
    if(month == "August")
    {
        if(day >= 23 && day <= 30 )
        cout<<"Leo";
    }
    if(month == "September")
    {
        if(day >= 1 && day <= 22 )
        cout<<"Leo";
    }
    //scales
    if(month == "Septmber")
    {
        if(day >= 23 && day <= 30 )
        cout<<"Libra";
    }
    if(month == "October")
    {
        if(day >= 1 && day <= 22 )
        cout<<"Libra";
    }
    //scorpion
    if(month == "October")
    {
        if(day >= 23 && day <= 30 )
        cout<<"Scorpio";
    }
    if(month == "November")
    {
        if(day >= 1 && day <= 21 )
        cout<<"Scorpio";
    }
    //archer
    if(month == "November")
    {
        if(day >= 22 && day <= 30 )
        cout<<"Sagittarius";
    }
    if(month == "December")
    {
        if(day >= 1 && day <= 21 )
        cout<<"Sagittarius";
    }
    //goat
    if(month == "Deecember")
    {
        if(day >= 22 && day <= 30 )
        cout<<"Capricorn";
    }
    if(month == "January")
    {
        if(day >= 1 && day <= 19 )
        cout<<"Capricorn";
    }
    //water bear
    if(month == "January")
    {
        if(day >= 20 && day <= 30 )
        cout<<"Aquarius";
    }
    if(month == "February")
    {
        if(day >= 1 && day <= 18 )
        cout<<"Aquarius";
    }
    //fishes
    if(month == "February")
    {
        if(day >= 19 && day <= 29 )
        cout<<"Pisces";
    }
    if(month == "March")
    {
        if(day >= 1 && day <= 20 )
        cout<<"Pisces";
    }
    
}
