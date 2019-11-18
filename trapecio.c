#include <stdio.h>
#include <math.h>
void main(){
int a=0, b=60;
float h=0.5;
float result=0;
float i=a+h;
for (i = a; i<=b; i=i+h ) {
        result=result+2*sqrt(i);
    }
result=(h/2)*result;
printf("f: %f",result);
}