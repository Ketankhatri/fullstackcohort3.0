#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int bestDivision(int index, int sum_b, int sum_c, int arr[], int n){
    if(index==n){
        return abs(sum_b * sum_b - sum_c * sum_c);
    }

    //if the element goes to b    
    int res = bestDivision(index+1, sum_b+arr[index], sum_c, arr, n);
    //if it goes to c   
    int res2 = bestDivision(index+1, sum_b, sum_c+arr[index], arr, n);

    return min(res, res2);

}

int main(){
    int arr[] = {1,2,4,6,9,224,123,455,69,11,29};
    vector<int> b;// = new vector<int>();
    vector<int> c;// = new vector<int>();
    int result = bestDivision(0, 0,0,arr, 5);
    cout<<"difference is --> "<<result;
    return 0;
}