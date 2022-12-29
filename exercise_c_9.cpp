// Finding Area is greater or Parameter of Rectangle
#include<iostream>
using namespace std;


int Rectangle_parameter(int l,int b){
    int para = 2*(l+b);
    return para;
}
int Rectangle_area(int l,int b){
    int area = l * b;
    return area;
}

int main(){
    int length,breadth,area,para;

    // printf("Finding Area is greater or Parameter of Rectangle ");
    printf(" ");
    printf("Enter the Length : ");
    scanf("%d",&length);
    printf("Enter the Breadth : ");
    scanf("%d",&breadth);

    area = Rectangle_area(length,breadth);
    para = Rectangle_parameter(length,breadth);

    if(area < para){
        printf("the Parameter = %d of the rectangle with length = %d and breadth = %d is greater than its Area = %d",para,length,breadth,area);
    }
    else{
        printf("the area = %d of the rectangle with length = %d and breadth = %d is greater than its perimeter = %d",area,length,breadth,para);
    }

    return 0;
}