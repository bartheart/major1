//endian.c
//Author: Bemnet Merkebu
//CSCE-3600
//Date: 03/17/2023

#include <stdint.h>
#include <stdio.h>

/*
Explanation: Little endian swap (32-bit unsigned integer)
32- bits:         0   _   _   8   _   _   16   _    _   24    _    _   32
Hex:               0xFF000000    0x00FF0000   0x0000FF00    0x000000FF
n(000000FF) << 24      ^___________________<<_____________________|  3 bytes R-shift
n(0000FF00) << 8                     ^_____<<______|                 1 byte R-shift   
n(00FF0000) >> 8                     |_____>>______^                 1 byte L-shift
n(FF000000) >> 24      |___________________>>_____________________^  3 bytes L-shift
return n
*/

//endian swap function
uint32_t endian(uint32_t n){
    return ((n & 0x000000FF) << 24) | ((n & 0x0000FF00) << 8) | ((n & 0x00FF0000) >> 8) | ((n & 0xFF000000) >> 24);
}
