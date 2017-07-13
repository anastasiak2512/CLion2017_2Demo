//count var is now correctly considered as used (CLion handles va_start usage)

#include <cstdarg>

static int check(int count, ...)
{
    va_list args;
    va_start(args, count);
    int y = va_arg(args, int);
    va_end(args);

    return y;
}

