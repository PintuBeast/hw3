#include<iostream>
#include<string>
using namespace std;
int main()
{
    string studentName;
    int graduationYear, currentYear;
    cout<<"Please enter your name: ";
    cin>>studentName;
    cout<<"Please enter your graduation year: ";
    cin>>graduationYear;
    cout<<"Please enter current year: ";
    cin>>currentYear;
    if(graduationYear>currentYear+5)
    {
        graduationYear=currentYear+5;
    }
    else 
    if(graduationYear<currentYear)
    {
        graduationYear=currentYear;

    }

    switch(graduationYear-currentYear)
    {

        case 0:
            cout<<studentName<<", you are Graduated";
            break;
        case 1:
            cout<<studentName<<", you are a Senior";
            break;
        case 2:
            cout<<studentName<<", you are a Junior";
            break;  
        case 3:
            cout<<studentName<<", you are a Sophmore";
            break;  
        case 4:
            cout<<studentName<<", you are a Freshman";
            break;                                
        case 5:
            cout<<studentName<<", you are not in college yet";
            break;            

    }

return 0;

}