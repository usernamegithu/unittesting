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

/*void
test_powe(void)
{
  printf ("Test power using assert:      ");
  assert (powe(2,1)==2);
  assert (powe(1,2)==1);
  assert (powe(2,-1)==0.5);
  assert (powe(1,-2)==1);
  
  
  printf (" OK\n");
}*/
int
main(void)
{
  test_add();

  //test_powe();
}

