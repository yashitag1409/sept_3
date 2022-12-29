// finding triangle is valid or not

#include<iostream>
using namespace std;

int main(){
    float triangle , a,b,c;
    printf("To find the Valid triangle : ");
    cout << endl;
    printf("Enter side A :");
    scanf("%f",&a);
    printf("Enter side B :");
    scanf("%f",&b);
    printf("Enter side C :");
    scanf("%f",&c);

    triangle = a+ b + c;
    if(triangle == 180){
        printf("Triangle is Valid");
    }
    else
        printf("Triangle is NOT Valid");
}