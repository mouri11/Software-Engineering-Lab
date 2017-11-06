/*
* Copyright Rohit Das (C) 2017
* To display binary pattern as shown:
1
0 1
1 0
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,k;   k = 1;
	printf("Enter the number of lines\n");    scanf("%d",&n);
	for(i=0;i<n;i++) {
        for(j=0;j<=i;j++) {	
        	printf("%d",k);
        	if(k==1)    k=0;
        	else    k=1;
   	    }
    	printf("\n");
	}
	return 0;
}
