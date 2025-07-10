#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,rem;
    int binary[32];

    cout << "Enter an integer --> ";
    cin >> n;
    int i=0;
    for(; n>0 ; i++){
        rem = n%2;
        binary[i] = rem;
        n=n/2;
    }
    cout<<"Binary equivalent is ==> "<<endl;
    for(int j=i-1;j>=0;j--){
        cout<<" "<<binary[j];
    }

}