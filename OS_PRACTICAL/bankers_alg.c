#include <stdio.h>
#include <stdbool.h>
int main() {
 int n, m, i, j, k;
 // Input number of processes and resources
 printf("Enter the number of processes: ");
 scanf("%d", &n);
 printf("Enter the number of resources: ");
 scanf("%d", &m);
 int alloc[n][m], max[n][m], need[n][m], avail[m];
 int work[m];
 bool finish[n];
 int safeSeq[n];
 int fcount = 0;
 // Input available resources
 printf("Enter the total available resources:\n");
 for (i = 0; i < m; i++) {
 scanf("%d", &avail[i]);
 work[i] = avail[i]; // Initialize work array
 }
 // Input maximum resources required by each process
 printf("Enter the maximum resource matrix:\n");
 for (i = 0; i < n; i++) {
 for (j = 0; j < m; j++) {
 scanf("%d", &max[i][j]);
 }
 }
 // Input allocated resources for each process
 printf("Enter the allocation matrix:\n");
 for (i = 0; i < n; i++) {
 for (j = 0; j < m; j++) {
 scanf("%d", &alloc[i][j]);
 }
 }
 // Calculate the need matrix
 for (i = 0; i < n; i++) {
 for (j = 0; j < m; j++) {
 need[i][j] = max[i][j] - alloc[i][j];
 }
 }
 // Initialize the finish array
 for (i = 0; i < n; i++) {
 finish[i] = false;
 }
 // Banker's Algorithm to find the safe sequence
 for (k = 0; k < n; k++) {
 for (i = 0; i < n; i++) {
 if (!finish[i]) { // If process is not finished
 bool canFinish = true;
 // Check if need[i][j] <= work[j] for all resources
 for (j = 0; j < m; j++) {
 if (need[i][j] > work[j]) {
 canFinish = false;
 break;
 }
 }
 // If the process can finish
 if (canFinish) {
 for (j = 0; j < m; j++) {
 work[j] += alloc[i][j]; // Release resources
 }
 finish[i] = true;
 safeSeq[fcount++] = i;
 }
 }
 }
 }
 // Check if all processes are finished
 bool isSafe = true;
 for (i = 0; i < n; i++) {
 if (!finish[i]) {
 isSafe = false;
 break;
 }
 }