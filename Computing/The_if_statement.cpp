// The if Statement//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

	bool w, x, y, z; //Inputs for tracking chamber, e/m calorimeter, hardonic calorimeter and muon detector
	cout << "Result from Tracking Chamber: "; cin >> w;
	cout << "Result from E/M Calorimeter: "; cin >> x;
	cout << "Result from Hadronic Calorimeter: "; cin >> y;
	cout << "Result from Muon Detector: "; cin >> z;
		
		if ((w==1) && (x==1) && (y==0) && (z==0)) cout << "Electron Detected" << endl;
		else if ((w==0) && (x==1) && (y==0) && (z==0)) cout << "Photon Detected" << endl;
		else if ((w==1) && (x==1) && (y==1) && (z==0)) cout << "Proton or Pion Detected" << endl;
		else if ((w==0) && (x==0) && (y==1) && (z==0)) cout << "Neutron or Lambda Detected" << endl;
		else if ((w==1) && (x==1) && (y==1) && (z==1)) cout << "Muon Detected" << endl;
		else if ((w==0) && (x==0) && (y==0) && (z==0)) cout << "Neutrino Detected" << endl;
		
		else cout << "Unknown Particle Detected";
}

