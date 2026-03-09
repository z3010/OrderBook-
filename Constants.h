#pragma once
#include "header.h"

#include <limits>

#include "usings.h"

struct Constants
{
    static const Price InvalidPrice = std::numeric_limits<Price>::quiet_NaN();
};