#include <stdio.h>

int main() {
    int arr[5] = {6,3,33,64,12};  

    int max = arr[0];  
    int min = arr[0];  

    
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
        if (arr[i] < min) {
            min = arr[i];  
        }
    }

    
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

   
}