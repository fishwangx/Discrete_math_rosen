//
//  main.c
//  2_bitwise
//
//  Created by Fish Wang on 2019/3/22.
//  Copyright © 2019 Fish Wang. All rights reserved.
//
//Second project
// given two bit strings of length n
// find the bitwise OR , bitwise XOR, bitwise AND

#include <stdio.h>

int bit_and(unsigned int a, unsigned int b){
    
    return a & b;
};

int bit_or(unsigned int a, unsigned int b){
    
    return a|b;

};

int bit_xor(unsigned int a, unsigned int b){
    
    return a ^ b;
};


void test(){
    
    //  test result should be  1 1 1
    
    printf("bitwise and or xor\n""");
    
    printf("%d %d %d\n",bit_and(13, 4)==4,bit_or(13, 4)==13,bit_xor(13, 4)==9);
    
    
};

int string_to_number(char[], int length);
char * number_to_string(int number);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //test();
    
    char a[100],b[100];
    
    int length = 0;
    
    printf("Input length and two bit strings");
    
    
    
    
    return 0;
}
