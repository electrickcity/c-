#include <stdio.h>
int main(void)
{
    int user, change = 0;
    int price, c5000, c1000, c500, c100, c50, c10;
    printf("물건값을 입력하시오: ");
    scanf("%d", &price);

    printf("사용자가 낸 돈: ");
    scanf("%d", &user);

    change = user - price;
    printf("거스름돈: %d\n", change);
    printf("\n \n \n");

    c5000 = change/5000;
    change = change%5000;
    c1000 = change/1000;
    change = change%1000;
    c500 = change/500;
    change = change%500;
    c100 = change/100;
    change = change % 100;
    c50 = change/50;
    change = change%50;
    c10 = change/10;
    change = change % 10;


    printf("오천원권: %d장\n", c5000);
    printf("천원권: %d장\n", c1000);
    printf("오백원권: %d장\n", c500);
    printf("백원권: %d장\n", c100);
    printf("오십원권: %d장\n", c50);
    printf("십원권: %d장\n", c10);

}
