//Random Numbers

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int main () {

	float y, x, ratio;
	int inside = 0, outside = 0, N;

		cout << "input number of iterations" << endl;
		cin >> N;
	
			srand(time(0));
	
	//x^2 +y^2 <1
	
	//x = sqrt(1 - y^2);
	//y = sqrt(1 - x^2);
	
		do {
	
			x = (2 * rand()/(float)RAND_MAX) -1;
			y = (2 * rand()/(float)RAND_MAX) -1;
	
	//	  	  cout << "( "  <<  x << " , " << y << " )" << endl;
		
			if ((x*x + y*y) <= 1) inside++;
			else outside++;
	
		} while (inside + outside < N);
	
	cout << "inside = " << inside << endl;
	cout << "outside = " << outside << endl;
	cout << endl;
	
		ratio = inside / (float)(inside + outside);
	
	cout << "ratio; inside / (inside + outside) = pi = " << ratio * 4 << endl;
	
return 0;
	
}

