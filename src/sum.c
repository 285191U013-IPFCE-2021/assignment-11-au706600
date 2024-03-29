#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1; 
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  //precondition
  assert (n >= 1);

  if (n == 1)
  return n + total; 
  else 
  return sumtail (n-1, n + total); 
}


/* Sum integers 1 to n */
int sumwhile (int n)
{
  int i = 0;
  int sum = 0;
  while (i <= n)
  {
    sum = sum + i;
    i++;
  }
  return sum;
}


