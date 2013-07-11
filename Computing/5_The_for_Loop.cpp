//The for Loop//
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	float x, y, t, p;
	int s;
			
	s = 30;
	cout << "Please input number of atoms in original sample: " << endl;
	cin >> y;
	
		t = -0.693 * 30 / 60; //0.693 = ln2 and 60 = half life of atoms
	cout << endl
		 << " Time  |  No. of" << endl
		 << "(mins) |   Atoms" << endl
		 << "-------|--------" << endl;
	
	for (float x = 1; x < 9; x++) {
				
		cout << setw(6)
			 << x * 30 << " |    "
			 << setw(4)
			 << setiosflags(ios::right | ios::fixed)
			 << setprecision (0) << y * exp(t * x) << endl;
		}	 
	cout << endl;
	
	return 0;
}

