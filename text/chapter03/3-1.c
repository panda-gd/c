#include <stdio.h>

int main(){
    int binsearchnum;
    int array[] = {1,2,.3,4,5};
    binsearchnum = binsearch(1,array,2);
    printf("binserachnum=%d",binsearchnum);
}

int binsearch(int x,int v[],int n){
    int low,high,mid;
    low = 0;
    high = n-1;
    while(low <= high){
        mid = (low+high)/2;
        if(x < v[mid])
        high = mid - 1;
            else if(x > v[mid])
                low = high + 1;
            else
                return mid;
        }
 }

