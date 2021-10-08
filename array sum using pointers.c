int arraysum(int *ptr,int n)
{
int sum=0,i;
for (i = 0; i < n; i++)
sum=sum+*(ptr + i);
return(sum);
}
main()
{
int n,i,a[25],sum=0;
printf("Enter the number of elements in the arrray:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the element %d of the array:",i+1);
scanf("%d",&a[i]);
}
sum=arraysum(&a,n);
printf("Array elements sum=:%d \n",sum);
}
