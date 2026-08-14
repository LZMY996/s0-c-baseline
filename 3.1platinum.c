#include <stdio.h>
int main(void){
    float weight;
    float value;
    printf("Enter the weight of your platinum piece in grams:\n");
    scanf("%f",&weight);
    value = 1700.00 * weight * 14.5833;
    printf("Your platinum piece is worth $%.2f.\n",value);
    return 0;
}