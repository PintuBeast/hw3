#include<iostream>
using namespace std;
int main()
{
    double number;
    int roundingMethod;
    cout<<"Please enter a Real number: \n";
    cin>>number;
    cout<<"Please choose rounding method\n"
        <<"1. Floor round\n"
        <<"2. Ceiling round\n"
        <<"3. Round to the nearest whole number\n";
    cin>>roundingMethod;
    int integerPart;
    double decimalPart;
    integerPart=number;
    decimalPart=number-integerPart;
    if(decimalPart < 0)
    {
        decimalPart = decimalPart * -1;
    }
    if(decimalPart == 0)
    {
        cout<<integerPart;
        return 0;
    }

    switch(roundingMethod)
    {
        case 1:
            if(number>=0)
            {
                cout<<integerPart;
                break;
            }
            else
            {
                cout<<integerPart - 1;
                break;
            }

        case 2:
            if(number>0)
            {
                cout<<integerPart + 1;
                break;
            }
            else
            {
                cout<<integerPart;
                break;
            }

        case 3:            
            if(number>0)
            {
                if(decimalPart < 0.50)
                {
                    cout<<integerPart;
                    break;
                }
                else if(decimalPart > 0.50)
                {
                    cout<<integerPart + 1;
                    break;
                }
                else if(decimalPart == 0.50)
                {   
                    cout<<(integerPart + integerPart % 2);
                    break;
                }
            }
            else if(number < 0)
            {
                if(decimalPart < 0.50)
                {
                    cout<<integerPart;
                    break;
                }
                else if(decimalPart > 0.50)
                {
                    cout<<integerPart - 1;
                    break;
                }
                else if(decimalPart == 0.50)
                {   
                    cout<<(integerPart + integerPart % 2);
                    break;
                }
            }

    }
return 0;    
}
