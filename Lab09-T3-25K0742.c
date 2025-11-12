#include<stdio.h>
int temp(int temperature){
    int code=0;
    if(temperature>35){
    code=1; 
    }
    else if(temperature<10){
    code=2;
    }
    else if(temperature>=15&&temperature<=25){
    code=3;
    }
    else{
    code=4;
    }
    return code; 
}
int main(){
    int result, temperature; 
    printf("Enter the temperature in celsius\n");
    scanf("%d",&temperature);
    result=temp(temperature); 
    switch(result){
        case 1: 
        printf("Heat alert\n");
        break; 
        case 2: 
        printf("Cold Alert\n");
        break; 
        case 3: 
        printf("Comfort Zone\n");
        break; 
        case 4: 
        printf("Normal Conditions\n"); 
        break; 
        default: 
        printf("Enter a valid temperature"); 
        break;
    }
    return 0; 
}