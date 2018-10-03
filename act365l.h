#ifndef ACT365L_H
#define ACT365L_H

#include "isaleapyear/isaleapyear.h"
#include "julianday/julianday.h"
#include <stdlib.h> //exit
#include <stdio.h>

double act365l(int y1, int m1, int d1, 
               int y2, int m2, int d2,
               int y3);

#endif /* ACT365L_H */
