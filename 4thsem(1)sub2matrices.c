#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter the elements for matrix 1");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
printf("enter the elements for matrix 2");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
  printf(" the elements for matrix 1 is");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
            printf("%d",a[i][j]);
         }
         printf("\n");
     }
    printf(" the elements for matrix 2 is");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
            printf("%d",b[i][j]);
         }
         printf("\n");
     }
      for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
            c[i][j]=a[i][j]-b[i][j];
         }
     }
    printf("the matrix difference is:");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
      {
          printf(" %d",c[i][j]);
      }
       printf("\n");
     }

 }


