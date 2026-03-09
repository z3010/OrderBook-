#include "Orderbook.h"  // only need this one include — pulls everything else in

int main()
{
    // 1. Create the orderbook
    Orderbook orderbook;
    OrderId orderId = 1;

    // 2. Add orders
    auto trades = orderbook.AddOrder(std::make_shared<Order>(
        OrderType::GoodTillCancel, orderId++, Side::Buy, 100, 10));

    // 3. Check what trades happened
    for (const auto& trade : trades)
    {
        const auto& bid = trade.GetBidTrade();
        const auto& ask = trade.GetAskTrade();
        std::cout << "Matched: " << bid.quantity_ << " @ " << bid.price_ << "\n";
    }

    // 4. Check orderbook state
    auto infos = orderbook.GetOrderInfos();
    for (const auto& bid : infos.GetBids())
        std::cout << "Bid: " << bid.price_ << " x " << bid.quantity_ << "\n";
    for (const auto& ask : infos.GetAsks())
        std::cout << "Ask: " << ask.price_ << " x " << ask.quantity_ << "\n";

    // 5. Modify / Cancel
    orderbook.ModifyOrder(OrderModify{ 1, Side::Buy, 101, 15 });
    orderbook.CancelOrder(1);

    // 6. Check size
    std::cout << "Orders resting: " << orderbook.Size() << "\n";

    return 0;
}