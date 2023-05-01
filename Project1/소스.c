#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int turn, input, num1, num2, num3, num4, num5;
    printf("순서 입력: ");
    scanf_s("%d", &turn);
    switch (turn) {
    case 1:
        printf("로또 번호 생성(0 입력하면 랜덤으로 숫자 나옵니다.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            printf("첫 번째 숫자 출력: %d", rand() % 45 + 1);
        }
        break;
    case 2:
        printf("첫 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num1);
        printf("로또 번호 생성(0 입력하면 랜덤으로 숫자 나옵니다.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num2 = rand() % 45 + 1; // num2에 랜덤 숫자를 할당하여 초기화
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num1 != num2)) {
            printf("로또 번호: %d, %d\n", num1, num2);
        }
        else {
            printf("잘못된 입력입니다. 1부터 45까지의 숫자 중 중복되지 않는 숫자를 입력해주세요.\n");
        }
        break;

    case 3:
        printf("첫 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num1);
        printf("두 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num2);
        printf("로또 번호 생성(0 입력하면 랜덤으로 숫자 나옵니다.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num3 = rand() % 45 + 1;
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num3 >= 1 && num3 <= 45) && (num1 != num2 && num1 != num3 && num2 != num3)) {
            printf("로또 번호: %d, %d, %d\n", num1, num2, num3);
        }
        else {
            printf("잘못된 입력입니다. 1부터 45까지의 숫자 중 중복되지 않는 숫자를 입력해주세요.\n");
        }
        break;
    case 4:
        printf("첫 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num1);
        printf("두 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num2);
        printf("세 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num3);
        printf("로또 번호 생성(0 입력하면 랜덤으로 숫자 나옵니다.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num4 = rand() % 45 + 1;
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num3 >= 1 && num3 <= 45) && (num4 >= 1 && num4 <= 45) && (num1 != num2) && (num1 != num3) && (num1 != num4) && (num2 != num3) && (num2 != num4) && (num3 != num4)) {
            printf("로또 번호: %d, %d, %d, %d\n", num1, num2, num3, num4);
        }
        else {
            printf("잘못된 입력입니다. 1부터 45까지의 숫자 중 중복되지 않는 숫자를 입력해주세요.\n");
        }
        break;
    case 5:
        printf("첫 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num1);
        printf("두 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num2);
        printf("세 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num3);
        printf("네 번째 로또 번호를 입력하세요: ");
        scanf_s("%d", &num4);
        printf("로또 번호 생성(0 입력하면 랜덤으로 숫자 나옵니다.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num5 = rand() % 45 + 1;
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num3 >= 1 && num3 <= 45) && (num4 >= 1 && num4 <= 45) && (num5 >= 1 && num5 <= 45) && (num1 != num2) && (num1 != num3) && (num1 != num4) && (num1 != num5) && (num2 != num3) && (num2 != num4) && (num2 != num5) && (num3 != num4) && (num3 != num5) && (num4 != num5))
            printf("최종 로또 번호는 : %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
        break;


    }

    return 0;
}