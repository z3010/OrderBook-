#pragma once
#include "header.h"

#include "Tradeinfo.h"

class Trade
{
public:
    Trade(const Tradeinfo& bidTrade, const Tradeinfo& askTrade)
        : bidTrade_{ bidTrade }
        , askTrade_{ askTrade }
    { }

    const Tradeinfo& GetBidTrade() const { return bidTrade_; }
    const Tradeinfo& GetAskTrade() const { return askTrade_; }

private:
    Tradeinfo bidTrade_;
    Tradeinfo askTrade_;
};

using Trades = std::vector<Trade>;