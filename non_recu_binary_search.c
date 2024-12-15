//Non Recursive Binary Search Program.

#include<stdio.h>

int b_search(int [ ],int,int);

main( )
{
    int ar[50],i,n,m,el,dum,j;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: " );
    for(i=0;i<n;i++)
  {
         scanf("%d",&ar[i]);
    }
   
   printf(“\nSorted Array”);
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-1;i++)
     {
     if(ar[j]>ar[j+1])
     {
      dum=ar[i];
      ar[j]=ar[j+1];
      ar[j+1]=dum;
     }
    }
   }
    for(i=0;i<n;i++)
      printf(“ar[%d]=%d\n”,i,ar[i]);
  
    printf("Enter the number to be search: ");
    scanf("%d",&el);
   ans=b_search(ar,n,el);
    if(ans == -1)
         printf("Element is not found.");
    else
         printf("Element is found at %d position", ans);
 }

int binary(int ar[ ],int n,int el)
{
     int l=0,h=n-1,m=(l+h)/2;
     while(l<=h)
     {
          m=(l+h)/2;
          if(el==ar[m])
          return m;
             else if(el>ar[m])
              l=m+1;
          else if(el<ar[m])
             h=m-1;
     
       return -1;
}
