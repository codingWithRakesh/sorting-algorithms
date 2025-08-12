#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    int i = start, j = mid + 1,k = 0;
    int tmp[100];

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            tmp[k++] = arr[i++];
        }else{
            tmp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        tmp[k++] = arr[i++];
    }

    while(j <= end){
        tmp[k++] = arr[j++];
    }

    for(i = start,k = 0; i <= end;i++,k++){
        arr[i] = tmp[k];
    }

}

void mergeSort(vector<int> &arr, int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid + 1,end);

        merge(arr,start,mid,end);
    }
}

int main(){
    vector<int>arr = {1,8,2,7,4,5,6};
    int n = arr.size();
    mergeSort(arr,0,n-1);
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}