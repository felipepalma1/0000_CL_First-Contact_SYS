
#include <stdio.h>


int main()
{
  int a;
  int b;
  int c;
  int d;
  int x;

  f1(0,0,0,0);
  f2(0,0,0,0);

  f1(0,0,0,1);
  f2(0,0,0,1);

  f1(0,0,1,0);
  f2(0,0,1,0);

  f1(0,0,1,1);
  f2(0,0,1,1);

  f1(0,1,0,0);
  f2(0,1,0,0);

  f1(0,1,0,1);
  f2(0,1,0,1);

  f1(0,1,1,0);
  f2(0,1,1,0);

  f1(0,1,1,1);
  f2(0,1,1,1);

  f1(1,0,0,0);
  f2(1,0,0,0);

  f1(1,0,0,1);
  f2(1,0,0,1);
 f1(1,0,1,0);
  f2(1,0,1,0);

  f1(1,0,1,1);
  f2(1,0,1,1);

  f1(1,1,0,0);
  f2(1,1,0,0);

  f1(1,1,0,1);
  f2(1,1,0,1);

  f1(1,1,1,0);
  f2(1,1,1,0);

  f1(1,1,1,1);
  f2(1,1,1,1);

  return 0;

}

int xor(a,b)
{
  if ( a == b )
    return 0;
  return 1;
}

int f1(int a, int b, int c, int d)
{
  int resultado = (( c && !d ) || ( !c && d )) || (( a && !b ) && c);
  printf("f1: %d === ", resultado);
  return 0;
}

int f2(int a, int b, int c, int d)
{
  int resultado = ( xor(c,d) || ( a && !b ) ) && !c;
  printf("f2: %d \n", resultado);
  return 0;
}
