#pragma once
#include "header.h"
#include "usings.h"



struct LevelInfo   //used in publicAPI to get state of the orderbook//
{
    Price price_;
    Quantity quantity_;
};
using LevelInfos = std::vector<LevelInfo>;  //alliasing//

