// Author: Ashis Kumar Chanda 
// CSE, DU

//An upper case letter goes before the corresponding lower case letter.
//  special case:  input  wArZB
//                output  ABZrw is wrong.  it will  ABrwZ

//  we need to sort:  guess char as in that order
//      A B C       a b c
//      0 2 4       1 3 5


#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;

int value[127];
struct cmp {
    bool operator()(int x, int y) {
        return value[x] < value[y];
    }
};

int main()
{
	int i,k, t;
	char str[1009];

	for(k = 'A', i=0; k <= 'Z' ; ++k,++i){
        value[k] = i;
        value[k+32] = ++i;
    }

    scanf("%d", &t);
    while(t--){
        scanf("%s",str);
        k= strlen( str);
        sort( str, str+k, cmp() );

        do{
            printf("%s\n", str);
        }while( next_permutation( str, str+ k, cmp() ) );
    }// next permutation also work at ascending order, so we add  cmp  where also
	return 0;
}
