//The Switch Statement//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	
	int z;
	float x, y;
		string s;
		s = "Star is class ";
	
	cout << "Temperature of Star (in Kelvin): ";
	cin >> x;
	
		y = x / 1000;
		z = (int)y;
		
	cout << endl;
	
	switch (z) {
		case 0:
		case 1:
		case 2:
		case 3:
			cout << s + "M";
			break;
		case 4:
			cout << s + "K";
			break;
		case 5:
			cout << s + "G";
			break;
		case 6:
		case 7:
			cout << s + "F";
			break;
		case 8:
		case 9:
			cout << s + "A";
			break;
		case 10:
			cout << s + "B";
			break;
		default:
			cout << s + "B";
	}
	
	cout << endl;
}

