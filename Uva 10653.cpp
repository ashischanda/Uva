// Author: Ashis Kumar Chanda
// CSE, DU

/** Find shortest path in 2d Matrix cell

    In graph problem we get node & adj node. Using node we make a adj Matrix
    But In this problem, each cell is node & adj cell is adj node
    So, to find adj node we need to compute r-1, c-1 ....

    There also some obstacle at cell, identified them as 9999999 value
    initially all cell value -1
    source cell value 0

    At first guess about normal BFS code, then look at it
    We no need to Relaxation

     */

#include<stdio.h>
#include<vector>
#include<queue>

#include<string.h>
#include<stdlib.h>

#define inf 9999
#define SIZE 1009
#define loop(a,init,n) for(a=init;a<n;a++)

using namespace std;

int r,c;
int mat[SIZE][SIZE];
//int color[100];
//int D[100];

//void BFS(int source);
void BFS(int sourceX, int sourceY );
bool valid(int x, int y)
{
    if( (x>=0 && x<r) && (y>=0 && y<c) )
        return true;
    else
        return false;
}

void init()
{
    memset( mat, -1, sizeof(int)*SIZE*SIZE);
}
int main()
{
    int x,y,j,i,n, obstacle;
	while(scanf("%d%d",&r,&c) !=EOF && r!=0 && c!=0){
	scanf("%d",&obstacle);
    init();

	for(i=0;i<obstacle;++i)
	{
		scanf("%d%d",&x,&n);
		for(j=0; j<n; j++){
            scanf("%d",&y);
            mat[x][y]= inf;
		}
	}

//	puts("Give source :");
	scanf("%d%d",&x,&y );

	BFS(x,y);
    scanf("%d%d",&x,&y );       // destination

/*
    loop(i,0,r){
        loop(j,0,c)
            printf("%4d ",mat[i][j]);
        printf("\n");
    }
  */
    printf("%d\n", mat[x][y]-1);
	}

return 0;
}


void BFS(int sourceX, int sourceY )
{
    int x,y;

	mat[sourceX][sourceY]=1;

	//color[source]=1;
	queue<int>Q;
	Q.push(sourceX);
	Q.push(sourceY);

	while(!Q.empty())
	{
		x = Q.front();
		Q.pop();
		y = Q.front();
		Q.pop();

		int ucost = mat[x][y];
                                            // initially all -1, so mat[x][y]<1 means new node
                if( valid(x-1, y) && mat[x-1][y]<1 ){
                    Q.push(x-1);
                    Q.push(y);
                    mat[x-1][y]= ucost+1;
                 }
                if(  valid(x+1, y) && mat[x+1][y]<1  ){
                    Q.push(x+1);
                    Q.push(y);
                    mat[x+1][y]=  ucost+1;
                 }
                if(  valid(x, y-1) && mat[x][y-1]<1 ){
                    Q.push(x);
                    Q.push(y-1);
                    mat[x][y-1]=  ucost+1;
                 }
                if(  valid(x, y+1) && mat[x][y+1]<1 ){
                    Q.push(x);
                    Q.push(y+1);
                    mat[x][y+1]=  ucost+1;
                }
	}
}
