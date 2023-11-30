# include <stdio.h>

int main(void)
{
    int num01, num02;

    printf("첫번째 정수를 입력하시오");
    scanf("%d", &num01);
    printf("두번째 정수를 입력하시오");
    scanf("%d", &num02);

    printf("입력하신 두 정수의 합은 %d 입니다\n", num01+num02);
    return 0;

    // & 기호는 주소연산자 (입력받은 데이터를 뒤에 나오는 변수에 저장하라는 의미)
}