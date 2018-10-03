#include <stdio.h>  //printf
#include <assert.h> //assert
#include <math.h> //fabs
#include "act365l.h"

int main()
{
    double yf;
    yf = act365l(2018,12,15, 2019,3,1, 2019);
    assert( fabs(yf - 0.20821918) < 1e-8 );
    printf("%.8f\n", yf);
	return 0;
}
