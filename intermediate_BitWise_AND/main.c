#include <stdio.h>
#include <stdlib.h>

long countPairs(int n , int* arr){
    long res=0;
    int i;
    int j;
    long count=0;

    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n ; j++){

            res = arr[i]&arr[j];
        //Zero is an exception case
            if((res!=0)&&(res%2==0)){
                count++;
            }
        }
    }
    return count;
    }

int main()
{
    int arr[5]={10,7,2,8,3};
    int x=countPairs(5,arr);
    printf("%d",x);
    return 0;
}
