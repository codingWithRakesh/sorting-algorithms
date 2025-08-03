#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int smallIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallIndex]){
                smallIndex = j;
            }
        }
        swap(arr[i], arr[smallIndex]);
    }
}

int main(){
    vector<int>arr = {5,4,3,2,1};
    selectionSort(arr);
    for(int i : arr){
        cout << i;
    }
    return 0;
}