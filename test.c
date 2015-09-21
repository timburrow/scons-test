#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern void output_(float *a, float *b);

#define PI 3.14159265

int main()
{
   double x, ret, val;
   float a, b;
   x = 60.0;
   val = PI / 180.0;
   ret = cos( x*val );
   printf("The cosine of %lf is %lf degrees\n", x, ret);
  a=4;
  b=16;
  output_(&a,&b);
  printf("Compiled using (gcc) %s on %s\n", __VERSION__,__TIMESTAMP__);
  exit(0);
}
