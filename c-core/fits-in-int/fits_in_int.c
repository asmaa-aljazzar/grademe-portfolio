#include <limits.h>
int	fits_in_int(long value){ return (value <= INT_MAX && value >= INT_MIN);}
