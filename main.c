/**
 * 계산기 v1.1 
 * 2022-04-01
 */
#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
int power(int n);

int main(int argc, char* argv[])
{
	int number1, number2, result;
	char operator;
	

	printf("수식을 입력해주세요(예> 1 * 2): ");

	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			result = add(number1, number2);
			break;
		case '-':
			result = sub(number1, number2);
			break;
		case '*':
			result = multi(number1, number2);
			break;
		case '/':
			result = div(number1, number2);
			break;
	}
	
	printf("result is %d.\n", result);
	
	return 0;
}
 
int add(int number1, int number2)
{
	// 더하기 조재철이 함
	return 0;
}
 
int sub(int number1, int number2)
{
	//this is hyunjin method

	return 0;
}
 
int multi(int number1, int number2)
{
	
	//this is hunmin method
	return 0;
}
 
int div(int number1, int number2)
{
	//this is jaecheol method
	return 0;
}

int power(int n) {
	// DONE: 거듭제곱 구현
}

void init () {
	// this is woosung method
}
