#include <iostream>
using namespace std;

int main() {

	// s=100
	// t=8
	// u=0
	
	//s=ut+0.5at^2
	
	//a=2(s-ut)/t^2
	
	int s = 100, t = 8, u = 0, a; // declare variables
	 
	a = (2 * (s - u * t)) / (t * t); // declare calc including ; at the end
	
	cout << a << endl;
	
	
	//u=10
	//a=1.622
	//v=0
	
	//v^2=u^2 + 2as
	
	//s = (v^2-u^2)/2a
	
	int U = 10, A = -1.622, V = 0, S;
	
	S = (V * V - U * U) / (2 * A);
	
	cout << S << endl;
	
	
	//u=0
	//a=1.622
	//v=10
	//t=?
	
	//v=u+at
	//(v-u)a
	
	int u1 = 0.0, a1 = 1.622, v1 = 10.0, t1;
	t1 = (v1 - u1) / 1.622;
	
	cout << 2 * t1 << endl; 
	
	return 0;
	
}

