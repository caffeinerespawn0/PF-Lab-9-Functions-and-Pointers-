#include <stdio.h>
int main() {
    int arr[]={10,20,30,40,50,60,70};
    int *ptr=arr;
    printf("%d ", *ptr);        
    printf("%d ", *(ptr + 3)); 
    printf("%d ", ptr[2]);      
    ptr = ptr+4;
    printf("%d ",*ptr);        
    printf("%d ",*(ptr + 1));  
    printf("%d ",ptr[2]);     
    int *p2 = &arr[5];
    printf("%d ",*p2);      
    return 0;
}
