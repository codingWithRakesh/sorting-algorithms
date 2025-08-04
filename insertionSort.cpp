#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = prev;
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    insertionSort(arr);
    for(int i : arr){
        cout << i ;
    }

    return 0;
}