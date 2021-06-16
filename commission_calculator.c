/*  An application that calculates a brokers comission based on the trade he pulled comparing it with his rival
*copyright 2021
*Developed by Kevin Njenga */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float trade_made, commission, amountj_traded , jshares_traded;

    printf("Enter number of shares traded by Jameson/your trade:");
    scanf("%d/%f " , &jshares_traded, &trade_made);


    if (jshares_traded > 2000){
        amountj_traded = (jshares_traded * 33.02);
        }else if (jshares_traded < 2000){
            amountj_traded = (jshares_traded * 33.03);
        }
    if (trade_made < 2500){
        commission = (30 + 1.7*trade_made);
    }else if (trade_made < 6250){
        commission = (56 + 0.66*trade_made);
    }else if (trade_made < 20000){
        commission = (76 + 0.34*trade_made);
    }else if (trade_made < 50000){
        commission = (100 + 0.22*trade_made);
    }else if (trade_made < 500000){
        commission = (155 + 0.11*trade_made);
    }else if(trade_made  > 500000);{
        commission = (76 + 0.34*trade_made);
    }

    if (commission < 39){
        printf("Your commission: 39");
    }else {
        printf("Your commission: %.2f\n " , commission);
    }printf("Jameson made %.2f" , amountj_traded);

    return 0;
}







