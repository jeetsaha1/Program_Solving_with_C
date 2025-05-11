#include<stdio.h>

int main(){
    int n,count=0,l;
    printf("Enter the extension: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int k=1;k<=n;k++){
        for(int l=1;l<=n;l++){
            if(arr[k]==arr[l]){
                count+=1;
            }
            
        }
        
        printf("%d : %d",arr[k],count);
        printf("\n");
        count=0;
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int n, count;
    
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n], co[n], visited[n]; // Array for storing elements and their frequency
//     printf("Enter the elements: ");

//     // Input elements
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         visited[i] = 0; // Initialize visited array
//     }

//     // Count occurrences of each element
//     for (int k = 0; k < n; k++) {
//         if (visited[k] == 1) {
//             continue; // Skip if already counted
//         }
        
//         count = 1;  // Start counting from 1 (current element itself)
//         for (int l = k + 1; l < n; l++) {
//             if (arr[k] == arr[l]) {
//                 count++;
//                 visited[l] = 1; // Mark duplicate elements as visited
//             }
//         }
        
//         printf("%d : %d\n", arr[k], count); // Print the unique element with its count
//     }

//     return 0;
// }
