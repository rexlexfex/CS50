#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;

int main(void)
{ 
    float given_amount;
    int coins, quarterc, dimec, nickelc, lefto, coinc;
 
    do 
    {
        printf("O hai! How much change is owed?\n");
        given_amount = get_float();
        if(given_amount < 0)
        printf("Number, should be greater than Zero! Ex: 10\n");
    } 
    while (given_amount < 0);
    
    coins = (int)round(given_amount*100);
    
    quarterc = coins / QUARTER;
    lefto = coins % QUARTER;
    
    dimec = lefto / DIME;
    lefto %= DIME;
    
    nickelc = lefto / NICKEL;
    lefto %= NICKEL;
    
    coinc = quarterc + dimec + nickelc + lefto;
    
    if (coinc == 0)
    {
        printf("Here's a handful of nothing, loser!\n");
    }
    else 
    {
           printf("Here are %d coins, divided as follows: %d quarters, %d dimes, %d nickles and %d pennies\n" , coinc, quarterc, dimec, nickelc, lefto);
    }
}       
