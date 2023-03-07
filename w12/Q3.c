#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//memory
int *r;


int cr_bottom_up_dp_print(int *p, int n)
{
    int i, j;
    r[0] = 0;
    for(j=1;j<=n;j++){
        r[j] = 0;
        for(i=1;i<=j;i++){
            r[j] = ((r[j] > p[i] + r[j-i]) ? r[j] : p[i] + r[j-i]);
        }
    }
    return r[n];
}

 
void main ()
{
    int n;      //length of  rod
    int function;
    int i;
    int *p;     //price list
    
    int price_list[10] = {0,1,4,8,9,10,17,17,20,24}; //declare one more value to cover the index 0;
    
    n = sizeof(price_list) / sizeof(int) - 1;
    p = price_list;
    
    
    //allocate the memory array
    r = malloc(sizeof(int) * (n+1));
    
    
    //set all memory elements to -1
    for (i=0; i<=n; i++)
        r[i] = -1;
                
    printf("The maximum value is: %d \n", cr_bottom_up_dp_print(p,n));
}