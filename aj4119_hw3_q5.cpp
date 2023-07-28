#include<iostream>
using namespace std;
int main()
{   const double POUND_To_KG = 0.453592;
    const double INCH_TO_METER = 0.0254;
    const double UPPER_UNDERWEIGHT = 18.50;
    const double UPPER_NORMAL = 25.0;
    const double UPPER_OVERWEIGHT = 30.0;
    

    double weightInPounds,heightInInches;
    cout<<"Please enter weight (in pounds): ";
    cin>>weightInPounds;
    cout<<"Please enter height (in inches): ";
    cin>>heightInInches;
    double weightInKg,heightInMeters;
    weightInKg=weightInPounds*POUND_To_KG;
    heightInMeters=heightInInches*INCH_TO_METER;
    double bmi;
    bmi=weightInKg/(heightInMeters*heightInMeters);
    if(bmi<UPPER_UNDERWEIGHT)
    {
        cout<<"The weight status is: Underweight";
    }
    else if(bmi >= UPPER_UNDERWEIGHT && bmi < UPPER_NORMAL)
    {
        cout<<"The weight status is: Normal";
    }
    else if(bmi>=UPPER_NORMAL && bmi < UPPER_OVERWEIGHT)
    {
        cout<<"The weight status is: Overweight";
    }
    else if(bmi>=UPPER_OVERWEIGHT)
    {
        cout<<"The weight status is: Obese";
    }
    return 0;

}