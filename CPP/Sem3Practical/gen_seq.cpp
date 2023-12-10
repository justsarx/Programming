#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the upper limit of sequence of number you want :: ";
    cin>>n;
    cout<<"Ascending\tDescending\n";
    for(i=0,j=n; i<=n && j>=0; i++, j--){
        cout<<i<<"\t\t"<<j<<endl;
    }
    return 0;
}