#include "act365l.h"

double act365l(int y1, int m1, int d1, 
               int y2, int m2, int d2,
               int y3)
{
    double denom = (isaleapyear(y3) ? 366e0 : 365e0);

    int diff_days = date_to_jd(y2, m2, d2);
    diff_days -= date_to_jd(y1, m1, d1);

    if(diff_days < 0){
        fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
        exit(-1);
    }else if(diff_days == 0){
        return 0e0;
    }else{
        return (double)(diff_days) / denom;
    }
}
