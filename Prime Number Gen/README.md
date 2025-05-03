# Prime Number Generator

## Objective 
This project idea was based off of a prime number generator that I made for a 
textbook problem that I worked on. I then wondered if I could use a parallel algorithm to speed
up the current algorithm I was using to test each number for primality (there was no dependency 
between the for loop iterations). I then came across OpenMP and wanted to see if I could achieve speed up using it.

## Tools
* C++ 
* OpenMP API

## Brief Description of Code (v2)
The code asks the user how many prime numbers do you want to generate. Then a function is called "primeGen()"
which uses 2 for loops. For loop 1 is an arbitrary number of iterations, in this case 10^5 which according to prime
number theorem contains 9,592 primes. Then a bool "composite" keeps track of whether the number is a prime or composite. For loop 2 
then tests each of the for loop 1 iterations for primality, checking up to the square root of the number. The if statement 
then checks to see if there are any factors (besides 1 and itself) and if so it sets the bool true and breaks the for loop and goes on to 
test the next number. If the number is a prime, then it will not set the bool true and trigger the if statement below and increment the 
prime counter variable. When this variable equals the number of primes requested by the user (n), it will return and exit the program.
Also I was using the OpenMP routine "omp_get_wtime()" to measure how fast the function ran.

## Executing The Code
For this code it was real simple, I used Visual Studio Code to write and then manually compiled using the following in command prompt:
> g++ -fopenmp primegen.exe

## Outcome
TBD...
One thing I can say is that I needed to optimize my baseline serial code before I could even think about making improvements using 
parallel programming. I have the reddit community to thank for this as can be seen in the link below
LINK: https://www.reddit.com/r/cpp_questions/comments/1jzj2kd/how_to_improve_this_prime_number_generator_with/

