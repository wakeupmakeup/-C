//
//  overflow.c
//  C
//
//  Created by 김태경 on 2023/02/15.
//

#include "overflow.h"
#include "limits.h"

int main() {
    // 오버플로우
    // int 자료형의 최대값을 알 수 있다. 이 값이 넘어가면 오버플로우가 나오는 것이다.
    int max = INT_MAX;
    
    printf("int형의 최댓값 : %d\n", max);
    printf("max + 1은 다음과 같습니다. %d\n", max+1);
    
    // 최대값에서 +1을 하자 오히려 한바퀴를 돌아 최소값으로 돌아왔다.
    
    
    return 0;
}
