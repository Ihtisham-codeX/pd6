#include<iostream>
#include<string>
using namespace std;
float StayChargeCalculator( string month , float stays );
int main()
{
    float stays ;
    string month;
    cout<<"Enter the Month - May, June, July, August, September or October : ";
    cin >> month;
    cout<< "Enter the Number of stays :  ";
    cin >> stays;
    StayChargeCalculator(  month , stays );


}
 float StayChargeCalculator( string month , float stays )
{
    
   
    float S_charges , A_charges , S_dis , A_dis;
     
    if(month == "May" || month == "October" )
    {
        S_charges = 50 * stays;
        A_charges = 65 * stays;
        
        if(stays >= 7 && stays < 14)
        {
            S_dis = S_charges * 0.95;
            A_dis = A_charges; 
        }
        if(stays >= 14)
        {
            S_dis = S_charges * 0.70;
            
        }
        if(stays < 7)
        {
             S_dis = S_charges;
             A_dis = A_charges;
    }
       
    }
    if( month == " June" || month == "September" )
    {
        S_charges = 75.2 * stays;
        A_charges = 68.7 * stays;
        if(stays >=14)
        {
            S_dis = S_charges * 0.80;
           
        }
        if(stays < 14)
        {
          S_dis = S_charges;  
          A_dis = A_charges;
        }

    }
    if( month == " July" || month == "August" )
    {
        S_charges = 76 * stays;
        A_charges = 77 * stays;
        if(stays >=14)
        {
            A_dis = A_charges * 0.90;
           
        }
        
          S_dis = S_charges;  
          A_dis = A_charges;
    }    
    if(month != "May" && month != "October" && month != "may" && month != "october" &&  month != " June" && month != "September" &&  month != " June" && month != "September")
    {
        S_dis = S_charges;
    }
    if(month != "May" && month != "October" && month != "may" && month != "october" &&  month != " June" && month != "September" &&  month != " June" && month != "September" && stays < 14)
    {
        A_dis = A_charges;
    }
    if(stays >= 14 )
    {
        A_dis = A_charges * 0.90;
    }
    cout<< "STUDIO   :  " << S_dis << "       APARTMENT   :  " << A_dis <<endl;

    
}






 