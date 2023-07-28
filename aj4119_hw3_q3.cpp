#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Please enter the value of a: ";
    cin>>a;
    cout<<"Please enter the value of b:";
    cin>>b;
    cout<<"Please enter the value of c: ";
    cin>>c;
    double determinant;
    determinant=b*b-4*a*c;
    if(a == 0 && b == 0 && c == 0)
    {
        cout<<"This equation has infinite solutions";
    }
    else if(a == 0 && b == 0 && c != 0)
    {
        cout<<"This equation has No solution";
    }
    else if(a == 0 && b !=0)
    {
        cout<<"This equation has a single real solution x= "<<-1*c/b;

    }
    else if(a !=0 && determinant < 0)
    {
        cout<<"This equation has No real solution";

    }
    else if (a !=0 && determinant > 0)
    {
        double solution1, solution2;
        solution1= (-1*b + sqrt(determinant))/(2*a);
        solution2= (-1*b - sqrt(determinant))/(2*a);
        cout<<"This equation has two real solutions: x= "
            <<solution1<<" and x= "<<solution2 ;    
    }
    else if(a!=0 && determinant == 0)
    {
         cout<<"This equation has a single real solution x= "<<-1*b/(2*a);
    }

return 0;

}