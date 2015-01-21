//    U can also apply Krushkal to find min edge
//    But, here we need to ensure all min pairs edge cost, Not min path
//	  Thus, floyed warshall to min edge

// 10048 - Audiophobia
#include<stdio.h>
#include<math.h>
#include <algorithm>
#define N 109				// row size of matrix
#define INF 2147483647

using namespace std;

int mat[N][N],  n, e;		// n= node, e =edge

void initMat()
{
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++)
			mat[i][j] = INF;
    }
}

void floyd_warshall()
{
	for(int k=1; k<=n; k++)
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
				mat[i][j]= mat[j][i]= min( mat[i][j], max( mat[i][k],mat[k][j]) );
                // (j to i) also because it undirected graph

                // This is Main important line
					//	mat[i][j] = mat[i][k] + mat[k][j];
                    // we don't need path sum
}

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("out.txt","w", stdout);

    int query, case_num= 0;
    int source,dis;
	bool flag=false;

	while(scanf("%d%d%d", &n, &e, &query) !=EOF)
	{
	    if( n==0 && e==0 && query==0)
            break;

		initMat();	// calling for fill all wilh infinite value

		for(int i, j, c, k=0; k<e; k++)		// i,j node number that connected, c=weight
		{
			scanf("%d %d %d", &i, &j, &c);
			mat[i][j] = c;
			mat[j][i] = c;      // undirected graph
		}


		floyd_warshall();
        if(flag)    printf("\n");
        flag=true;
		printf("Case #%d\n",++case_num);
        while(query--){
            scanf("%d %d",&source,&dis);
            if(mat[source][dis]== INF )
                printf("no path\n");
            else
                printf("%d\n",mat[source][dis]);
        }
	}

return 0;
}

/*
7 9 3
1 2 50
1 3 60
2 4 120
2 5 90
3 6 50
4 6 80
4 7 70
5 7 40
6 7 140
1 7
2 6
6 2
7 6 3
1 2 50
1 3 60
2 4 120
3 6 50
4 6 80
5 7 40
7 5
1 7
2 4
100 0 1
1 2
0 0 0
*/
