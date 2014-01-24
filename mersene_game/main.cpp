/* 
 * File:   main.cpp
 * Author: aws4y
 *
 * Created on January 17, 2014, 10:26 AM
 */
#include <iostream>
#include <cstdlib>
#include "mersene_game.hpp"
#include "pause.hpp"
using namespace std;



void sieve_of_atkin(Primelist * __restrict__ list);
/*
 * 
 */
int main(int argc, char** argv) {
   
    uint32_t num_primes;
    Primelist *list;
    cout<<"Enter the number of primes: ";
    cin>>num_primes;
    list=new Primelist(num_primes);
    cout<<"Prime list allocated."<<endl;
    pause();
    //free(list->length);
    delete list;
    return 0;
}

//use the sieve of atkin to determine the first million primes. 
void sieve_of_atkin(Primelist *__restrict__ list)
{
    
}