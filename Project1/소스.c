#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int turn, input, num1, num2, num3, num4, num5;
    printf("���� �Է�: ");
    scanf_s("%d", &turn);
    switch (turn) {
    case 1:
        printf("�ζ� ��ȣ ����(0 �Է��ϸ� �������� ���� ���ɴϴ�.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            printf("ù ��° ���� ���: %d", rand() % 45 + 1);
        }
        break;
    case 2:
        printf("ù ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num1);
        printf("�ζ� ��ȣ ����(0 �Է��ϸ� �������� ���� ���ɴϴ�.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num2 = rand() % 45 + 1; // num2�� ���� ���ڸ� �Ҵ��Ͽ� �ʱ�ȭ
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num1 != num2)) {
            printf("�ζ� ��ȣ: %d, %d\n", num1, num2);
        }
        else {
            printf("�߸��� �Է��Դϴ�. 1���� 45������ ���� �� �ߺ����� �ʴ� ���ڸ� �Է����ּ���.\n");
        }
        break;

    case 3:
        printf("ù ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num1);
        printf("�� ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num2);
        printf("�ζ� ��ȣ ����(0 �Է��ϸ� �������� ���� ���ɴϴ�.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num3 = rand() % 45 + 1;
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num3 >= 1 && num3 <= 45) && (num1 != num2 && num1 != num3 && num2 != num3)) {
            printf("�ζ� ��ȣ: %d, %d, %d\n", num1, num2, num3);
        }
        else {
            printf("�߸��� �Է��Դϴ�. 1���� 45������ ���� �� �ߺ����� �ʴ� ���ڸ� �Է����ּ���.\n");
        }
        break;
    case 4:
        printf("ù ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num1);
        printf("�� ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num2);
        printf("�� ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num3);
        printf("�ζ� ��ȣ ����(0 �Է��ϸ� �������� ���� ���ɴϴ�.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num4 = rand() % 45 + 1;
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num3 >= 1 && num3 <= 45) && (num4 >= 1 && num4 <= 45) && (num1 != num2) && (num1 != num3) && (num1 != num4) && (num2 != num3) && (num2 != num4) && (num3 != num4)) {
            printf("�ζ� ��ȣ: %d, %d, %d, %d\n", num1, num2, num3, num4);
        }
        else {
            printf("�߸��� �Է��Դϴ�. 1���� 45������ ���� �� �ߺ����� �ʴ� ���ڸ� �Է����ּ���.\n");
        }
        break;
    case 5:
        printf("ù ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num1);
        printf("�� ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num2);
        printf("�� ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num3);
        printf("�� ��° �ζ� ��ȣ�� �Է��ϼ���: ");
        scanf_s("%d", &num4);
        printf("�ζ� ��ȣ ����(0 �Է��ϸ� �������� ���� ���ɴϴ�.): ");
        scanf_s("%d", &input);
        if (input == 0) {
            num5 = rand() % 45 + 1;
        }
        if ((num1 >= 1 && num1 <= 45) && (num2 >= 1 && num2 <= 45) && (num3 >= 1 && num3 <= 45) && (num4 >= 1 && num4 <= 45) && (num5 >= 1 && num5 <= 45) && (num1 != num2) && (num1 != num3) && (num1 != num4) && (num1 != num5) && (num2 != num3) && (num2 != num4) && (num2 != num5) && (num3 != num4) && (num3 != num5) && (num4 != num5))
            printf("���� �ζ� ��ȣ�� : %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
        break;


    }

    return 0;
}