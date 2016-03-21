#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "BMI.h"
using namespace std;

/*class person{

    public:
        double BMI;
         void setheight(int set_height)
         {
             height=set_height;
         }
         void setmass(int set_mass)
         {
             mass=set_mass;
         }
         double getheight()
         {
            return height;
         }
         double getmass()
         {
             return mass;
         }
        double BMIcalcu()
        {
            double cal_h=(height/100)*(height/100);
            BMI=mass/cal_h;
            return BMI;
        }
        string BMIcategory()
        {
            string BMI_value;

            if(BMI<15){BMI_value="Very severely underweight";}
            else if(BMI>=15&&BMI<16){BMI_value="Severely underweight";}
            else if(BMI>=16&&BMI<18.5){BMI_value="Underweight";}
            else if(BMI>=18.5&&BMI<25){BMI_value="Normal";}
            else if(BMI>=25&&BMI<30){BMI_value="Overweight";}
            else if(BMI>=30&&BMI<35){BMI_value="Obese Class I (Moderately obese)";}
            else if(BMI>=35&&BMI<40){BMI_value="Obese Class II (Severely obese)";}
            else if(BMI>=40){BMI_value="Obese Class III (Very severely obese)";}
            BMIvalue=BMI_value;
            return BMIvalue;
        }
        double getBMI()
        {
            return BMI;
        }

    private:
        double height;
        double mass;

        string BMIvalue;
};*/


int main()
{
    person X;
    double height;
    double mass;

    ofstream outFile("file.out", ios::out);
    ifstream inFile("file.in", ios::in);
    if(!inFile) {
    cerr << "Failed opening" << endl;
    exit(1);
    }
    while(true)
    {
        inFile >> height;
        inFile >> mass;
        X.setheight(height);
        X.setmass(mass);
        if(height==0||mass==0){break;}
        outFile << X.BMIcalcu() <<"   "<<X.BMIcategory()<<endl;
    }
    return 0;
}


