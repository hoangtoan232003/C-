#include<iostream>
using namespace std;
int main(){
	double w, h;
	cin >> w >> h;
	double BMI = w/((h*h)/10000);
	if(BMI<18.5) cout << "Under weight";
	if(BMI>=18.5 && BMI < 25) cout << "Normal";
	if(BMI>=25 && BMI<30) cout << "Over weight";
	if(BMI>=30 && BMI<35) cout << "Obesity 1";
	if(BMI>=35 && BMI<40) cout << "Obesity 2";
	if(BMI>=40) cout << "Extreme obesity";
}
