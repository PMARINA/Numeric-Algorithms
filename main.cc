#include<iostream>
#include "main.h"
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	//cout << "Counting " << argc << " arguments"<<endl;
	if(argc == 4){
		uint64_t a = atoi(argv[1]);
		uint64_t b = atoi(argv[2]);
		uint64_t r = atoi(argv[3]);
		cout << "gcd(" << a << ", " << b << ") = " << gcd(a,b) << endl;
		cout << "lcm(" << a << ", " << b << ") = " << lcm(a,b) << endl;
		cout << "powermod(" << a <<", " << b << ", " << r << ") = " << power_mod(a, b, r)<<endl;
		cout << "Maybe consider doing extra credit?"<<endl;
	}
	else { cout << "Wrong number of arguments provided, expected a b r. Try:" <<endl<<"./a.out 1 2 3"<<endl;}
}
