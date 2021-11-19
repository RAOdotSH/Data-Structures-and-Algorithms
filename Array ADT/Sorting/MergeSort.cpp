#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Merges two subarrays of arr[].
void merge(int A[], int start, int mid, int end){

    // Create temp arrays (vector)
    vector <int> temp;
    
    // Pointers to the subarrays
    int left = start, right = mid + 1;

    // 
    while(left <= mid && right <= end){
        
        // if left is smaller than right, add it to temp vector
        if(A[left] < A[right]){
            // adding and incrementing left
            temp.push_back(A[left++]);
        }
        else{
            // adding and incrementing right
            temp.push_back(A[right++]);
        }
    }

    //  adding the elements of left and right if remaining elements are smaller than right
    while(left <= mid) temp.push_back(A[left++]);
    while(right <= end) temp.push_back(A[right++]);

    // copying the elements of temp vector to A
    for(int i = start; i <= end; i++) A[i] = temp[i - start];


}

// Divide the array into two halves until the size of the array is 1
void mergeSort(int A[], int start, int end){
    
    // Base case
    if( end > start) return;
    
    // Recursive case
    int mid = (start + end)/2;
    
    // Divide 
    mergeSort(A, start, mid);
    mergeSort(A, mid+1, end);
    
    // Conquer
    merge(A, start, mid, end);

}

int main(){
    
    
    return 0;
}