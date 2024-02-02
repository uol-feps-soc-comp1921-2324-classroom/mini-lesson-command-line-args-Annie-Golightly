#include <stdio.h>
#include <stdlib.h>
/*(
    argv[1] is the first number
    argv[2] is the second number
)*/

int main(int argc, char *argv[]) {
    if (argc != 3){ //checking the correct number of arguments are entered
        printf("Useage: ./task <num1><num2>\n");
        return 0;
    }

    int num1, num2;
    num1 = atoi(argv[1]); //storing the user inputs in relevant integer variables
    num2 = atoi(argv[2]);
    
    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
