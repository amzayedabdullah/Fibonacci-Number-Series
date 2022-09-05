////  Fibonacci-Number-Series ////

#include <stdio.h>

int main()
{
    // declare the variable
    int i, number, start_value = 0, second_value = 1, third_value;

    // scan the number
    scanf("%d", &number);
    
    // loop to run the series
    for (i = 0; i <= number; i++)
    {
        printf("%d\t", start_value); // print the series 
        third_value = start_value + second_value;
        start_value = second_value;
        second_value = third_value;
    }
    
    return 0;
}