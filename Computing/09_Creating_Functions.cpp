//Creating Functions

#include <iostream>
//#include <string>
//#include <iomanip>
#include <cmath>

using namespace std;

double G = 6.673E-11, pi = 3.14159;

double calcperiod (double M1, double M2, double a);
double calcorbit (double M1, double M2, double T);

int main () {

	bool c; //choice, can be either 1 or 0
	int d;
	double P, S, A, a , T, t, M1, M2; //P=mass of planet, S=Mass of star
	
	cout << "Please use SI units." << endl;
	cout << "Mass of Planet (kg): " << endl;
	cin >> M2;
	cout << "Mass of Star (kg): " << endl;
	cin >> M1; 
	cout << "To calculate the orbital period press 0," << endl
		 << "To calculate the orbital radius press 1" << endl;

	cin >> c;
	
	if ((c < 0) || (c > 1)) cout << "Please input either 0 or 1" << endl;
	else {
		if (c == 0) {
			cout << "Please input orbital Radius (AU): " << endl;
			cin >> a;
			cout << "The orbital period, in days, is: " << calcperiod(M1, M2, a);
			}
		else {
			cout << "Please input orbital Period (days): " << endl;
			cin >> T;
			cout << "The orbital radius, in AU, is: " << calcorbit(M1, M2, T);
			}
		}
		
	cout << endl;
return 0;


}

double calcperiod (double M1, double M2, double a) {
	double Period, P;
	Period = sqrt(4*pi*pi * pow(a * 1.496E11,3) / (G * (M1 + M2)));
	P = Period / 86400;
	return P;
	}
	
double calcorbit (double M1, double M2, double T) {
	double Orbit, O;
	Orbit = pow((((T*T)*(86400.0*86400.0) * G * (M1 + M2)) / (4.0*pi*pi)),1/3.0);
	O = Orbit/(1.496e11);
	return O;
	}

