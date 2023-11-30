# include <stdio.h>

int main(void){

    int num01, num02;

    printf("두개의 정수를 입력해주세요\n");
    scanf("%d %d", &num01, &num02);
    
    printf("입력하신 두 정수를 8진수로 나타내면 %o와 %o가 되고\n", num01, num02);
    printf("입력하신 두 정수를 16진수로 나타내면 %x와 %x가 됩니다\n", num01, num02);

    return 0;
}