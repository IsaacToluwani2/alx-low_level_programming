#include <stdio.h>

void good_morning();
void goodAfternoon();
void goodEvening();

void good_morning() {
    printf("Good Morning");
}

void goodAfternoon() {
    printf("Good Afternoon");
}

void goodEvening() {
    printf("Good Evening");
}

int main() {
    good_morning();
    goodAfternoon();
    goodEvening();
    return 0;
}
