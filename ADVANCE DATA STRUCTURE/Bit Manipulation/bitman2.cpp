// To check the given number is power of 2 or not

#include<iostream>

using namespace std;

bool isPowerOf2(int n){

    return (n &&!(n & n-1));
}