#include<stdio.h>
#include<time.h>
void main()
{
int m,i,j,temp,arr[50];
double time_spent = 0.0;
clock_t begin = clock();

printf("enter the number of elements in the array");
       scanf("%d",&m);
        printf("enter the elements");
       for(i=0;i<m;i++)
       {
         scanf("%d",&arr[i]);
       }
       for(i=0;i<m;i++)
       {
        for(j=i+1;j<m;j++)
         {
           if(arr[i]>arr[j])
             {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
              }
          }
        }
for(i=0;i<m;i++)
{
printf("%d\n",arr[i]);
}
clock_t end = clock();
time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
printf("Time elpased is %f seconds", time_spent);


}

