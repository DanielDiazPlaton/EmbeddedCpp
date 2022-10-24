/*************************************************************************
 * 
 *      \author Daniel Diaz Platon
 *      \date   sunday, September 18, 2022
 *      \brief  sizePtr
 * 
 *************************************************************************/


#include <stdio.h>
#include <stdint.h>

int main()
{
    typedef struct {
        uint8_t w;
        uint16_t x;
        uint32_t y;
        uint64_t z;
        uint8_t* ptr8;
        uint16_t* ptr16;
        uint32_t* ptr32;
        uint64_t* ptr64;
    } dataP;
    
    dataP da;
    da.w = 4;
    da.x = 4;
    da.y = 4;
    da.z = 4;
    
    printf("uint8: %ld - uint16: %ld - uint32: %ld - uint64: %ld\n", sizeof(da.w), sizeof(da.x), sizeof(da.y), sizeof(da.z));
    printf("uint8*: %ld - uint16*: %ld - uint32*: %ld - uint64*: %ld\n", sizeof(da.ptr8), sizeof(da.ptr16), sizeof(da.ptr32), sizeof(da.ptr64));

    return 0;
}


