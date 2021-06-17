#define CDP (12 * log(pow(256,5)))  	// color depth. Adjust by the Expression
#define EXP cgamma(z / 16)  	     	// the Expression to be plotted. Must be described using complex.h functions, or other complex valued functions.
#define RED (10 * log(cabs(iter)))   	// Red, adjusted absolute value of Expression
#define GRN (fabs(carg(iter)) * CDP * 10)// Green, drawing lines to describe differentiability
#define BLU fabs((GRN * M_PI / RED))	// Blue, decorative

#include<stdio.h>
#include"../RiemannES.h"
#include<math.h>
#include<complex.h>

int main() {
  int x,y;
  float complex z;
  long double complex iter;
  printf("P3 513 513 %f\n", CDP);		// matrix size, color depth, header for NetPPM
  for ( y= -256; y <= 256; y++){	    //-1024 to 1024 describes a 2049x2049 grid for the plot. if changed, ppm header must be changed accordingly
    for ( x = -256; x <= 256; x++){
      z = (x - y*I);
      iter = EXP;
      printf("%f %f %f\n", RED, GRN, BLU);
    }
  }
  return 0;
}
