//
//  main.c
//  truth_value
//
//  Created by Fish Wang on 2019/3/22.
//  Copyright © 2019 Fish Wang. All rights reserved.
//

//input truth value a and b
// return truth table of
// conjuction, disjunction, exclusive or
// conditional statement
// biconditional
#include <stdio.h>


int conjunction(int a, int b){
    
    
    return a && b;
};

int disjunction(int a, int b){
    
    return a || b;
};

int exclusive_or(int a, int b){
    
    if (a==b)
        return 0;
    else
        return  1;
    
};

int conditional_statement(int a, int b){
    
    if (a==1 && b==0)
        return 0;
    else
        return 1;
}

int biconditional(int a, int b){
    
    return a==b;
    
};

void test(){
    
    printf("testing conjuction: \n");
    
    printf("%d \n", conjunction(1,1)==1);
    printf("%d \n", conjunction(1,0)==0);
    printf("%d \n", conjunction(0,0)==0);
    printf("%d \n", conjunction(0,1)==0);
    
    
    printf("testing disjunction: \n");
    printf("%d \n", disjunction(1,1)==1);
    printf("%d \n", disjunction(1,0)==1);
    printf("%d \n", disjunction(0,1)==1);
    printf("%d \n", disjunction(0,0)==0);
    
    printf("testing exclusive or: \n");
    printf("%d \n",exclusive_or(1, 1)==0);
    printf("%d \n",exclusive_or(1, 0)==1);
    printf("%d \n",exclusive_or(0, 1)==1);
    printf("%d \n",exclusive_or(0, 0)==0);
    
    printf("testing conditional statement: \n");
    
    printf("%d \n",conditional_statement(1, 1)==1);
    printf("%d \n",conditional_statement(1, 0)==0);
    printf("%d \n",conditional_statement(0, 0)==1);
    printf("%d \n",conditional_statement(0, 1)==1);
    
    
    printf("testing biconditional statement: \n");
    printf("%d \n",biconditional(1, 1)==1);
    printf("%d \n",biconditional(0, 1)==0);
    printf("%d \n",biconditional(0, 0)==1);
    printf("%d \n",biconditional(1, 0)==0);







    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //test();
    printf("Please input a  b:");
    int a,b;
    
    scanf("%d %d", &a, &b);
    printf("Conjunc Disjun Exclusive_Or Conditional Biconditional\n");
    printf("%d %d %d %d %d\n",conjunction(a, b),disjunction(a, b),exclusive_or(a, b),conditional_statement(a, b),biconditional(a, b));
    
      return 0;
}

