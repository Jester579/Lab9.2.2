#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

#define SQR(x) ((x) * (x)) 
void main() {
    setlocale(LC_ALL, "ukr");

    int a, b, c;
    float H;
    char ch;
    bool w;

    do {
        puts("����i�� a, b, c:");
        scanf("%d %d %d", &a, &b, &c);

        if (SQR(c) == SQR(a) + SQR(b)) {
            w = true;

            H = sqrt(1.0 / (1.0 / SQR(a) + 1.0 / SQR(b)));

            printf("��������� � �����������.\n");
            printf("������ H, ��������� �� �i��������, ���i����: %.2f\n", H);

            float h = 1.0 / SQR(H);
            float sum = 1.0 / SQR(a) + 1.0 / SQR(b);
            if (h == sum) { 
                printf("��i��i�������� � ����������.\n");
            }
            else {
                printf("��i��i�������� �� � ����������.\n");
            }
        }
        else {
            printf("�� � ����������� �����������\n");
        }
        puts("���������? y/n ");
        ch = getch();
    } while (ch == 'y');
}
