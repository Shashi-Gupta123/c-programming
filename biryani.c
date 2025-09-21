// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro");
    int t,n;
    //printf("\nenter the valye of testcases => ");
    scanf("%d",&t);
    
    
	//scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    printf(" for n=> ");
        scanf("%d",&n);
	    if (n<=10)
	    {
	        printf("yes\n");
	    }
	    else
	    {
	        printf("no\n");
	    }
	}

    return 0;
}
