#include<stdio.h>
int main(){
    int q1,q2,q3,q4,Total;
    printf("cans of rate: 500 \n");
    scanf("%d",&q1);
    printf("packets of rate: 400 \n");
    scanf("%d",&q2);
    printf("choclates of rate: 300 \n");
    scanf("%d",&q3);
    printf("toys of rate: 200 \n");
    scanf("%d",&q4);
    Total=(500*q1)+(400*q2)+(300*q3)+(200*q4);
    printf("Total amount: %d\n",Total);
    if(Total>=1001 && Total<=10000 ){
        printf("discount given of:%d\n ",Total*5/100);
                    printf("amount to be paid:%d\n ",Total-(Total*5/100));

    }
    else if(Total>=10001 && Total<=15000 ){
            printf("discount given of:%d\n ",Total*7/100);
            printf("amount to be paid:%d\n ",Total-(Total*7/100));
    }
        else if(Total>=15001 && Total<=20000 ){
                    printf("discount given of:%d\n ",Total*9/100);
                                printf("amount to be paid:%d\n ",Total-(Total*9/100));

        }
        else if(Total>20000){
            printf("discount given of:%d\n ",Total*12/100);
                        printf("amount to be paid:%d\n ",Total-(Total*12/100));

        }

    return 0;

}