#include<stdio.h>
//#include<conio.h>
void bigof2()
{
	    int a, b, big;
	        printf("\nEnter any two number: ");
		    scanf("%d%d", &a, &b);
		        if(a>b)
				        big=a;
			    else
				            big=b;
			        printf("\nBiggest of the two number is: %d\n", big);
//				    getch();
//				        return 0;
}
