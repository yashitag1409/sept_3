// Youngest among three

#include<iostream>
using namespace std;

int main(){
    int ram, shyam , ajay;

    printf("Enter the Age (Ram) : ");
    scanf("%d",&ram);
    
    printf("Enter the Age (Shyam) : ");
    scanf("%d",&shyam);

    printf("Enter the Age (Ajay) : ");
    scanf("%d",&ajay);

    if(ram < shyam){
        if(shyam < ajay)
            printf("Ram is Youngest ");
        else if(ram < ajay){
            printf("Ram is Youngest ");
        }
    }
    else if(ram < ajay){
        if(ajay < shyam )
            printf("Ram is Youngest ");
        else
            printf("Shyam is Youngest ");
    }
    else{
        if(ajay < shyam){
            printf("Ajay is Youngest ");
        }
        else
            printf("Shyam is Youngest ");
    }

    return 0;
}