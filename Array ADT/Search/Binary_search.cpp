#include <bits/stl_deque.h>
using namespace std;


// Loop Appraoch 👇
int binarySearch(int Array[], int size, int key){
    int l = 0,
    mid,
    h = size - 1;

    while(l<=h){
        mid = (l+h)/2;

        if(key == Array[mid]){
            return mid;
        }
        else if(key < Array[mid]){
            h = mid - 1;
        }
        else l = mid + 1;
    }

    return -1;
    
}

// Tail Recursion Approach 👇
int binarySearch_recursive(int Array[], int key, int l, int h){ // l = low = 0; h= high = size - 1;
    int mid;

    if(l<=h){
        mid = (l+h)/2;

        if(key==Array[mid]){
            return mid;
        }
        else if(key < Array[mid]){
            return binarySearch_recursive(Array, key, l, (mid-1));
        }
        else return binarySearch_recursive(Array, key, (mid+1), h);
    }

    return -1;
    
}

/*
  In above two methods the Loop approach is better than Recursive one, as it is Tail Recursion.
  Head Recursion > Loop > Tail Recursion

  Tail Recursion and Loops are similar just difference is that the Recursive proccess usses Stack.
*/ 