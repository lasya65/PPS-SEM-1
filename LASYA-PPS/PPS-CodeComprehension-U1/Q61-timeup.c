// Write a C program that takes a number n (in seconds) as input and counts down to zero, printing each second as it goes as n=5 then print 5,4,3,2,1,0 and print time up!
#include <stdio.h>
#include <unistd.h>

int main() {
    int n;
    printf("Enter the number of seconds: ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1);
    }

    printf("Time up!\n");
    return 0;
}