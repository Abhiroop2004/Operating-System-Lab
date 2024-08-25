#include <stdio.h>
void swap(int* a, int* b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
float average(int ar[], int n)
{
  int i, sum = 0;
  for (i=0; i<n; i++) { sum += ar[i]; }
  return (float)sum/n;
}
void fcfs( int process[][3], int n) //[[PID], [AT], [BT]]
{
  int i, j, k, min;
  int pid[n], ct[n], tat[n], wt[n], time;
  time = 0;
  for (i = 0; i < n; i++) { pid[i] = process[i][0]; }
  for (i = 0; i < n; i++)
  {
    min = i;
    for (j = i+1; j < n; j++)
    {
      if (process[j][1] < process[min][1] || (process[j][1] == process[min][1] && process[j][0] < process[min][1]))
        min = j;
    }
    time = (process[min][1] > time) ? process[min][1]  : time;
    time += process[min][2];
    for (k=0; k<n; k++)
    {
      if (pid[k] == process[min][0])
      {
        ct[k] = time;
        tat[k] = ct[k] - process[min][1];
        wt[k] = tat[k] - process[min][2];
      }
    }   
    swap(&process[i][0], &process[min][0]);
    swap(&process[i][1], &process[min][1]);
    swap(&process[i][2], &process[min][2]);
  }
  for (i=0; i<n; i++)
  {
    printf("Process ID: P%d, Completion Time: %d Turnaround Time: %d Waiting Time: %d\n", pid[i], ct[i], tat[i], wt[i]);
  }
  printf("Average Turnaround time: %.2f\n", average(tat, n));
  printf("Average Waiting time: %.2f", average(wt, n));
}
int main()
{
  int n, i;
  printf("Enter number of processes: ");
  scanf("%d",&n);
  int process[n][3];
  printf("Enter Process ID number, Arrival time, Burst Time for %d processes:\n", n); 
  for (i=0; i<n; i++) { scanf("%d %d %d", &process[i][0], &process[i][1], &process[i][2]); }
  fcfs(process, n);
}
