#include <iostream>

using namespace std;

int main() {
	 int x = 5, y = -42, z;

	z = x * y + 1; 
	
// comments are added to the code after a double /. 
//These comments are not read by the compiler

// x+=3 add 3 to x

// x++ increment by 1

// to dived integers, the result will often not be as expected as the result will be given as an integer
// soecify that the denominator is a floating point number to ensure that the result is also a floating point number
// 3/4 will not give 0.75
// instead use 3/4.0

// Do not use ^ for powers.

	cout << z << endl;  //The endl command at the end of the line tells the program to end the line on the screen

	return 0;

}

