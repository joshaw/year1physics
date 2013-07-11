#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	float v, d, L = 4;
	
	cout <<"Alex is travelling at a velocity close to the speed of light." << endl;
	cout <<"What speed, as a fraction of c, is Alex travelling? ";
		 
	cin >> v;
	
	cout << " " << endl;
	
	cout << "The distance that Alex needs to travel, as viewed from earth is 4 lightyears." << endl;
	cout << "The distance that Alex travels from his frame is:" << endl;
	
	d = sqrt(1 - (v * v)) * L;
	
	cout << setiosflags (ios::fixed | ios::showpoint)
		 << setprecision(3) << d << endl;
		
	cout << " " << endl;
	
	cout << "The distance travelled as seen from earth is " << L << endl;
	cout << "The distance travelled as seen from Alex's referance frame is " << d << endl;
	
	return 0;
	
}

