#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    int digit;
    char store[6];

}DATA;

DATA data[10];

void init()
{
data[0].digit=0;
data[0].store[1]=' ';

data[1].digit=1;
data[1].store[1]='.';
data[1].store[2]=',';
data[1].store[3]='?';
data[1].store[4]='\"';

data[2].digit=2;
data[2].store[1]='a';
data[2].store[2]='b';
data[2].store[3]='c';


data[3].digit=3;
data[3].store[1]='d';
data[3].store[2]='e';
data[3].store[3]='f';


data[4].digit=4;
data[4].store[1]='g';
data[4].store[2]='h';
data[4].store[3]='i';


data[5].digit=5;
data[5].store[1]='j';
data[5].store[2]='k';
data[5].store[3]='l';


data[6].digit=6;
data[6].store[1]='m';
data[6].store[2]='n';
data[6].store[3]='o';


data[7].digit=7;
data[7].store[1]='p';
data[7].store[2]='q';
data[7].store[3]='r';
data[7].store[4]='s';

data[8].digit=8;
data[8].store[1]='t';
data[8].store[2]='u';
data[8].store[3]='v';


data[9].digit=9;
data[9].store[1]='w';
data[9].store[2]='x';
data[9].store[3]='y';
data[9].store[4]='z';

}
int main()
{
    int i,j,k, n, test;
    init();


    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        int arr[109];
        int record[109];


        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);

        for(i=0; i<n; i++)
            scanf("%d",&record[i]);

        for(i=0; i<n; i++){
            char ch = data[ arr[i] ].store[record[i]] ;
            printf("%c",ch);
        }


        printf("\n");

    }
return 0;
}
