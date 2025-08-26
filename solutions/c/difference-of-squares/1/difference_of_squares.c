#include "difference_of_squares.h"

/*
 * https://en.wikipedia.org/wiki/Square_pyramidal_number#Formula
 *
 *  1² + 2² + 3² + .. + n² = (2n³ + 3n² + n) / 6
 *
 * */
unsigned int sum_of_squares(unsigned int number)
{
    return (2*number*number*number + 3*number*number + number) / 6;
}

/*
 * https://en.wikipedia.org/wiki/Triangular_number#Formula
 *
 *  (1 + 2 + 3 + .. + n)² = (n * (n+1) / 2)²
 *  = n² * (n+1)² / 4
 *  = n² * (n² + 2n + 1) / 4
 *
 * */
unsigned int square_of_sum(unsigned int number)
{
    return number*number * (number*number + 2*number + 1) / 4;
}

unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number) - sum_of_squares(number);
}
