#include <stdio.h>

int main()
{
    int i, limit, total = 0, x, counter = 0, time_quantum;
    int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10];
    float average_wait_time, average_turnaround_time;
    printf("\nEnter Total Number of Processes: ");
    scanf("%d", &limit);
    x = limit;
    for (i = 0; i < limit; i++)
    {
        printf("\nEnter Details of Process[%d]\n", i + 1);

        printf("Arrival Time: ");

        scanf("%d", &arrival_time[i]);

        printf("Burst Time: ");

        scanf("%d", &burst_time[i]);

        temp[i] = burst_time[i];
    }

    return 0;
}