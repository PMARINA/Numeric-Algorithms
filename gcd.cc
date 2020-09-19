#include "main.h"
//Euclid's method
uint64_t gcd(uint64_t a, uint64_t b){
	if(a<b)return gcd(b,a);
	if(a == b) return b;
	uint64_t mod = a%b;
	if(mod == 0) return b;
	return gcd(b,mod);
}
