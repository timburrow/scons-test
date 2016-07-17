#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern float librarycall(float a, float b);

int main()
{
   double x, ret, val;
   float a, b, c;
   x = 60.0;
   val = M_PI / 180.0;
   ret = cos( x*val );
   printf("The cosine of %lf degrees is %lf \n", x, ret);
  a=4;
  b=16;
  c = librarycall(a,b); // mutiply the numbers
  printf("%.2f * %.2f = %.2f\n",a,b,c);
  printf("Compiled using (gcc) %s on %s\n", __VERSION__,__TIMESTAMP__);
  exit(0);
}
