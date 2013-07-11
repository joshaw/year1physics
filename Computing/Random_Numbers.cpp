//Random Numbers

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

	float y, x;
	int inside = 0, outside = 0;
	
	srand(time(0));
	
	//x^2 +y^2 <1
	
	//x = sqrt(1 - y^2);
	//y = sqrt(1 - x^2);
	
	x = 2 * rand()/(float)RAND_MAX - 1;
	y = 2 * rand()/(float)RAND_MAX - 1;
	
	cout << "( " << x << " , " << y << " )" << endl;
	
	if (pow(x,2) + pow(y,2) <1) inside++;
	else outside++;
	
	cout << inside << " and " << outside << endl;
	
}

