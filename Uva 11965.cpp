    /**
    ********************************************
    This code only for beginners. Please, Don't Copy Past
    ********************************************
    */
    /// uva 11965 solve
     
    #include<stdio.h>
    #include<string.h>
    int main()
    {
    int i,j,k, t, a;
    char str[505];
     
    scanf("%d",&t);
    for(i=1; i<=t; i++){
    scanf("%d",&k);
    getchar();
     
    printf("Case %d:\n",i);
    for(j=0; j<k; j++){
    gets(str); /// take input
     
    for( a=0; str[a]!=NULL ; a++){ /// scaning
    if( str[a]==' ' && str[a-1]==' ' && a!=0)
    continue;
    else
    printf("%c",str[a]);
     
    }
    printf("\n");
    }
    if(i!=t)
    printf("\n");
    }
    return 0;
    }
