#include <stdio.h>
#include <stdlib.h>
float pingjun1(float scores[4][3], int stu);
float pingjun2(float scores[4][3], int ke);
void max(float scores[4][3]);
float fangcha(float scores[4][3]);

int main() {
    float scores[4][3];
    printf("请输入4个学生3门课的成绩：\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("请输入第%d个学生的第%d门课成绩：", i + 1, j + 1);
            scanf("%f", &scores[i][j]);
        }
    }
    printf("\n每个学生的平均分：\n");
    for (int i = 0; i < 4; ++i) {
        printf("学生%d的平均分：%.2f\n", i + 1, pingjun1(scores, i));
    }
    printf("\n每门课的平均分：\n");
    for (int j = 0; j < 3; ++j) {
        printf("课程%d的平均分：%.2f\n", j + 1, pingjun2(scores, j));
    }
    max(scores);
    printf("\n平均分方差：%.2f\n", fangcha(scores));
    system("pause");
	getchar();
	return 0;
}

// 计算每个学生的平均分
float pingjun1(float scores[4][3], int stu) {
    float sum = 0;
    for (int j = 0; j < 3; ++j) {
        sum += scores[stu][j];
    }
    return sum / 3;
}

// 计算每门课的平均分
float pingjun2(float scores[4][3], int ke) {
    float sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += scores[i][ke];
    }
    return sum / 4;
}

// 找出最高分数对应的学生和课程
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
    printf("\n最高分数为%.2f，对应学生%d和课程%d\n", maxscore, maxstu, maxke);
}

// 计算平均分方差
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
