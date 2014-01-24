/* 
 * File:   main.cpp
 * Author: aws4y
 *
 * Created on January 19, 2014, 3:13 PM
 */
#include <iostream>
#include <limits.h>
#include <cstdlib>
#include <pari/pari.h>
using namespace std;

unsigned long long int_power(unsigned long long base, unsigned int exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    return base*int_power(base, exponent-1);
}

/*
 * 
 */
int main(int argc, char** argv) {

    cout<<uprimepi(10)<<endl;
    return 0;
}

