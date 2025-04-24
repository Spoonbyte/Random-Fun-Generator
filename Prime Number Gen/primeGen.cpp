/*
File: primeGen_v2.cpp
Desc: This is the prime number generator. Modification based on reddit feedback. Was able to implement the sqrt() logic.
Author: spoonais
Date Started: 4/22/25 @ 4:39pm

SELF-FEEDBACK

*/

#include<iostream>
#include<iomanip>
#include<omp.h>
#include<cmath>
using namespace std;

/*----------- PROGRAMMER DEFINED FUNCTION ------------*/
 void primeGen(int n)  //assuming the first n primes starting from zero
 {

    int counter(0), prime_counter(0);

    cout << "before = " << omp_get_wtime() << endl;
    for (int i=2; i<=100000; ++i)
    {
        bool composite = false;         //Reinit to test next number
        for(int k=2; k <= floor(sqrt(i)); k++)
        {
            if(i%k == 0)
            {
                composite = true;
                // cout << "TEST" << endl;
                break;
            }

        }

        if(composite == false)
        {
            ++prime_counter;
            // cout << "prime number:" << prime_counter << " = " << i << endl; 
        }
        
        //This needs to be in the for loop or else the loop will try to test all 1000 #s for primality!
        if (prime_counter == n)     //When the first n primes are printed, then close function
        {break;}

    }
    cout << "after =  " << omp_get_wtime() << endl;

    return;

 }

/*-----------------------------------------------------*/

int main()
{
    //Decalare and Init objects:
    int primes(0), counter(0);

    cout << "Input the number of primes you want, starting from zero " << endl;
    cin >> primes;
    
    //
    cout << fixed << setprecision(15);

    //Call primeGen function
    primeGen(primes);

    //Pause
    system("pause");

    //exit
    return 0;
}
