#include <stdio.h>


static const double PI; /* Sama zmiana extern na static nie dzialala. Kompilator pokazywal blad mowiacy ze PI oraz E nie zostaly zainicjowane. */
static const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
