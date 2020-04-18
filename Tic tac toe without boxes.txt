#include<stdio.h>
int win1(int arr[3][3]);
int win2(int arr[3][3]);
int win3(int arr[3][3]);
int win4(int arr[3][3]);
int main()
{
    int arr[3][3]={0};
    int a,b,i,j,score=0;
    printf("Play Area is updated by Entering the Row and Column\nPlayer 1 plays with 1 while player 2 plays with 2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Player 1's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Player 2's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Player 1's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Player 2's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Player 1's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    score=win1(arr[3][3]);
    if(score==100)
    {
        printf("Player 1 wins");
        return 0;
    }
    score=win2(arr[3][3]);
    if(score==100)
    {
        printf("Player 1 wins");
        return 0;
    }
        score=win3(arr[3][3]);
    if(score==100)
    {
        printf("Player 1 wins");
        return 0;
    }
    printf("Player 2's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    score=win1(arr[3][3]);
    if(score==100)
    {
        printf("Player 2 wins");
        return 0;
    }
    score=win2(arr[3][3]);
    if(score==100)
    {
        printf("Player 2 wins");
        return 0;
    }
        score=win3(arr[3][3]);
    if(score==100)
    {
        printf("Player 2 wins");
        return 0;
    }
    printf("Player 1's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    score=win1(arr[3][3]);
    if(score==100)
    {
        printf("Player 1 wins");
        return 0;
    }
    score=win2(arr[3][3]);
    if(score==100)
    {
        printf("Player 1 wins");
        return 0;
    }
        score=win3(arr[3][3]);
    if(score==100)
    {
        printf("Player 1 wins");
        return 0;
    }
    printf("Player 2's Move, Specify R,C\n");
    scanf("%d %d",&a,&b);
    arr[a-1][b-1]=2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    score=win1(arr[3][3]);
    if(score==100)
    {
        printf("Player 2 wins");
        return 0;
    }
    score=win2(arr[3][3]);
    if(score==100)
    {
        printf("Player 2 wins");
        return 0;
    }
        score=win3(arr[3][3]);
    if(score==100)
    {
        printf("Player 2 wins");
        return 0;
    }
    printf("Game Tied");
    return 0;
}
int win1(int arr[3][3])
{
    if((arr[1][1]==arr[2][2])&&(arr[2][2]==arr[3][3]))
        return 100;
    else
        return 0;
}
int win2(int arr[3][3])
{
       int i,j;
       for(i=0;i<3;i++)
       {
           for (j=0;j<3;j++)
           {
               if(arr[i][j]==arr[i][j+1])
               {
                   return 100;
               }
               else
                return 0;

           }
       }
}
int win3(int arr[3][3])
{
       int i,j;
       for(i=0;i<3;i++)
       {
           for (j=0;j<3;j++)
           {
               if(arr[i][j]==arr[i+1][j])
               {
                   return 100;
               }
               else
                return 0;

           }
       }
}
int win4(int arr[3][3])
{
    if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0]))
        return 100;
    else
        return 0;
}
