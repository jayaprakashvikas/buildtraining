#include <stdio.h>
//#include <conio.h>
void palin() {
	    int n, reversedN = 0, remainder, originalN;
	     printf("\n\nEnter an integer: ");
		    scanf("%d", &n);
		        originalN = n;
			    
			         while (n != 0) {
			                 remainder = n % 10;
			                         reversedN = reversedN * 10 + remainder;
			                                n /= 10;
			                                     }
			    
			                                            if (originalN == reversedN)
			                                                     printf("%d is a palindrome.\n", originalN);
			                                                         else
			                                                                 printf("%d is not a palindrome.\n", originalN);
			                                                                    // return 0;
			                                                                     }
