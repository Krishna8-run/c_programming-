#include <stdio.h>
int main()
{int m,n,i,j;
 printf("size of matrix:");
 scanf("%d%d",&m,&n);
 int matrix[m][n];
 printf("enter %d elements of matrix",m*n);
 for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
   	scanf("%d",&matrix[i][j]);
	   }	
}
printf("entered matrix is:\n");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
   	printf("%d\t",matrix[i][j]);
   }
   printf("\n");
}printf(" transpose is\n");
for(i=0;i<n;i++)
{
   for(j=0;j<m;j++)
   {
   	printf("%d\t",matrix[j][i]);
   }
   printf("\n");
}

getch();
}

