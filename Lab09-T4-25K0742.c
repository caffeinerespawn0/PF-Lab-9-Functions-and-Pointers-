#include<stdio.h> 
int shipping(int amount,int weight){ 
    int total_cost=0; 
    if(amount>100){ 
        printf("Free Shipping\n");
        total_cost=total_cost+amount; 
    }
    else if(amount<=100){ 
        if(weight<2){ 
            total_cost=10+amount; 
        }
        else if(weight>=2&&weight<=5){
            total_cost=15+amount;
        }
        else if(weight>5){
            total_cost=20+amount; 
        }
    }
return total_cost; 
}
int main(){ 
    int amount=0, weight=0,result=0; 
    printf("Enter your order amount(in $)\n"); 
    scanf("%d",&amount); 
    printf("Enter your shipment weight\n");
    scanf("%d",&weight); 
    result=shipping(amount,weight); 
    printf("Your total amount is %d\n",result); 
    return 0; 
}