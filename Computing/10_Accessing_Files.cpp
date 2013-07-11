// Accessing Files

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
int main () {
	ifstream atoms ("ae11_atoms.txt");
	ifstream times ("ae11_times.txt");
	ofstream outFile ("output_file.txt");
	
	float a, b, c, d;
	
	if (!atoms) {
		cout << "Cannot open input file" << endl;
	return 1;
	}
	
//------------------------------------------------------------------------------------

		atoms >> a;// atoms in a
    	atoms >> b; // half life of a 
		atoms >> c; // atoms in b
		atoms >> d; // half life of b
	atoms.close();
	
//  ^ gets number of atoms and half lives from file "ae11_atoms.txt"
//------------------------------------------------------------------------------------

	float x, t, t2, p;
	
		t = -0.693 * b / 60; //0.693 = ln2 and b = half life of atoms
		t2 = -0.693 * d / 60;

	if (!times) {
		cout << "Cannot open input file" << endl;
	return 1;
	}
	
	cout << "The file is being written";
	cout << endl;
	cout << "-------------------------"; 
	
	float e;
		t = -0.693 * b / 60; //0.693 = ln2 and b = half life of atoms
		t2 = -0.693 * d / 60;
		outFile << " Time  |  No. of  |  No. of   " << endl
		 << "(mins) |Atoms in A|Atoms in B" << endl
		 << "-------|----------|----------" << endl;
	
	while (!times.eof()) {
		if (times >> e) 
			outFile << setw(6)
				 << e << " |    "
				 << setw(4)
				 << setiosflags(ios::right)
				 << ceil(a * exp(t * e)) << "  |  "
				 << setw(5)
				 << setiosflags(ios::right)
				 << ceil(c * exp(t2 * e)) << endl;
		 }
	cout << endl;
	cout << "The file has been written";
	cout << endl;
	times.close();
	atoms.close();
	
	return 0;
}



