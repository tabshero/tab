#include <stdio.h>
#include <stdlib.h>

void  main()
{   int i,k,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The table of %d is:\n",n);
    for(i=1;i<=10;i++)
    {
      k = i*n;
      printf("%d*%d=%d\n",n,i,k);
    }
    printf("HUHAHaA");

}
