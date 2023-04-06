#include <stdio.h>
#include "test_include.h"

void my_source2(void) {   
    printf("=====================\n");
    printf("__func__:%s\n", __func__);
    printf("__FILE__:%s\n", __FILE__);
    printf("__DATE__:%s\n", __DATE__);
    printf("__TIME__:%s\n", __TIME__);
    printf("__LINE__:%d\n", __LINE__);
}