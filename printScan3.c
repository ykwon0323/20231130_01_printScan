# include <stdio.h>

int main(void){
// scanf() 함수 
// float 형 실수 -> %f를 사용
// double 형 실수 -> %lf를 사용
// double이 float 보다 더 정밀함 (소수점 자리수가 많이 저장됨)

float numFloat;
double numDoubleF, numDoubleLF;


printf("3개의 실수를 입력해주세요\n");
scanf("%f %f %lf", &numFloat, &numDoubleF, &numDoubleLF);

printf("flot -> %f \n", numFloat);
printf("double d -> %f \n", numDoubleF);
printf("double lf -> %f \n", numDoubleLF);






}