#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{int arr[1000000],m,i,j,temp,x,a,k,max,min;
 printf("1.selection sort \n 2.find largest number ");
 scanf("%d",&a);
 double time_spent = 0.0;
 clock_t begin = clock();
 switch(a)
 {
 case 1:printf("selection sort");
printf("enter the number of elements");
scanf("%d",&m);
for(i=0;i<m;i++)
{
 arr[i]=rand();
}
for(i=0;i<m-1;i++)
{min=i;
 for(j=i+1;j<m;j++)
 {if(arr[j]<arr[min])
   {min=j;}
 }
 temp=arr[min];
 arr[min]=arr[i];
arr[i]=temp;
}


clock_t end = clock();
time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
printf("Time elpased is %f seconds", time_spent);
break;
case 2: printf("enter the number of elements in the array");
        scanf("%d",&m);
        printf("enter the elements");
        for(i=0;i<m;i++)
       {
         scanf("%d",&arr[i]);
       }
       printf("enter the value of K");
       scanf("%d",&k);
 
 
     for(i=0;i<k;i++)
     {
      max=i;
      for(j=i+1;j<m;j++)
     {
   if(arr[j] > arr[max])
   {
   
   max=j;
   }
   }
   temp=arr[max];
   arr[max]=arr[i];
   arr[i]=temp;
   }
   printf("the largest element are:");
   
   for(i=0;i<k;i++)
   {
    printf("%d\n",arr[i]);
   }
   break;
   }
   }

