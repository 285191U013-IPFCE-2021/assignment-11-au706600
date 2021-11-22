#include "sumn.h"

#include<stdio.h>
#include <assert.h>

int sumn (int n)
{
    /* precondition */
assert (n >=1); 

/* postcondition */
if (n==1){
return 1; 
}else {
return (2*1-1) + (2*2-1) + (2*n-1); 
}
}