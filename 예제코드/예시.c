#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>


/* 여기에 함수를 작성해 주세요 */

int add(int a, int b)
{
	return a + b;	// 김찬영 github @kochanha Pull Request 추가
}






/* 함수 끝 */


// 메인 함수
int main()
{

	int a, b;

	scanf("%d %d", &a, &b);
	int sum = sum(a, b);
	printf("sum : %d", sum);

	/*
	//TODO

	 1. a+b의 값을 반환하는 add 함수 작성하기
	 2. a-b의 값을 반환하는 sub 함수 작성하기
	 3. a*b의 값을 반환하는 mul 함수 작성하기
	 4. a/b의 값을 반환하는 div 함수 작성하기
	 5. a%b의 값을 반환하는 mod 함수 작성하기
	 6. a^b의 값을 반환하는 pow 함수 작성하기 (헤더 없이)

	 7. printResult 함수에 위의 함수를 이용하여
	   6가지의 연산 결과 출력하는 함수 작성하기
	   
	   출력 예시 
	   add : 10
	   sub : 5 
	   .......
	 8. 4번에 대한 예외 , 에러 처리 해보기 

	*/
	printResult(a, b);

	return 0;
}