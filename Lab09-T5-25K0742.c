#include<stdio.h> 
float bill(float food_cost, int people){
    float total=0;
    float p_tax=0;
    float tip=0;
    float service=0;
    p_tax=(0.08*food_cost);//post tax
    if(food_cost>50){
        tip=(0.15*food_cost); 
    }
    else{
        tip=(0.1)*food_cost;
    }
    if(people>6){
        service=(0.05*food_cost);
    }
    total=food_cost+p_tax+tip+service;
    return total;
}
int main(){
    float food_cost,people,t_amount; 
    printf("Enter your food cost\n");
    scanf("%f",&food_cost);
    printf("Enter the number of people\n");
    scanf("%d",&people);
    t_amount=bill(food_cost,people);
    printf("Your total amount is %.2f\n",t_amount);
    return 0; 
}