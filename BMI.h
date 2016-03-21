#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class person{

    public:
        double BMI;
        void setheight(int set_height);
        void setmass(int set_mass);
        double getheight();
        double getmass();
        double BMIcalcu();
        string BMIcategory();
        double getBMI();

    private:
        double height;
        double mass;

        string BMIvalue;
};
