#include <stdio.h>
 
int nums[] = { 1, 3, 5, 9, 11, 15, 17, 21 };
 
int main(){
    int i;
    for(i = 0; i < sizeof(nums)/sizeof(int); i++){
        if(nums[i] && nums[i+1])
            if ((nums[i+1] - nums[i]) != 2)
                printf("\t%d\n", nums[i] + 2);
    }
}
