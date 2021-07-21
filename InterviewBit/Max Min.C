/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int solve(int* A, int n1) {
    int max = A[0], min = A[0], i;
    for(i=1; i<n1; i++){
        if(A[i]>max)
            max = A[i];
        if(A[i]<min)
            min = A[i];
    }
    //printf("Max: %d Min: %d\n", max, min);
    return max+min;
}
