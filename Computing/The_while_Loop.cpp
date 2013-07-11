//The while Loop//
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

//u = 300 m/s
//a = 10 m/s/s
//t = 100 K and raises by 0.3 K/s



using namespace std;

int main () {
	
	cout << "For a craft travelling at an inital velocity of 300m/s and acceleration" << endl
		 << "of 10m/s/s though a medium of neutral hydrogen atoms with mean mass" <<endl
		 << "1.673E-27kg, a shock is produced when: " << endl
		 << endl;
	int u = 300, a = 10, temp = 100, time = 0;
	float gamma = 5/3.0, k = 1.381E-23, m = 1.673E-27, T, c, v;
	
	
		cout << "speed of sound | speed of craft | Temperature |  Time" << endl;
	do {
		c = sqrt (gamma * ((k * (temp + 0.3 * (time++))) / m));
		v = u + a * (time);
		T = temp + 0.3 * (time);
	
			 cout << setw(10) << setprecision(0) << setiosflags(ios::fixed)
			  << c << " m/s" 
		 	  << setw(13) 
		 	  << v << " m/s"
			  << setw(12) 
			  << T << " K"
			  << setw(6)
			  << time << " s" << endl;
	
	} while (v <= c);
cout << endl;

cout << "speed of sound | speed of craft | Temperature |  Time" << endl;

		 cout << setw(10) << setprecision(0) << setiosflags(ios::fixed)
			  << c << " m/s" 
		 	  << setw(13) 
		 	  << v << " m/s"
			  << setw(12) 
			  << T << " K"
			  << setw(6)
			  << time << " s" << endl;
	return 0;
}

