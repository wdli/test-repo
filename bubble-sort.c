#include <stdio.h>
#include <stdlib.h>


int main()
{
  int a[100],i,j,n,t;
  printf("Enter the value of n (num. of ints)");
  scanf("%d",&n);
  for(i=0;i<=n-1;i++) {
      printf("Enter a number:");
      scanf("%d",&a[i]);
      printf(" Good, %d to go\n", n-1-i);
  }
  printf(" Start sorting ... \n");
  // 
  //Bubble sorting algorithm:
  //
  for(i=0;i<=n-2;i++){   
      for(j=0;j<=n-i-2;j++){
	
	  if(a[j]>a[j+1]){
	    
	      t=a[j];
	      a[j]=a[j+1];
	      a[j+1]=t;
	  }
      }
  }
  for(i=0;i<=n-1;i++){
   
      printf("%d,",a[i]);
  }
  printf(" Done! \n");
}
