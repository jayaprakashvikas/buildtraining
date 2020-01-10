#include<stdio.h>
    void small(){
	                      int x, y, z;
			                        printf(" Enter three Integer numbers for x, y, z : ");
						                  scanf("%d %d %d", &x, &y, &z);
								                    if((x < y)&&(x < z))
											                      printf("\n x is smallest : %d\n",x);
										                      else
													                       {
																                        if(y < z)
																				                 printf("\n y is smallest : %d\n",y);
																			                 else
																						                  printf("\n z is smallest : %d\n",z);
																					                  }
//												          return(0);
													      }
