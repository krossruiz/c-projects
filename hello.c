#include <stdio.h>
#include <string.h>

int main(void) {
    //int num1 = 0x00;
    //int num2 = 0x00;
    //int num3 = 0x10;
    
    struct Car {
        char messageSizeStr[2];
        char num3str[8];
        char message[2];
        char random2[10];
        char messageToCorrupt[8];
        char random[10];
    } data; 
    
    strcpy(data.random, "qwertyuio");
    strcpy(data.random2, "qwertyuio");
    strcpy(data.num3str, "JKLMNOP");
    strcpy(data.message, "Hello, World!");
    strcpy(data.messageToCorrupt, "ABCDEFG");
    
    //char num3str[8] = "JKLMNOP";
    //char message[2] = "Hello, World!";
    //char messageToCorrupt[8] = "ABCDEFG";
    printf("sizeof(data.message) = %zu\n", sizeof(data.message));
    printf("sizeof(data.num3str) = %zu\n", sizeof(data.num3str));
    //sprintf(num3str, "%d", num3);
    //printf("sizeof(num3str) = %zu //after sprintf\n", sizeof(num3str));
    //printf("num3str = %s\n", num3str);
    strcat(data.message, data.num3str);
    printf("message (after strcat) is %s\n", data.message);
    //char messageSizeStr[2];
    sprintf(data.messageSizeStr, "%zu", sizeof(data.message));
    printf("data.messageSizeStr = %s\n", data.messageSizeStr);
    printf("messageToCorrupt = %s\n", data.messageToCorrupt);
    return 0;
}
