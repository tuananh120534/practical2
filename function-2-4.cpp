#include <iostream>
int array_min(int integers[], int length) {
if (length < 0) 
    {
        return -1;
    }
    int min = integers[0];
    for (int i = 0; i < length; i++) {
        if(min > integers[i]) {
            min=integers[i];
        }
    }
    return min;
    
}
int array_max(int integers[], int length) {
if (length < 0)
    {
        return -1;
    }
    if (length < 0)
    {
        return -1;
    }
    int max = integers[0];
    for (int i = 0; i < length; i++)
    {
        if(max < integers[i]){
            max=integers[i];
        }
    }
    return max;
}
int sum_min_max(int integers[], int length){
    if (length < 0)
    {
        return -1;
    }
    return (array_min(integers, length) + array_max(integers, length));
}