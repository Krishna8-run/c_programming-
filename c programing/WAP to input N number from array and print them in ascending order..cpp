#include <stdio.h>
int main()
{int n,temp,i;
printf("enter size of array:");
scanf("%d",&n);
int arr[n];
printf("enter elements:");
for(i=0;i<=n;i++)
{scanf("%d",&n);
}
for(i=0;i<n;i++)
{if(arr[i]<arr[i+1])
   {temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
   for(i=0;i<n;i++){
   
   printf("ascending order is %d",arr[i]);}}
}
getch();
}

//    #include <stdio.h>
//    int main()
//    {
// 
//        int i, j, a, n, number[30];
//        printf("Enter the value of N \n");
//        scanf("%d", &n);
// 
//        printf("Enter the numbers \n");
//        for (i = 0; i < n; ++i)
//            scanf("%d", &number[i]);
// 
//        for (i = 0; i < n-1; ++i) 
//        {
// 
//            for (j = i + 1; j < n; ++j)
//            {
// 
//                if (number[i] > number[j]) 
//                {
// 
//                    a =  number[i];
//                    number[i] = number[j];
//                    number[j] = a;
// 
//                }
// 
//            }
// 
//        }
// 
//        printf("The numbers arranged in ascending order are given below \n");
//        for (i = 0; i < n; ++i)
//            printf("%d\n", number[i]);
// 
//    }
