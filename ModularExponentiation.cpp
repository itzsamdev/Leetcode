// You are given a three integers 'X', 'N', and 'M'. Your task is to find
//  ('X' ^ 'N') % 'M'. A ^ B is defined as A raised to power B and A % C
// is the remainder when A is divided by C.

#include <bits/stdc++.h>
using namespace std;

// Approach: Recursion dividing power/2
long long int exp(long long int x, long long int n, long long int m)
{
    if (n == 1)
        return x;
    long long int temp = exp(x, n / 2, m);
    temp *= temp;
    temp %= m;
    if (n % 2 == 1)
        temp *= x;
    temp %= m;
    return temp;
}
long long int PowMod(long long int x, long long int n, long long int m)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x % m;
    return exp(x, n, m);
}