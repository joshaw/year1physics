// Arrays Part B

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void position(double p[10], int N);
void charge(double c[10], int N);
void charge1(double c[10], int N);
void position1(double p[10], int n);

double pi=3.14159265, epsilon=8.8542e-12;

int main () {
	double c[10], p[10], Q;
	int N, n=0, X;
	bool error=0, EXIT=0;

		do {
			cout << "How many charges would you like to use?\n";
			cout << "Please input value between 0 and 9"<< endl;
				do {
					if (!(cin >> N)) {
						cin.clear();
						cin.ignore(255, '\n');
					}
					if ((N < 0) || (N > 9)) {
					cout << "Input out of range. Please try again. \n";
					}
				} while ((N < 0) || (N > 9)) ;
				cout << endl;
		} while (error);
		
	cout << "Enter the charge at position (0,0)\n";
	cin >> Q;
	
	position(p, N);
	charge(c, N);

do {
	cout << endl;
	cout << "What would you like to do now?\n";
	cout << "---------------------------------------------------------------------------\n";
	cout << "1 -- Edit CHARGE at position (0,0)";
	cout << "\n2 -- Edit the CHARGE of a point charge";
	cout << "\n3 -- Edit the POSITION of a point charge";
	cout << "\n4 -- Print a table of the point charges and their positions to the screen";
	cout << "\n5 -- Calculate the force on the charged particle at position 0";
	cout << "\n6 -- Exit the program\n";
	cout << endl;
	cin >> X;

//------- OPTION 1 -------------------------------------------------------
  	if (X==1) {
		cout << "Enter new charge for position zero"<< endl;
		//charge(c, 1);
		cin >> Q;
	}
//------- OPTION 2 -------------------------------------------------------
	else if (X==2) {
		int change;
		cout << endl;
		cout << "   | Charge | Position" << endl;
		cout << "---|--------|----------" << endl;
		cout << "  0|" << setw(7) << Q << " |" << endl;

		for (n=0; n<(N); n++) {
			cout << setw(3) << n+1 << "|" << setw(7) << c[n] << " |" << setw(9) << p[n] <<endl;
		}
		cout << "Which CHARGE would you like to change: ";
		do {
			if (!(cin >> change)) {
				cin.clear();
				cin.ignore(255, '\n');
			}
			if ((change < 0) || (change > N)) {
				cout << "Input out of range. Please try again. " << endl;
	   		}
		}  while ((change < 0) || (change > N));
		charge1(c, change-1);
	}
//------- OPTION 3 -------------------------------------------------------
	else if (X==3) {
		int change;
		cout << endl;
		cout << "   | Charge | Position" << endl;
		cout << "---|--------|----------" << endl;
		cout << "  0|" << setw(7) << Q << " |" << endl;

		for (n=0; n<(N); n++) {
			cout << setw(3) << n+1 << "|" << setw(7) << c[n] << " |" << setw(9) << p[n] <<endl;
		}
		cout << "Which POSITION would you like to change: ";
		do {
			if (!(cin >> change)) {
				cin.clear();
				cin.ignore(255, '\n');
			}
			if ((change < 0) || (change > N)) {
				cout << "Input out of range. Please try again. " << endl;
	   		}
		}  while ((change < 0) || (change > N));
		position1(p, change-1);
	}
//------- OPTION 4 -------------------------------------------------------
	else if (X==4) {
		cout << endl;
		cout << "   | Charge | Position" << endl;
		cout << "---|--------|----------" << endl;
		cout << "  0|" << setw(7) << Q << " |" << endl;

		for (n=0; n<(N); n++) {
			cout << setw(3) << n+1 << "|" << setw(7) << c[n] << " |" << setw(9) << p[n] <<endl;
		}
	}
//------- OPTION 5 -------------------------------------------------------
	else if (X==5) {
		double F, Force, G=0;
			// F = 	q sum(q_i/(4*pi*epsilon*(r_i)^2)) 	 
			for (n = 0; n < N; n++) {
				F=(c[n] * (p[n]/ fabs(p[n]))) /(4 * pi * epsilon * (pow(p[n],2)));
				G+=F;
			cout << F << "   " << G <<endl;
			}
			Force = Q * G;
			cout << Force << " N" << endl;
	}
//------- OPTION 6 -------------------------------------------------------
	else if (X==6){
		return 0;
	}

} while (EXIT==0);

return 0;
}

void position(double* p, int N) {
	double pos;
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

void charge(double* c, int N) {
	double cha;
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

void charge1(double* c, int n) {
	double cha;
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

void position1(double* p, int n) {
	double pos;
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

