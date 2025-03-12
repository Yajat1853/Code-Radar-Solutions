/*#include<stdio.h>

int main(){ 
    int n, m; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&m);
    m = m % n;
    for(int i = 0 ; i < n ;i++){
        printf("%d\n",arr[(i + m) % n]);
    }
    return 0;
}*/

#include <stdio.h>

int main() { 
    int n, m; 
    
    // Input for n (size of the array)
    scanf("%d", &n);
    
    // Declare the array with a size of n
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input for m (number of positions to shift)
    scanf("%d", &m);
    
    // To handle cases where m > n, use m = m % n.
    m = m % n;
    
    // Perform the circular left shift by splitting the array
    for (int i = 0; i < n; i++) {
        // Place the elements from position (i + m) % n in the new array
        printf("%d ", arr[(i + m) % n]);
    }
    
    return 0;
}
