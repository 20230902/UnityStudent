
// 전처리문이란?
// 실제 컴파일이 시작되기 전에, 컴파일러에게 특별한 명령을
// 미리 처리하도록 지시할 때 사용하는 구문이다.

// 전처리문은 #으로 시작되며, 한 라인에 한 개의 전처리기 명령만을 사용
// 만약 여러 줄의 명령을 처리하도록 하려면 \ 을 이용하여 여러 줄로 작성 가능
// 전처리기 지시어는 끝에 세미클론(;)을 붙이지 않는다.

//지정한 파일의 내용을 읽어와 지시자가 있는 파일에 포함시키는 기능
//#include <파일>or "파일"을 이용
//사용자가 만든 헤더파일 : "" 사용
//시스템이 제공해주는 헤더파일 : <> 사용
#include <stdio.h>
//
//#define : 심볼, 또는 매크로 상수/함수를 정의
//
#define DEBUG
#define RELEASE
// 심볼 DEBUG,RELEASE 를 정의
// 
// 매크로 상수
#define PI 3.14f;
// 3.14를 PI키워드로 정의
// 사용한다면 PI가 3.14f 라는 코드로 치환됩니다.
// 
// 매크로 함수
#define Plus(x,y)(x+y)
// x+y 코드를 Plus(x,y)로 정의합니다.
// 사용한다면 Plus(x,y)코드가 x+y라는 코드로 치환되므로
// 매크로 함수는 일반 함수처럼 코드 점프가 일어나지 않으므로
// 처리속도가 훨씬 빠릅니다.
// 코드 내용이 실행시킬 내용이나 복잡한 경우에는 매크로함수보단 함수를 선언하는것이
//낫다.


// #ifdef : 심볼, 매크로 상수, 함수가 정의되어있는지 검사
// #ifndef : 심볼, 매크로 상수, 함수가 정의되어있지 않은지 검사
// DEBUG가 정의되어 있는지 검사
#ifdef DEBUG

//#undef : #define으로 정의한 심볼, 매크로 상수/함수 해제 

#undef DEBUG
#endif

//Plus(x,y) 매크로 함수를 정의 해제
#undef Plus(x,y)

//#if, #elseif, #else : 조건 검사를 하고 검사 결과에 따라 
// 해당 구문의 컴파일 여부를 조건에 따라 결정합니다.

#define ANDROID 1
#define IOS 2
#define CurrentPlatform IOS 





void main()
{
#if (CurrentPlatform == ANDROID)
	// 구글 플레이 로그인 실행
#elif (CurrentPlatform == IOS)
	//ios플랫폼 로그인 실행
#else
	//일반 이메일 로그인 실행
#endif

}


// #pragma : 컴파일러의 시능을 확장시킬수 있도록 하는 기능
// 
