#pragma once
#include "header.h"



using Price = std::int32_t;  //prices can be negative//
using Quantity = std::uint32_t;  //quantities and orderID non-negative only//
using OrderId = std::uint64_t; 
using OrderIds = std::vector<OrderId>;