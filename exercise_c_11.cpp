// to check point lie inside , outside, on circle

#include<iostream>
#include<cmath>
using namespace std;


// to calculate square root
int Sq(int num){
    int sqr = num * num;
    return sqr;
}
// to calculate distance
int Distance(int eq,int r){
    int d;
    d = sqrt(eq);

    int val =0;
    if(d < r){
        val = 0; //inside
    }
    else if(d > r){
        val = 1; //outside
    }
    else{
        val = 2;  //on
    }

    return val;
}
int main(){
    // x , y => points
    // h,k => center of circle  || radius
    int x,y,h,k,radius,eq, resp;

    string circle[] = {"Inside the Circle","On the Circle","Outside the Circle"};

    cout << "Enter the point X :" << endl;
    cin >> x;
    cout << endl<<"Enter the point Y :" << endl;
    cin >> y;
    cout <<endl<< "Enter the center H:" << endl;
    cin >> h;
    cout << endl<< "Enter the center K :" << endl;
    cin >> k;

    cout << endl<< "Enter the Radius :" << endl;
    cin >> radius;

    eq = Sq(x-h)+Sq(y-k);

    resp = Distance(eq,radius);

    cout << circle[resp];

    return 0;

}