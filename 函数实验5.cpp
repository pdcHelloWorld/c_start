#include <stdio.h>
#include <stdlib.h>
float pingjun1(float scores[4][3], int stu);
float pingjun2(float scores[4][3], int ke);
void max(float scores[4][3]);
float fangcha(float scores[4][3]);

int main() {
    float scores[4][3];
    printf("������4��ѧ��3�ſεĳɼ���\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("�������%d��ѧ���ĵ�%d�ſγɼ���", i + 1, j + 1);
            scanf("%f", &scores[i][j]);
        }
    }
    printf("\nÿ��ѧ����ƽ���֣�\n");
    for (int i = 0; i < 4; ++i) {
        printf("ѧ��%d��ƽ���֣�%.2f\n", i + 1, pingjun1(scores, i));
    }
    printf("\nÿ�ſε�ƽ���֣�\n");
    for (int j = 0; j < 3; ++j) {
        printf("�γ�%d��ƽ���֣�%.2f\n", j + 1, pingjun2(scores, j));
    }
    max(scores);
    printf("\nƽ���ַ��%.2f\n", fangcha(scores));
    system("pause");
	getchar();
	return 0;
}

// ����ÿ��ѧ����ƽ����
float pingjun1(float scores[4][3], int stu) {
    float sum = 0;
    for (int j = 0; j < 3; ++j) {
        sum += scores[stu][j];
    }
    return sum / 3;
}

// ����ÿ�ſε�ƽ����
float pingjun2(float scores[4][3], int ke) {
    float sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += scores[i][ke];
    }
    return sum / 4;
}

// �ҳ���߷�����Ӧ��ѧ���Ϳγ�
void max(float scores[4][3]) {
    float maxscore = scores[0][0];
    int maxstu=1;int maxke=1;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (scores[i][j] > maxscore) {
                maxscore = scores[i][j];
                maxstu = i + 1;
                maxke = j + 1;
            }
        }
    }
    printf("\n��߷���Ϊ%.2f����Ӧѧ��%d�Ϳγ�%d\n", maxscore, maxstu, maxke);
}

// ����ƽ���ַ���
float fangcha(float scores[4][3]) {
    float mean = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            mean += scores[i][j];
        }
    }
    mean /= (4 * 3);

    float variance = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            variance += (scores[i][j] - mean) * (scores[i][j] - mean);
        }
    }
    return variance / (4 * 3);
}
