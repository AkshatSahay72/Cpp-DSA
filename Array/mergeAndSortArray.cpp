#include<iostream>
using namespace std;

int main(){
    int arr1[5] = {1, 3, 5, 7, 9};
    int n = 5, m = 3;
    int arr2[3] = {2, 4, 6};
    int arr3[m+n];
    int i = 0, j = 0, k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;

    }
    while(i<n){
        arr3[k] = arr1[i];
            i++;
            k++;
    }
    while(j<m){
        arr3[k] = arr2[j];
            j++;
            k++;
    }

    for (int i = 0; i < k;i++){
        cout << arr3[i] << " ";
    }
}