#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int digit[11];

int getDigit(int n)
{
    int i=0;

    while(n!=0){
        digit[i++]= n%10;
        n/=10;
    }
    return i;
}
int main()
{
    int i,j,k,num, test;

    scanf("%d",&test);
    while(test--){
        scanf("%d",&num );
        int digitLength = getDigit(num);

        /*
        for(i=0; i<digitLength ; i++){
            printf("%d",digit[i]);
        }
        */
        int square=1;
        double sum=0;
        while(sum<num){
            sum=0;
            for(i=0; i<digitLength ; i++){
                sum += pow( digit[i], square) ;
            }
            if( sum == num){
                printf("Armstrong\n");
                break;
            }
            else if(sum>num){
                printf("Not Armstrong\n");
                break;
            }
            else
                square++;

        }

    }
return 0;
}
