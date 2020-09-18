#include "main.h"
#include <iostream>

using namespace std;


uint64_t power_mod(uint64_t a, uint64_t b, uint64_t r){
    uint64_t ans = 1; //initialize result

    while (b > 0){
        if (b % 2 != 0){ //check if power is odd
            ans = (ans * a) % r; //power mod if power is odd
        }
        a = (a * a) % r; //power mod if power is even
        b = b / 2; //divide by 2 to iterate down power for the loop
    }
    return ans;
}