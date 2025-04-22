/*
File: primeGen_v1.cpp
Desc: This is the prime number generator. Modification based on reddit feedback.
Author: spoonais
Date Started: 4/16/25 @ 3:00pm

SELF-FEEDBACK
Update 4:53PM 
The code mods I made worked! It ran way faster than the original code due to the 
second for loop not having to run through all the counts for the non primes.

*/

#include<iostream>
#include<iomanip>
#include<omp.h>
using namespace std;

/*----------- PROGRAMMER DEFINED FUNCTION ------------*/
 void primeGen(int n)  //assuming the first n primes starting from zero
 {

    int counter(0), prime_counter(0);

    cout << "before = " << omp_get_wtime() << endl;
    for (int i=2; i<=100000; ++i)
    {
        for (int k=1; k <= i; ++k)
        {
            if (i%k == 0)
            {++counter;} 

            if(counter > 2)
            {break;}  

            /*
            Note: I think I can make it run faster!!!
            The above if stmt takes care of the composite numbers BUT doesnt solve 
            the issue of the really big prime numbers (ex. 1229) that this inner for loop still 
            is going through all the numbers up to 1229...so this is where the first redditors 
            post, second bullet point, comes into play...to prevent overruning the inner for loop for the 
            really big primes. 

            For example, the sqrt(1229) is approx 35 so I'd theoretically have to check up to that

            I still dont understand WHY checking up the the sqrt is the limit?
            */
        }

        //This should filter out the non primes.
        //The momemnt a non prime is found the count will have to be at least 3 which will NOT 
        //trigger the if statement below
        if(counter == 2)
        {
            ++prime_counter;    //keeps track of how many primes
            // cout << "prime number:" << prime_counter << " = " << i << endl; 
        }

        counter = 0;        //Reset the counter for the next number to test for primality

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
