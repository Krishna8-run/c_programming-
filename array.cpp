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
printf("entered matrix is:");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
   	printf("%d",matrix);
   }
   printf("/n");
}
return 0;
}

