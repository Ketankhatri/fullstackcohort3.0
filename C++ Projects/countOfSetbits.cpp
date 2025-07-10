#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void backtrackCount(int arr[], int beg, int mid, int end){

    int i=0, l = beg, r = mid+1;

    while(l<= mid && r<=end){

        if(arr[l]==1){
            
        }
    }

}

void divideBinary(int arr[], int beg, int end){

    if(beg==end){
        return;
    }

    int mid = (beg + end) / 2;

    divideBinary(arr, beg, mid);
    divideBinary(arr, mid+1, end);

    backtrackCount(arr, beg, mid, end);
    

}


void countSetBits(int arr[], int len){

    divideBinary(arr, 0, len-1);
}



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
    int len = sizeof(myNumbers);
    countSetBits(binary, len );

}