//clz.c

#include <stdio.h>
#include <stdint.h>

int getNum(uint32_t num){
    int count = 0;
    int i;

    for(i = 31;i >= 0; i--){
        if ((num >> i)& 1){
            break;
        }
        count++;
    }
    return count;
}
