#include <stdio.h>
int main() 
{
    int n, i;
    float grades[100], sum = 0.0, average;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%f", &grades[i]);
        sum += grades[i];  
    }
    average = sum / n;
    printf("The average grade is: %.2f\n", average);

    return 0;
}
