// utility.cpp
#include "utility.h"
#include <cmath>
// IN THIS FILE, define any of your OWN functions you may need to
// solve the problems.    


// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool approxEqual(double a, double b, double tolerance)
{
    return std::fabs(a - b) < tolerance;
}