#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    double diff;

    // Get start time
    start = time(NULL);

    // Do some work...

    // Get end time
    end = time(NULL);

    // Calculate difference
    diff = difftime(end, start);

    printf("Time difference: %.2f seconds\n", diff);

    return 0;
}
