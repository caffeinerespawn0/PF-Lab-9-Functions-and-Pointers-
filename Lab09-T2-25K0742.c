#include<stdio.h>
int avg(int a,int b,int c){
    int sum=a+b+c;
    int average=sum/3; 
    if(a<40||b<40||c<40){
        printf("Fail\n");
        printf("The marks in one of the three subject is lesser than 40\n");
    }
    else if(average<50){
        printf("Fail\n");
        printf("Your overall average is less than 50\n");
    }
    else{
        printf("Pass\n");
    }
    return average; 
}
int main(){
    int a,b,c,sum,average,result; 
    printf("Enter the marks for subject 1\n");
    scanf("%d",&a); 
    printf("Enter the marks for subject 2\n");
    scanf("%d",&b);
    printf("Enter the marks for subject 3\n");
    scanf("%d",&c);
    result=avg(a,b,c); 
    printf("Your average is %d",result);
    return 0; 
}
