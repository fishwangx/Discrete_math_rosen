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

double pow(double number, double index){
    
    double p = 1;
    
    while (index >0){
        
        p *= number;
        index--;

        
    };
    
    return p;

};

int string_to_number(char a_string[], int length){
    
    int a = 0;
    
    for(int i=0;i<length; i++){
        
        a = a + a_string[i]* pow(2,length-i-1);
    }

    return a;
    
};
string * number_to_string(int number){
    
    
    
};


void test(){
    
    //  test result should be  1 1 1
    
    printf("bitwise and or xor\n""");
    
    printf("test pow(2,3)==8 %d", pow(2, 3)==8);
    
    printf("%d %d %d\n",bit_and(13, 4)==4,bit_or(13, 4)==13,bit_xor(13, 4)==9);
    
    printf("string 1101 to number %d \n",string_to_number("1101", 4)==13);
    printf("nunber 12 to string.%d \n", strnmp(number_to_string(12),"1100")==1);
    
    
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    //test();
    
    char a[100],b[100];
    
    int length = 0;
    
    printf("Input length and two bit strings");
    
    
    
    
    return 0;
}
