/* File:   main.cpp
 * Author: aws4y
 *
 * This program calculates the prime factorization with multiplicity of unsigned
 * integers up to UINT_MAX. Factorization is done via trial division. Speedups 
 * could be obtained using lib pari and trial division only by prime factors the 
 * next step is to make it more computationally efficent by using the first 1000
 * primes in the primes array.
 * 
 * Created on January 9, 2014, 5:05 PM
 */
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <limits.h>
#include <gmp.h>
#include <pari/pari.h>
#include "../pause/pause.hpp"

using namespace std;

bool is_prime(unsigned long long i);

unsigned long long int_power(unsigned long long base, unsigned int exponent)
{
    if(exponent==0)
    {
        return 1;
    }
    return base*int_power(base, exponent-1);
}

int main(int argc, char** argv) {
   
    unsigned long long input;
    unsigned long long  sqt_input;
    unsigned long long factor_buffer[2][100];
  
    int factor_count=0;
    unsigned long long dummy;
    bool found=false;
    //pari_init(sizeof(unsigned long long)*500000,7368787);    
        
    do{
    cout<<"0 terminates the program!\nInput the number: ";
    cin>>input;
    
    if(input==1)
    {
        cout<<"1 is not prime."<<endl;    
        continue;
        
    }
    if(input==2)
    {
        cout<<"2 is the only even prime."<<endl;
        continue;
    }
   
    
    
   
    sqt_input=input/2;
  
    
    for(uint32_t i=2; i<=sqt_input; i++)
    {   
        if(input%i==0)
        {
            found=true;
            if(is_prime(i))
            {
            factor_buffer[0][factor_count]=i;
            factor_buffer[1][factor_count]=1;
            
            
                if((input/i)%i==0)
                {
                dummy=input/i;
#ifdef DEBUG3
                cout<<dummy<<endl;
#endif
              
                do
                {
                        factor_buffer[1][factor_count]+=1;
                        
                        dummy=dummy/i;
#ifdef DEBUG3
                        cout<<dummy<<endl;
#endif
                        }while(dummy%i==0 && dummy>1);
                        
                }
            factor_count++;
            }
        }
    }
    if(found)
    {
         cout<<input<<" has "<<factor_count<<" factors."<<endl;
         cout<<"Here are the factors in the format (factor, multiplicity): "
             <<endl;
    }
    for(int i=0; i<factor_count && found;i++)
    {
        cout<<"("<<factor_buffer[0][i]<<","<<factor_buffer[1][i]<<")"<<endl;
    }
    cout<<endl;
    
    
    if(found==false && input>0)
    {
        cout<<input<<" is prime."<<endl<<endl;
    }
    found=false;
    factor_count=0;
    }while(input!=0);
    t_pause();
    return 0;
    
}

bool is_prime(unsigned long long num)
{
    if(num==4)
        return false;
    for(unsigned long long i=2;i<num/2;i++)
    {
        if(num%i==0)
            return false;
    }
    
    return true;
}

