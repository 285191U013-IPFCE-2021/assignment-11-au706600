/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    //precondition 
 assert (n>=1); 

//postcondition 
 if (n==1)
 return p; 
 else if (n==2)
 return pp; 
 else if (n>1)
 return fib(n-1, pp, pp+p); 
}
