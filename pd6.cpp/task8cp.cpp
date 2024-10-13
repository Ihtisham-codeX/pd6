#include<iostream>
#include<string>
using namespace std;
int VolleyBall( string year , int holidays , int weekends );
int main()
{
    string year;
    int holidays , weekends ;
    cout<<"Enter year type (commom , leap) : ";
    cin >> year;
    cout<< "holidays : ";
    cin >> holidays ;
    cout<< "weekends";
    cin >> weekends ;

    VolleyBall( year , holidays ,  weekends );

    

}
int VolleyBall( string year , int holidays , int weekends )
{
    float  sofia , hometown;
    int playtime ;
    
    // plays in sofia on  saturdays   = not travelling + not working + 2/3 of holidays
    sofia =( 36  + ((2.0/3.0)*holidays)) - weekends;
    hometown = weekends ; 
    playtime = sofia + hometown;
    if(year == "leap")
    {
        
        playtime = (playtime*0.15) + playtime;
    }
    cout<<playtime;

}