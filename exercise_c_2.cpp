#include<iostream>
using namespace std;

int main(){
    int num,result,even;

    cout << "Enter Number" << endl;
    cin >> num;

    result = num %2;

    // cout << even;
    if(result == 0){
        cout << num <<" is Even ";
    }
    else{
        cout << num <<" is odd";
    }

    return 0;
}
