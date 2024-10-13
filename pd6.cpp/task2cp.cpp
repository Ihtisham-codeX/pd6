#include<iostream>
#include<string>
using namespace std;
float CalculateAverage(float english , float maths , float chemistry , float science , float biology);
string CalculateGrade(float percentage);
int main()
{
    float percentage , english , maths , chemistry , science , biology;
     
    cout<< "Enter marks In English out of hundred :";
    cin>> english;
    cout<< "Enter marks In Maths out of hundred :";
    cin>> maths;
    cout<< "Enter marks In Chemistry out of hundred :";
    cin>> chemistry;
    cout<< "Enter marks In Science out of hundred :";
    cin>> science;
    cout<< "Enter marks In Biology out of hundred :";
    cin>> biology;
    percentage = CalculateAverage( english , maths , chemistry , science , biology);
    
    cout<<"Total Percentage is :"<< percentage<<endl;

    CalculateGrade(percentage);


}
float CalculateAverage(float english , float maths , float chemistry , float science , float biology)
{
    float T_Percentage;
    T_Percentage= ((english) + (maths) + ( chemistry) + ( science) + (biology))/5;
    return T_Percentage;

}
string CalculateGrade(float percentage)
{
    if(percentage >= 90 && percentage <=100 )
    {
        cout<<"A+";
    }
    if(percentage >= 80 && percentage < 90 )
    {
        cout<<"A";
    }
    if(percentage >= 70 && percentage <80 )
    {
        cout<<"B+";
    }
    if(percentage >= 60 && percentage < 70  )
    {
        cout<<"B";
    }
    if(percentage >= 50 && percentage < 60 )
    {
        cout<<"C";
    }
    if(percentage >= 40 && percentage < 50 )
    {
        cout<<"D";
    }
    if(percentage < 40 )
    {
        cout<<"F";
    }
}