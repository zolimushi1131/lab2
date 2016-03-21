#include "BMI.h"
         void person::setheight(int set_height)
         {
             height=set_height;
         }
         void person::setmass(int set_mass)
         {
             mass=set_mass;
         }
         double person::getheight()
         {
            return height;
         }
         double person::getmass()
         {
             return mass;
         }
        double person::BMIcalcu()
        {
            double cal_h=(height/100)*(height/100);
            BMI=mass/cal_h;
            return BMI;
        }
        string person::BMIcategory()
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
        double person::getBMI()
        {
            return BMI;
        }
