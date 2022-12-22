#include<stdio.h>
#include<stdlib.h>

int main()
{

int z=0;

   while(1)
   {
       choice();
    int a;
    a=enteredkey();

    switch (a)
    {
        case 49:





        case 50:



        case 51:
        system("cls");
 while(z<9)
{


              int d[3][3]={1,2,3,4,5,6,7,8,9};

              while(!wining(d))
              {system("cls");
               structure(d);
              if(z%2==0)
              {
                  printf("Player 0\n");
                  z=change(d,0,z);


                  if(z==9)
                  {
                      break;
                  }

              }
              else
              {
                  printf("Player X");
                  z=change(d,88,z);
                  system("cls");


                  if(z==9)
                    break;

              }

          }
          system("cls");
              structure(d);
          if(wining(d))
           {
               if(z%2==0)
               printf("\n\n\n\n##############################################################################                                                   PLAYER X WON                                ####################################################\n");
               else
                printf("\n\n\n\n#############################################################################                                                   PLAYER 0 WON                                ####################################################\n");

               break;

           }

              if(z==9)
              printf("                                GAME DRAW                         \n");

               printf("want to play again press key y");
             int p ;
             p=enteredkey();
             system("cls");
             if(p==121)
             {
                 z=0;
                 continue;
             }
}
        case 52:

        return 0;



        default:
        printf("invalid key");
        system("cls");

        break;
    }

   }
}

void choice()
{
    printf("Enter your choice : \n");
    printf("1. Want to play with Smart Computer \n");
    printf("2. Want to play with Evil Computer \n");
    printf("3. Want to play with player \n");
    printf("4. Exit\n");

}
int enteredkey()
{
    char b;
    b=getch();

    return b;

}
char enterkey()
{
    char b;
    b=getch();

    return b;

}

void structure(int c[][3])
{
    printf("                   #######################################   Tic Tac Toe   #############################################\n\n\n\n");
    printf("First Player 0 \n");
    printf("Second Player X \n\n");
    int i,j,k=1;
    for(i=0;i<=2;i++)
    {
        printf("     |     |     \n");
        for(j=0;j<=2;j++)
        {
            if(j!=2)
           printf("  %d  |",c[i][j]);
           else
           printf("  %d  ",c[i][j]);


        }
        printf("\n_____|_____|_____\n");

    }

}
void structures(int c[][3])
{
    printf("                   #######################################   Tic Tac Toe   #############################################\n\n\n\n");
    printf("First Player 0 \n");
    printf("Second Player X \n\n");
    int i,j,k=1;
    for(i=0;i<=2;i++)
    {
        printf("     |     |     \n");
        for(j=0;j<=2;j++)
        {
            if(j!=2)
           printf("  %c  |",c[i][j]);
           else
           printf("  %c  ",c[i][j]);


        }
        printf("\n_____|_____|_____\n");

    }

}
int wining(int a[][3])
{
    int i,j;
    for(i=0;i<=2;i++)
    {

        for(j=0;j<1;j++)
        {
           if(a[i][j]==0&&a[i][j+1]==0&&a[i][j+2]==0||a[i][j]==88&&a[i][j+1]==88&&a[i][j+2]==88)
           return 1;
        }
    }
    for(i=0;i<1;i++)
    {

        for(j=0;j<3;j++)
        {
           if(a[i][j]==0&&a[i+1][j]==0&&a[i+2][j]==0||a[i][j]==88&&a[i+1][j]==88&&a[i+2][j]==88)
           return 1;
        }

    }
    if(a[0][0]==0&&a[1][1]==0&&a[2][2]==0||a[0][0]==88&&a[1][1]==88&&a[2][2]==88)
        return 1;
    if(a[0][2]==0&&a[1][1]==0&&a[2][0]==0||a[0][2]==88&&a[1][1]==88&&a[2][0]==8)
        return 1;


    return 0;
}
int change(int d[][3],int a,int z)
{
    int i;
    i=enteredkey();
    switch(i)
    {


        case 49:
        if(d[0][0]!=0&&d[0][0]!=88)
         {

             d[0][0]=a;
             z++;
             return z;

         }
         else
         printf("not allowed");
        break;
         case 50:
        if(d[0][1]!=0&&d[0][1]!=88)
         {
             d[0][1]=a;
             z++;
             return z;

         }
         else
         printf("not allowed");
        break;
         case 51 :
        if(d[0][2]!=0&&d[0][2]!=88)
         {
            d[0][2]=a;
            z++;
            return z;
         }

         else
         printf("not allowed");
        break;
         case 52:
        if(d[1][0]!=0&&d[1][0]!=88)
        {
            d[1][0]=a;
            z++;
            return z;

        }
         else
         printf("not allowed");
        break;
         case 53:
        if(d[1][1]!=0&&d[1][1]!=88)
         {
             d[1][1]=a;
             z++;
             return z;
         }
         else
         printf("not allowed");
        break;
         case 54:
        if(d[1][2]!=0&&d[1][2]!=88)
         {
             d[1][2]=a;
             z++;
             return z;
         }
         else
         printf("not allowed");
        break;
         case 55:
        if(d[2][0]!=0&&d[2][0]!=88)
         {
             d[2][0]=a;
             z++;
             return z;
         }
         else
         printf("not allowed");
        break;
         case 56:
        if(d[2][1]!=0&&d[2][1]!=88)
         {
             d[2][1]=a;
             z++;
             return z;
         }
         else
         printf("not allowed");
        break;
         case 57:
        if(d[2][2]!=0&&d[2][2]!=88)
         {
             d[2][2]=a;
             z++;
             return z;
         }
         else
         printf("not allowed");
        break;
         default:
        printf("key not available");
        break;
    }
}
void changes(int d[][3],char a ,int z)
{
    int  i;

    i=enterkey();

    switch(i)
    {


        case 49:
        if(d[0][0]!=0&&d[0][0]!='X')
         {d[0][0]='X';
         z++;

         }
         else
         printf("not allowed");
        break;
         case 50:
        if(d[0][1]!=0&&d[0][1]!='X')
         {
             d[0][1]='X';
             z++;

         }
         else
         printf("not allowed");
        break;
         case 51 :
        if(d[0][2]!=0&&d[0][2]!='X')

         {
             d[0][2]='X';
             z++;
         }
         else
         printf("not allowed");
        break;
         case 52:
        if(d[1][0]!=0&&d[1][0]!='X')
         {
             d[1][0]='X';
         }
         else
         printf("not allowed");
        break;
         case 53:
        if(d[1][1]!=0&&d[1][1]!='X')
         {
             d[1][1]='X';
             z++;
         }
         else
         printf("not allowed");
        break;
         case 54:
        if(d[1][2]!=0&&d[1][2]!='X')
         {
             d[1][2]='X';
             z++;
         }
         else
         printf("not allowed");
        break;
         case 55:
        if(d[2][0]!=0&&d[2][0]!='X')
         {
             d[2][0]='X';
             z++;
         }
         else
         printf("not allowed");
        break;
         case 56:
        if(d[2][1]!=0&&d[2][1]!='X')
         {
             d[2][1]='X';
             z++;
         }
         else
         printf("not allowed");
        break;
         case 57:
        if(d[2][2]!=0&&d[2][2]!='X')
         {
             d[2][2]='X';
             z++;
         }
         else
         printf("not allowed");
        break;
         default:
        printf("key not available");
        break;
    }
}
