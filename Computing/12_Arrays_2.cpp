// Arrays

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

void position(float p[10], int N);
void charge(float c[10], int N);

int main () {
	float c[10], p[10];
	int N, n=0;
	bool error=0;
	
		do {
			cout << "How many charges would you like to use?" << endl;;
			cout << "Please input value between 0 and 9"<< endl;
				do {
					if (!(cin >> N)) {
						cin.clear();
						cin.ignore(255, '\n');
					}
					if ((N < 0) || (N > 9)) {
	    	    	cout << "Input out of range. Please try again. " << endl;
    				}
				} while ((N < 0) || (N > 9)) ;
				cout << endl;
		} while (error);
		
	position(p, N);
	charge(c, N);
	 
	cout << endl;
	cout << "   | Charge | Position" << endl;
	cout << "---|--------|---------" << endl;
	
	for (n=0; n<(N); n++) {
		cout << setw(2) << n+1 << " |" << setw(5) << c[n] << "   |" << setw(4) << p[n] <<endl;
	}
return 0;
}

void position(float* p, int N) {
	float pos;
	int n;
	for (n=0; n<(N); n++) {
			
		if (n==0) cout << "input " << n+1 << "st position: ";
		else if (n==1) cout << "input " << n+1 << "nd position: ";
		else cout << "input " << n+1 << "th position: ";
		
				bool ok=1;
				do {
					if (!(cin >> pos)) {
						cin.clear();
						cin.ignore(255, '\n');
						cout << "Input out of range. Please try again. " << endl;
						ok=1;
					}
					else ok=0;
				} while(ok);
				
	p[n] = pos;
	}
}
	
void charge(float* c, int N) {
	float cha;
	int n;
	for (n=0; n<(N); n++) {
	
		if (n==0) cout << "input " << n+1 << "st charge: ";
		else if (n==1) cout << "input " << n+1 << "nd charge: ";
		else cout << "input " << n+1 << "th charge: ";
			
				bool ok=1;
				do {
					if (!(cin >> cha)) {
						cin.clear();
						cin.ignore(255, '\n');
						cout << "Input out of range. Please try again. " << endl;
						ok=1;
					}
					else ok=0;
				} while (ok);
	c[n] = cha;
	}
}	 

