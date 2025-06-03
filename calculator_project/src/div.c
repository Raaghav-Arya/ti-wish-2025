#include "../inc/div.h"
#include <limits.h> 
#include <stdio.h>  
int32_t division(int32_t num1, int32_t num2)
{
     if (num2 == 0)
    {
        return INT32_MIN;
    }
    return num1 / num2;
}