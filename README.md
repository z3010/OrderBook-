This project was built by following the Coding Jesus tutorial on order book implementation in C++ to gain an understanding of oderbook logic. Main.cpp was created independently.
Concepts learnt and implemented in this project are:-
# ORDERBOOK
It is a live list of buy and sell orders at different price levels which is used by exchanges to match sellers and buyers. It is an important indicator of market depth. The buy orders are called bids and sell orders are asks.
Some other features are:
1) buy and sell orders are ranked by price. buy orders are ranked from highest to lowest price where highest bid is the most amount a buyer is willing to pay.Sell orders are arranged from lowest to highest where the lowest ask is the least seller is willing to accept.
2) The bid-ask spread is the differnce between the highest bid and the lowest ask.
# ORDER TYPES SUPPORTED
1) GoodTillCancel: It rests in the book until it is manually canceled
2) Market: It executes immediately at the best available market price
3) FillAndKill: Fills what it can and cancels the rest orders
4) FillorKill: it should be filled completely or is rejected completely
5) GoodForDay: It rests in the book and is automatically cancelled at 4pm.
# Programming Concepts Used
1) OOP : Encapsulation - each class (Order, Orderbook, Trade) exposes only what is needed via public getters, keeping internal state private
Abstraction- main.cpp interacts through a clean public API (AddOrder, CancelOrder, ModifyOrder) without knowing internal matching logic.
2) Data Structures: map, unordered_map,list
   
