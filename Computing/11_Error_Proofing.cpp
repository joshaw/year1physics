// Error Proofing

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

double h = 6.626e-34;

double energy(int N, double m, double L);

int main () {
	double m, L;
	int N,x;
	bool error=0;
	
	do {
		cout << "Please choose either '0' for electron or '1' for proton: ";
			cin >> x;
			while ((x < 0) || (x > 1)) {
				if (!(cin >> x)) {
					cin.clear();
					cin.ignore(255, '\n');
				}
				if ((x < 0) || (x > 1)) {
    	    	cout << "Input out of range. Please try again. " << endl;
    			}
			}	 
			cout << endl;
			
		if (x==1) m = 1.67e-27, L=1e-14;
		else if (x==0) m=9.109e-31, L=1e-10;
		
		cout << "Mass of partilce selected: " << m << endl;
		cout << "   Length of box selected: " << L << endl;
		cout << endl;

	} while (error);
	
	cout << "Select Quantum number, use integer value greater than 0" << endl;
	cin >> N;

	cout << energy(N, m, L) << " eV";

return 0;

//E = (n^2 * h^2) / (8*m* L^2)

}

double energy(int N, double m, double L) {
	double E = ((N*N * h*h)/(8*m* L*L));
	//	  if (N < 1)
		
		while (N < 0) {
				if (!(cin >> N)) {
					cin.clear();
					cin.ignore(255, '\n');
				}
				if (N < 0) {
				cout << "Input out of range. Please try again. " << endl;
    			}
		} 
			cout << endl; ;
	return E/(1.602e-19);
}

