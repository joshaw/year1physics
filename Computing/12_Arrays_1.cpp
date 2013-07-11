// Arrays

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

float input(float c, float p);

int main () {
	float c[10], p[10];
	int N, n=0, charge, position;
	bool error=0;
	
		do {
			cout << "How many charges would you like to use?" << endl;;
			cout << "Please input value between 0 and 9"<< endl;
			cin >> N;
				while ((N < 0) || (N > 9)) {
					if (!(cin >> N)) {
						cin.clear();
						cin.ignore(255, '\n');
					}
					if ((N < 0) || (N > 9)) {
	    	    	cout << "Input out of range. Please try again. " << endl;
    				}
				}	 
				cout << endl;
		} while (error);
		
	input(c,p);
	 
	cout << endl;
	cout << "   | Charge | Position" << endl;
	cout << "---|--------|---------" << endl;
	
	for (n=0; n<(N); n++) {
		cout << setw(2) << n+1 << " |" << setw(5) << c[n] << "   |" << setw(4) << p[n] <<endl;
	}
return 0;
}

float input(float c, float p) {
	float charge, position;
	int n, N;
	for (n=0; n<(N+1); n++) {
	
		if (n==0) cout << "input " << n+1 << "st charge: ";
		else if (n==1) cout << "input " << n+1 << "nd charge: ";
		else cout << "input " << n+1 << "th charge: ";
	
		cin >> charge;
			c[n] = charge;
		
		if (n==0) cout << "input " << n+1 << "st position: ";
		else if (n==1) cout << "input " << n+1 << "nd position: ";
		else cout << "input " << n+1 << "th position: ";
	
		cin >> position;
			p[n] = position;
	}
	return 1;
}	 

