#include <stdio.h>
#include <stdlib.h>

void  main()
{  
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("The table of %d is:\n",n);
    for(int i=1;i<=10;i++)
    {
      printf("%d*%d=%d\n",n,i, n*i);
    }

}
