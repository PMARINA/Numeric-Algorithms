#include "main.h"

/**
 * Reasoning:
 * GCD(A,B) is the largest number that can divide both a and b evenly. 
 * Therefore, gcd(a,b) divides a, resulting in the smallest possible divisor (not including 1).
 * Multiplying this number by b must result in a multiple of b, because it is a whole number multiplied by b.
 * Why it is a multiple of a also:
 * 		x is a divisor of a and b
 * 		(a/x*b)/a = b/x, which is a whole number; therefore, a/x*b must be a multiple of a
 * Therefore, this product must be the least common multiple of both numbers:
 * 
 * A small example: 10,15; GCD: 5; LCM: 30.
 */

uint64_t lcm(uint64_t a, uint64_t b){
	uint64_t gcd_returned = gcd(a,b);
	if(gcd_returned == 0) return 0;
	return a/gcd_returned*b;
}
