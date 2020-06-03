//
//  main.c
//  test
//
//  Created by xin on 5/18/20.
//  Copyright © 2020 xin. All rights reserved.
//

#include <stdio.h>
#include "constant.h"


//void printHex(const uint8_t cert[], int len){
//
//    for (int i = 0; i < len; i++){
//        printf("%02X", cert[i]);
//    }
//
//    printf("\n");
//}

void printHex(uint8_t *arr, int len){
    
    for (int i = 0; i < len; i++){
        printf("%02X", arr[i]);
    }

    printf("\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int len = sizeof(kEcAttestRootCert);
    printHex(kEcAttestRootCert, len);
        
    return 0;
}






