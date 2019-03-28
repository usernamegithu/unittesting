#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "calci.h"

void
test_add(void)
{
  printf ("Test addition using assert:      ");
  assert (addition(13,14)==27);
  assert (addition(-13,14)==1);
  assert (addition(13,-14)==-1);
  assert (addition(-13,-14)==-27);
  
  
  printf (" OK\n");
}

void
test_mod(void)
{
  printf ("Test mod using assert:      ");
  assert (mod(2,1)==0);
  assert (mod(1,2)==1);
  assert (mod(2,-1)==-1);
  
  
  printf (" OK\n");
}
int
main(void)
{
  test_add();

  test_mod();
}

