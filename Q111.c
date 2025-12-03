Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    int neg[n];      // queue to store indices of negative numbers
    int front = 0, rear = 0;

    int i = 0, j = 0;

    while (j < n) {

        // If current element is negative, add index to queue
        if (arr[j] < 0) {
            neg[rear++] = j;
        }

        // Check if window size reached
        if (j - i + 1 == k) {

            // Print first negative in the window
            if (front == rear)
                printf("0 ");
            else
                printf("%d ", arr[neg[front]]);

            // Remove elements going out of window
            if (front != rear && neg[front] == i) {
                front++;
            }

            i++; // slide window
        }

        j++;
    }

    return 0;
}
