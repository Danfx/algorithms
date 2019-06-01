/******************************************************************************
Lei de Benford
https://pt.wikipedia.org/wiki/Lei_de_Benford
@author Daniel Fussia
*******************************************************************************/

#include <stdio.h>
#include <math.h> 

int main()
{
    
    // qual numero?
    int d = 2;
    // qual n-esima posição ?
    int n = 2;
    
    int k = pow(10,n-2);
    int end = pow(10,n-1)-1;
    
    double prob = 0;
    while( k <= end ){
        prob += log10( 1 + (1/(double)(10*k+d)) );
        k++;
    }
    
    printf("Prob = %lf\n",prob);
    int precision = 3;
    prob = round(prob*pow(10,precision))/pow(10,precision);
    printf("Prob ~= %.*f\n",precision,prob);
    
    return 0;
}

