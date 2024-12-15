#include<stdio.h>
#include<conio.h>

int main( )
{
     int a[100]; 
     int i, j, temp, n ;
     printf("how many numbers you want to sort : \n");
     scanf("%d",&n);
     printf("Enter %d number values you want to sort\n", n);
     for(i=0; i<n; i++)
     scanf("%d",&a[i]);
     
     for(i=0;i<n;i++)
     {
          for(j=0; j<n-1; j++)
          {
               if(a[j]>a[j+1])
               {
                     temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
               } 
          }
     }
     
     printf ( "\n\nArray after sorting:\n") ;
    
     for ( i = 0 ; i <n ; i++ )
     printf ( "%d\t", a[i] ) ;
     
 }
