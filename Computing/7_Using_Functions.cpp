//Using Functions

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	
	int D = 5.0;
	float w = 170E-6, s = 850E-6, lambda = 500E-9, i = 5E-6, 
		theta, x = 1.47E-3 / 2, beta, phi, I, pi = 3.14159, m;
	
		theta = atan(x / D);
	
		beta = 2 * pi * w * sin(theta) / lambda;
		phi = 2 * pi * s * sin(theta) / lambda;
	
		I = i * pow((sin(beta / 2.0)) / (beta / 2.0),2) * pow(cos(phi / 2.0),2);
	
			cout << setiosflags(ios::scientific)
				 << setprecision(2) << "Intensity halfway between centre of diffraction" << endl
				 << "pattern and first minimum: " << I << " W/m/m" << endl;
		 
		// s * sin(theta) = m *lambda
		
		float gamma = 0.02;
		
			m = s * sin(gamma) / lambda;
			
				cout << endl;
				cout << setiosflags(ios::fixed) 
					 << setprecision(0) << "At an angle of 0.02 rads a maximum" << endl
					 					<< "of order " << ceil(m) << " is observed." << endl;
}

