#include "binary.h"
int convert(const char *input)
{
    int converted = 0;

    // Copy pointer to first char
    const char* last = input;

    // Go to last char (Null terminator '\0' is "falsy")
    while (*last++);

    // Difference between last and input (also subtract the '\0' that's being counted)
    // Length of char pointer string (no libraries, pointer subtraction)
    int length = last - input - 1;


    for (int i = 0 ; i < length ; i++) {
        // Difference of ASCII codes (values for '0'-'9' are contiguous)
        const int digit = input[i] - '0';

        // If char is not valid, digit should not be 0 or 1
        if (digit != 0 && digit != 1) return -1;

        // The exponent x in 2^x
        const int shift = length - 1 - i;   

        // Left shift = Multiply by 2 ; (a << b) = a * 2^b
        converted += digit << shift;
    }

    return converted;
}
