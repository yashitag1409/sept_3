// to determine point lie on x,y axis or at origin

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y;

    cout << "Programme to find the point lie on axis or at origin" << endl;
    cout << "Point X: ";
    cin >> x;
    cout << endl<< "Point Y: ";
    cin >> y;

    if(x > 0 || x< 0){
        if(y > 0|| y<0){
            cout << endl<< " Point lie on x-axis and y-axis ";
        }
        else{
            cout << endl << "Only Point x lie at x-axis";
        }
    }
    else{
        if(y > 0|| y<0){
            cout << endl<< " Only Point Y lie at y-axis ";
        }
        else{
            cout << endl << "Points lie at Origin ";
        }
    }
    return 0;
}