    /*
    ********************************************
    This code only for beginners. Please, Don't Copy Past
    ********************************************
    */
     
    #include<stdio.h>
    int main()
    {
    int t,have1,have2,need,x,y;
    scanf("%d",&t);
     
    while(t--){
    scanf("%d%d%d",&have1,&have2,&need);
    have1=have1+have2; // sum of all having soda
    x=0,y=0;
     
    while(1){
    x=x+ have1/need ;
    y=have1%need;
    have1= have1/need +y;
    // printf("have %d\n",have1);
    if(have1<need)
    break;
    }
    printf("%d\n",x);
    }
    return 0;
    }
