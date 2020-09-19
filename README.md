# CPE-593 Numeric Algorithms

## Instructions

1. Write a program that takes in 3 integers in the **command line**, `a`, `b`, and `r` and returns `gcd(a, b)`, `lcm(a, b)`, and `powermod(a, b, r)`.
2. Since **integers are passed as Strings**, you'll need to convert them into int in the beginning of your code. 

Here's an example of how to do that in java:

``` java

public static void main(String[] args) {
    int iAmAnInt = Integer.parseInt(args[0]);
    int iAmAnotherInt = Integer.parseInt(args[1]);
}
```

Here's an example of how to do it in c:

``` c
int main(int argc, char *argv[]) {
    int a, b;
    // Converting string type to integer type
    // using function "atoi( argument)"* 
    a = atoi(argv[1]);     
    b = atoi(argv[2]);
 }
 ```

## Work Distribution

- Joey will do GCD: `uint64_t gcd(uint64_t a, uint64_t b)`
- Pridhvi will do LCM: `uint64_t lcm(uint64_t a, uint64_t b)`
- Nick will do PowerMod: `uint64_t power_mod(uint64_t a, uint64_t b, uint64_t r)`
