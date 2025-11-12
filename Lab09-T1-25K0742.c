#include<stdio.h>
int transaction(int trans_amount, int curr_limit){
    if(trans_amount<=curr_limit){
       curr_limit=curr_limit-trans_amount;
       printf("Transaction approved\n");
    }
    else if(trans_amount>curr_limit){
    printf("Transaction denied\n");
    }
    return curr_limit; 
}
int main(){
    int curr_limit=5000; 
    int trans_amount=0;
    printf("Enter the amount for transaction(in $)\n");
    scanf("%d",&trans_amount);
    curr_limit=transaction(trans_amount,curr_limit);
    printf("Remaining limit:$%d\n",curr_limit);
    return 0; 
}