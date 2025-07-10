#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void combine(int arr[], int beg, int mid, int end){
    int temp[end - beg + 1];

    int i=0, l = beg, r = mid +1;
    cout<<"Inside Combine ==> beg = "<<beg<<" mid ="<<mid<<" end = "<<end<<endl;
    while(l<= mid && r <=end){
        cout<<"Inside Combine while l<= mid && r <=end "<<endl;
        if(arr[l]<=arr[r]){
            cout<<" inside if arr[l]<=arr[r] ==> "<<arr[l]<<" <= "<<arr[r]<<endl;
            temp[i++] = arr[l++];
        }
        else{
            cout<<" inside else arr[r]<=arr[l] ==> "<<arr[l]<<" >= "<<arr[r]<<endl;
            temp[i++] = arr[r++];
        }
    }
    while(l<= mid){
        cout<<"Inside while( "<<l<<" <= "<<mid<<" )"<<endl;
        temp[i++] = arr[l++];
    }
    while(r<= end){
        temp[i++] = arr[r++];
    }
 
    for(int j = 0; j<i ; j++){
        arr[beg+j] = temp[j];
        cout<<"Inside for arr["<<beg+j<<"] = "<<arr[beg+j]<<endl;
    }

}

void mergeSort(int arr[], int beg, int end){
    cout<<"Inside mergeSort 1 beg= "<<beg<<" end="<<end<<endl;
    if(beg == end){
        cout<<"Inside beg==end"<<endl;
        return;
    }


    int mid = (beg + end) / 2;

    cout<<"Inside mergeSort 2 beg= "<<beg<<" mid="<<mid<<endl;
    mergeSort(arr, beg, mid);
    
    cout<<"before mergeSort 3 mid+1= "<<mid+1<<" end="<<end<<endl;
    mergeSort(arr, mid+1, end);
    

    cout<<"before Combine beg= "<<beg<<" mid="<<mid<<" end="<<end<<endl;
    combine(arr, beg, mid, end);
    
}

void sortArray(int arr[], int n){

    mergeSort(arr, 0, n-1);
}

int main(){
    int arr[] = {6,3,9,7,2,1};

    sortArray(arr, 6);
    for(int i = 0; i< 6 ; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    return 0;
}

