/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */

#include<iostream>

int firstMissingPositive(int* A, int n1) {
    int i;
    for(i=0; i<n1; i++){
        if(A[i] > 0 && A[i] <= n1 && A[A[i]-1] != A[i]){
            int temp = A[A[i]-1];
            A[A[i]-1] = A[i];
            A[i] = temp;
            // printf("Swapping %d, %d ...\n",A[A[i]-1],A[i]);
            i --;
        }
    }
    // printf("Array: ");
    for(i=0; i<n1; i++){
        // printf("%d, ", A[i]);
        if(A[i] != i+1)
            return i+1;
    }
    return n1+1;
}

int main(){
    firstMissingPositive([1,2,0],3);
    return 0;
}