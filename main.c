#include<stdio.h>
int win(int arr[3][3]);
int main()
{
    int arr[3][3]={0};
    int a,b,i,j,k,score=0;
    printf("Play Area is updated by Entering the Row and Column\nPlayer 1 plays with 1 while player 2 plays with 2\n");
   //First Four Moves
    for (k=0;k<2;k++)
    {
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
    }
    //Player one's next move
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
    //Checking Victory
    score=win(arr);
    if(score==100)
    {
        printf("Player 1 wins");
        return 0;
    }
    //Continuing the game for moves 6,7,8,9 while checking for victory
    for(k=0;k<2;k++)
    {
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
        score=win(arr);
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
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        score=win(arr);
        if(score==100)
        {
            printf("Player 1 wins");
            return 0;
        }
    }
    printf("Game Tied");
    return 0;
}
//Function to check Victory
int win(int arr[3][3])
{
    if((arr[1][1]==1) || (arr[1][1]==2))
    {
         if((arr[1][1]==arr[2][2])&&(arr[2][2]==arr[3][3]))
            return 100;
    }
    if((arr[0][2]==1)||(arr[0][2]==2))
    {
        if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0]))
            return 100;
    }
    int i,j;
    for (j=0;j<3;j++)
    {
       if((arr[0][j]==1) && (arr[0][j]==2))
       {
            if((arr[0][j]==arr[1][j]) && (arr[1][j]==arr[2][j]))
            {
                return 100;
            }
       }
    }
    for(i=0;i<3;i++)
    {
        if((arr[i][0]==1) && (arr[i][0]==2))
        {
            if((arr[i][0]==arr[i][1]) && (arr[i][1]==arr[i][2]))
            {
                return 100;
            }
        }
    }
    return 0;
}

