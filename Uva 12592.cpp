/**
********************************************
This code only for beginners.  Please, Don't Copy Past
********************************************
**/
 // Uva 12592 solve: Slogan of Bangla

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<queue>
#include<stack>
#include<string>

using namespace std;

int main()
{
    int i,j,k, N;
    while(scanf("%d",&N)!=EOF){
    getchar();
    string a[30], b[30], tem;
    char ch[150];

    for(i=0;i<N; i++){
        gets(ch);
        a[i].insert(0,ch);
        gets(ch);
        b[i].insert(0,ch);
    }

    scanf("%d",&k);
    getchar();

    for(i=0; i<k;i++){
        gets(ch);
        tem="";             // must do it

        tem.insert(0,ch);
        for(j=0;j<N; j++){
            if( a[j].compare(tem)==0){
                cout<<b[j]<<endl;
                break;
            }

        }

    }

    }

return 0;

}
