Algorithm FindMaximum(A, n)
//A is the array, n is the number of elements

1. Start 
2. Set max = A[0] //Assume first element is maximum
3. For i = 1 to n-1 do
       if A[i] > max then 
          max = A[i]
4. End For 
5. Print max
6. Stop


#include <stdio.h>

int main(){
    printf("Enter number of elements: ");
    scanf ("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i =0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i =1; i < n; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }

    printf("Maximum element in the array is: %d\n", max);

    return 0;
}