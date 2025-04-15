/*
File: primeGen.cpp
Desc: This is the prime number generator.
Author: spoonais
Date Started: 3/22/25 @10:43pm

-----------------------------------------------------------------------------------------
SELF-FEEDBACK:

*/

#include<iostream>
using namespace std;

/*----------- PROGRAMMER DEFINED FUNCTION ------------*/
 void primeGen(int n)  //assuming the first n primes starting from zero
 {

    int counter(0), prime_counter(0);

    for (int i=2; i<=100000; ++i)
    {

        for (int k=1; k <= i; ++k)
        {
            if (i%k == 0){++counter;} 
        }

        if (counter == 2) //only care about the numbers that have 2 factors
        {
            ++prime_counter;    //keeps track of how many primes
            cout << "prime number:" << prime_counter << " = " << i << endl; 
        }

        counter = 0;        //Reset the counter for the next number to test for primality

        //This needs to be in the for loop or else the loop will try to test all 1000 #s for primality!
        if (prime_counter == n)     //When the first n primes are printed, then close function
        {
            break;
        }

    }

    return;

 }

/*-----------------------------------------------------*/

int main()
{
    //Decalare and Init objects:
    int primes(0), counter(0);

    cout << "Input the number of primes you want, starting from zero " << endl;
    cin >> primes;
    
    //Call primeGen function
    primeGen(primes);

    //Pause
    system("pause");

    //exit
    return 0;

}