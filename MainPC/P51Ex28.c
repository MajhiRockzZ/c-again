#include <stdio.h>

#define ACTIVITIES_WEIGHTAGE 30
#define SPORTS_WEIGHTAGE 20
#define EXAMS_WEIGHTAGE 50
#define EXAMS_TOTAL 200
#define ACTIVITIES_TOTAL 60
#define SPORTS_TOTAL 50

int main()
{
    int exam_score1, activities_score1, sports_score;
    int exam_score2, activities_score2, activities_score3;
    float exam_total, activities_total;
    float total_percent, exam_percent, sports_percent, activities_percent;

    printf("\n+------------------------------------------+");
    printf("\n|        STUDENT PERFORMANCE TRACKER      |");
    printf("\n+------------------------------------------+\n");

    printf("\n  Enter scores for two exams (out of 100): ");
    scanf("%d %d", &exam_score1, &exam_score2);
    printf("  Enter score for sports events (out of 50): ");
    scanf("%d", &sports_score);
    printf("  Enter scores for three activities (out of 20): ");
    scanf("%d %d %d", &activities_score1, &activities_score2, &activities_score3);

    exam_total = exam_score1 + exam_score2;
    activities_total = activities_score1 + activities_score2 + activities_score3;

    exam_percent = ((float)exam_total / EXAMS_TOTAL) * EXAMS_WEIGHTAGE;
    sports_percent = ((float)sports_score / SPORTS_TOTAL) * SPORTS_WEIGHTAGE;
    activities_percent = ((float)activities_total / ACTIVITIES_TOTAL) * ACTIVITIES_WEIGHTAGE;

    total_percent = exam_percent + sports_percent + activities_percent;

    printf("\n+------------------------------------------+");
    printf("\n|                  RESULT                 |");
    printf("\n+------------------------------------------+");
    printf("\n| %-28s : %6.2f%%  |", "Examination", exam_percent);
    printf("\n| %-28s : %6.2f%%  |", "Activities", activities_percent);
    printf("\n| %-28s : %6.2f%%  |", "Sports", sports_percent);
    printf("\n+------------------------------------------+");
    printf("\n| %-28s : %6.2f%%  |", "TOTAL PERCENTAGE", total_percent);
    printf("\n+------------------------------------------+\n");

    return 0;
}