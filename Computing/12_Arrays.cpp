// Arrays


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

//  

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

	for (n=1; n<(N+1); n++) {	   
		if (n==1) cout << "input " << n << "st charge: ";
		else if (n==2) cout << "input " << n << "nd charge: ";
		else if (n==3) cout << "input " << n << "rd charge: ";
		else cout << "input " << n << "th charge: ";
	
		cin >> charge;
		c[n-1] = charge;
	}
	
	for (n=1; n<(N+1); n++) {	   
		if (n==1) cout << "input " << n << "st position: ";
		else if (n==2) cout << "input " << n << "nd position: ";
		else if (n==3) cout << "input " << n << "rd position: ";
		else cout << "input " << n << "th position: ";
	
		cin >> position;
		p[n-1] = position;
	}
	
	cout << endl;
	cout << "   | Charge | Position" << endl;
	cout << "---|--------|---------" << endl;
	
	for (n=0; n<(N); n++) {
		cout << setw(2) << n+1 << " |" << setw(5) << c[n] << "   |" << setw(4) << p[n] <<endl;
	}
return 0;
}

