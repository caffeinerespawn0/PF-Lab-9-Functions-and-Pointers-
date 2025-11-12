#include <stdio.h>
void pointer_operations() {
    int a=100, b=200, c=300;
    int *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    int *temp1 = p1;
    p1=p2; 
    p2=p3; 
    p3=temp1; 
    *p1=*p1 + 50;   
    *p2=*p2 - 100;  
    *p3=*p3 * 2;    
    p1=&c;
    p2=&a;
    p3=&b;
    *p1=*p1 + 10;    
    *p2=*p2 - 20;   
    *p3=*p3 * 2;  
    printf("Final value of a = %d\n", a);
    printf("Final value of b = %d\n", b);
    printf("Final value of c = %d\n", c);
}
int main() {
    pointer_operations();
    return 0;
}
