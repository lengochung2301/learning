#include <stdio.h>

int main() {
    int number;
    while (1) {
        scanf("%d", &number);
        // check if number is in between 1 and 100
        // if not, break the loop
        if (number > 0 && number <= 100 ) {
          printf("%d",number);
          
        }
        else {
        // print the value of number
        break;
          
        }
    }
    return 0;
}
