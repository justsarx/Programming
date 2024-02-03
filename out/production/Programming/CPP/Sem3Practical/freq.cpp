#include<iostream>
using namespace std;

int main(){
    int input[20]={0}, freq[1000]={0}, i;
    cout<<"Enter 20 numbers: ";
    for(i=0; i<20; i++){
        cin>>input[i];
        freq[input[i]]++;
    }
    cout<<"The frequency of each number is: "<<endl;
    cout<<"Number \tFrequency:-\n";
    for(i=0; i<1000; i++){
        if(freq[i]!=0)
            cout<<i<<"\t"<<freq[i]<<endl;
    }
    return 0;
}