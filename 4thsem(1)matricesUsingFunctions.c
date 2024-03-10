#include<stdio.h>
void readMatrix(int[][10] ,int ,int );
void printMatrix(int[][10],int ,int );
void addedMatrix(int[][10],int[][10] ,int[][10],int ,int );
void subtractedMatrix(int[][10],int[][10],int[][10],int ,int );
int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    printf("enter order of matrix 1");
    scanf("%d%d",&m,&n);
    printf("enter order of matrix 2");
    scanf("%d%d",&m,&n);
    printf("Enter matrix 1 elements");
    readMatrix(a,m,n);
    printf("Enter matrix 2 elements");
    readMatrix(b,m,n);

    printf("the matrix 1 is:\n");

    printMatrix(a,m,n);
    printf("the matrix 2 is:\n");
    printMatrix(b,m,n);

    addedMatrix(c,a,b,m,n);
    printf("sum:\n");
    printMatrix(c,m,n);
    subtractedMatrix(c,a,b,m,n);
    printf("difference:\n");
    printMatrix(c,m,n);

}
void readMatrix(int a[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

}
    }


void printMatrix(int a[][10],int m,int n)
{
   int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
         printf("\n");
}
     }


void addedMatrix(int c[][10],int a[][10],int b[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    }
}
void subtractedMatrix(int c[][10],int a[][10],int b[][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]-b[i][j];
    }
    }
}
