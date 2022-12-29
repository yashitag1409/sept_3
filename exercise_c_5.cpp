// reversing entered number

#include<iostream>
#include <stdio.h>
using namespace std;

int main() {

    int num, remainder, reverse=0;

    printf("Enter Integer : ");
    scanf("%d",&num);

    while(num != 0){
        remainder = num % 10;
        reverse = (reverse * 10) + remainder; 
        cout <<  reverse << endl;
        num /= 10;
    }

    return 0;
}