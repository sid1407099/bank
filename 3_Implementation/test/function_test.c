/**
 * @file function_test.c
 * @author siddharth.jain@ltts.com
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "function.h"
#include "unity.h"
#include<stdlib.h>



void setUp(){

}
void tearDown(){

}
void function_create(){
    
creation();
}

void function_depo(){
    deposit();
}

void function_with(){
    withdraw();
}

void function_bal(){
     bal();
}

void function_ex(){
     exit(0);
}




int main(void){
    UNITY_BEGIN();
    RUN_TEST(function_depo); //invalid

    RUN_TEST(function_bal); //invalid

    RUN_TEST(function_depo); //invalid

    RUN_TEST(function_with); //invalid 

    RUN_TEST(function_create);
    RUN_TEST(function_depo);
    RUN_TEST(function_with);
    RUN_TEST(function_bal);
    RUN_TEST(function_with); // cant withdraw all 

    RUN_TEST(function_ex);
    return UNITY_END();
}
