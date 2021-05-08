#define z (k - j*I)/64			// define the complex variable, devide or multiply by real value to zoom or by imaginary value to rotate and zoom, add or subtract value to scroll 
#define CDP (12 * log(pow(256,5)))	// color depth. Adjust by the Expression
#define EXP cpow(z,15) - 100*I 			// the Expression to be plotted. Must be described using complex.h functions, or other complex valued functions.
#define RED (10 * log(cabs(EXP)))	// Red, adjusted absolute value of Expression
#define GRN (fabs(carg(EXP)) * CDP * 10)// Green, drawing lines to describe isomorphism
#define BLU fabs((GRN * M_PI / RED))	// Blue, decorative

#include<stdio.h>
#include<math.h>
#include<complex.h>

int main() {
  int j,k;
  printf("P3 2049 2049 %f\n", CDP);		// matrix size, color depth, header for NetPPM
  for ( j = -1024; j <= 1024; j++){	        //-1024 to 1024 describes a 2049x2049 grid for the plot. if changed, ppm header must be changed accordingly
    for ( k = 1024; k >= -1024; k--){
      printf("%f %f %f\n", RED, GRN, BLU);
    }
  }
  return 0;
}
