#include <stdio.h>

int main(){
    int num[10] ={ 3,4,5,6,7,8,9,10,11,12};
    char channelType;
    float total = 0;


    printf("Enter number of transactions(3-12): ");
    scanf("%d", &num);

    printf("Enter ChannelType forTXN1(O,B,A): ");
    scanf("%c/n", &channelType);
    
    printf("Enter ChannelType forTXN2(O,B,A): ");
    scanf("%c\n", &channelType);

    printf("Enter ChannelType forTXN3(O,B,A): ");
    scanf("%c\n", &channelType);

    printf("Enter ChannelType forTXN4(O,B,A): ");
    scanf("%c\n", &channelType);

    printf("Enter ChannelType forTXN5(O,B,A): ");
    scanf("%c\n", &channelType);

    printf("Enter Total Transaction Value:60000.00 ");
    scanf("%.2f\n", &total);

    printf("\n--- Free Summary ---\n");






    return 0;
}