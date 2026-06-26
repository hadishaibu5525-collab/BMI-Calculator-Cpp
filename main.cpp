#include <iostream>
using namespace std;
double calculateBMI(double weight, double height)
{
    return weight / (height * height);
}
int main()
{
    string name;
    double weight;
    double height;
    double bmi;
    cout << "BMI calculator" <<endl;
   
    cin >> name;

    cout << "enter your weight in kg";
    cin >> weight;

    cout << "enter your height in meters(e.g 1.75)";
    cin >> height;

    cout << "hello" << name << "calculating your BMI..." << endl;
    bmi = calculateBMI(weight, height);
    cout << "your BMI is:" << bmi << endl;
    if (bmi > 18.5)
    {
        cout << "category:underweight" << endl;
    }
    else if (bmi < 25)
    {
        cout << "category:normal weight" << endl;
    }
    else if (bmi < 30)
    {
        cout << "category:overweight" << endl;
    }
    else
        cout << "category:obese" << endl;

    return 0;
}