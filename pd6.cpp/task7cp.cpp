#include<iostream>
using namespace std;
int satus(int start_minutes , int start_hour , int arrival_minutes , int arrival_hours );
int main()
{
    int start_minutes ,start_hour , arrival_minutes , arrival_hours;
    cout<<" ENTER START TIME (hours) : ";
    cin>> start_hour;
    cout<<" ENTER START TIME (minutes) : ";
    cin>> start_minutes;
    cout<<"ENTER THE ARRIVAL TIME (hour) : ";
    cin>> arrival_hours;
    cout<<"ENTER THE ARRIVAL TIME (minutes) : ";
    cin>> arrival_minutes;
    satus(start_minutes ,  start_hour , arrival_minutes , arrival_hours );

}
int satus(int start_minutes , int start_hour , int arrival_minutes , int arrival_hours )
{
    int hour, minutes;
    int total_start_minutes , total_arrival_minutes , difference;
    total_start_minutes = start_minutes + (start_hour*60);
    total_arrival_minutes = arrival_minutes + (arrival_hours*60);
    //late
    if(total_arrival_minutes > total_start_minutes  )
    {
        difference = total_arrival_minutes - total_start_minutes;
        cout<<"LATE";
        if(difference >= 60)
        {
            hour = difference / 60;
            minutes = difference % 60;
            cout<<"\n";
            cout<< hour << " : " << minutes <<"Hours after the start";
        }
        if(difference < 60)
        {
            cout<<"\n";
            cout<< difference <<"  minutes sfter start";
           
        }

        
    }

    //early and on time
    if(total_arrival_minutes <= total_start_minutes  )
    {
        difference = total_start_minutes - total_arrival_minutes;
        
        if(difference >= 60)
        {
            hour = difference / 60;
            minutes = difference % 60;
            cout<<"Early \n ";
            cout<< hour << " : " << minutes <<"Hours before the start";
        }
        if(difference < 60)
        {
            cout<<"On time \n";
            cout<< difference <<"  minutes before start";
           
        }

        
    }
}
          
    





