// to find absolute value  
// to convert negative number (-ve) to positive number (+ve) 

#include<iostream>
using namespace std;

int main(){
    int num,abs;

    printf("Enter Number :");
    scanf("%d",&num);

    if(num < 0){
        abs = (-1)*num;
        printf("Absolute Value of %d : %d",num ,abs); 
    }
    else{
        printf(" Number %d is already absolute",num); 
    }
    return 0;

}