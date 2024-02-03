#include<iostream>
using namespace std;

//print triangle
int main(){
    int i,j,in;
    cout<<"Enter number you want traingle of :: ";
    cin>>in;
    for(i=1;i<=in;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}