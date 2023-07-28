#include<iostream>
using namespace std;
int main()
{
    const double MORNING_RATE = 0.25;
    const double PEAK_RATE = 0.40;
    const double WEEKEND_RATE = 0.15;
    const double DAY_START = 8.00;
    const double DAY_END = 18.00;
    const double MAX_MINUTES = 60.0;
    char dayName1,dayName2;
    cout<<"Enter day of the week: (Mo, Tu, We,Th, Fr, Sa, Su): ";
    cin>>dayName1>>dayName2;
    double hr,min;
    char colon;
    cout<<"Enter the time at which the call started(24-hr format, colon separated- eg. 13:30) :";
    cin>>hr>>colon>>min;
    double startTime;
    startTime= hr + min/MAX_MINUTES;
    double callDuration;
    cout<<"Enter call duration in minutes: ";
    cin>>callDuration;
    switch(dayName1)
    {
        case 'M':
        case 'm':
        case 'T':
        case 't':
        case 'W':
        case 'w':
        case 'F':
        case 'f':
            if(startTime >= 8.00 && startTime <= 18.00)
            {
                cout<<"The cost of the call is: "<<PEAK_RATE*callDuration;
            }
            else
            {
                cout<<"The cost of the call is: "<<MORNING_RATE*callDuration;
            }
            break;
        case 's':
        case 'S':
            cout<<"The cost of the call is: "<<WEEKEND_RATE*callDuration;  
            break;  
    }
return 0;

}