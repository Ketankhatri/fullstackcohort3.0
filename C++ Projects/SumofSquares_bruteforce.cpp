#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int bestDivision(int index, vector<int> b, vector<int> c, int arr[], int n){
    if(index==n){

        int sum_b=0, sum_c=0;
        for(int x : b){
            sum_b += x;
        }
        for(int x : c){
            sum_c += x;
        }
        return abs(sum_b * sum_b - sum_c * sum_c);
    }

    //if the element goes to b
    vector<int> new_b = b;
    new_b.push_back(arr[index]);
    int res = bestDivision(index+1, new_b,c,arr,n);
    //if it goes to c
    vector<int> new_c = c;
    new_c.push_back(arr[index]);
    int res2 = bestDivision(index+1, b,new_c,arr,n);

    return min(res, res2);

}

int main(){
    int arr[] = {1,2,4,6,9,224,123,455,69,11,29};
    vector<int> b;// = new vector<int>();
    vector<int> c;// = new vector<int>();
    int result = bestDivision(0, b,c,arr, 11);
    cout<<"difference is --> "<<result;
    return 0;
}