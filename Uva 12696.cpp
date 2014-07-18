#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    double a,b,c,d;
    int test;
    scanf("%d",&test);
    int sum=0;
    while(test--){

    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        if( (a+b+c)<=125 && d<=7  ){
            puts("1");
            sum++;
        }
        else if( a<=56 && b<=45 && c<= 25&& d<=7 ){
            puts("1");
            sum++;
        }
        else
            puts("0");

    }
    printf("%d\n", sum);
return 0;
}
