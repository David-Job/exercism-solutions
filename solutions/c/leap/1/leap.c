#include "leap.h"

bool leap_year(int year)
{
    return !(year % 4) && (!(year % 400) || year % 100);
}
