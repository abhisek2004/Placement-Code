/*
 * Given three sides of a triangle, Write a c program to 
 * check whether it is a valid triangle or not 
 */ 
   
#include <stdio.h>  
   
int main() {  
    int side1, side2, side3;  
   
    /* 
     * Take length of three sides of triangle as input 
     * from user using scanf 
     */ 
    printf("Enter Length of Three Sides of a Triangle\n");  
    scanf("%d %d %d", &side1, &side2, &side3);     
   
    if((side1 + side2 > side3)&&(side2 + side3 > side1)
            &&(side3 + side1 > side2)) {  
        printf("It is a Valid Triangle\n");  
    } else {  
        printf("It is an invalid Triangle");  
    }  
   
    return 0;  
}