#include <iostream>
//inputs the cost of lunch box,bus fair and stationery and gives total cost and avg cost per item

int main() {
    std::cout << "welcome to basic daily expense" << "\n";
    int lunch_cost{};      //cost for lunch;
    int bus_cost{};        //cost for bus;
    int stationery_cost{}; //cost for stationery;
    std::cout << "Enter the cost of lunch box: " << "\n";
    // inputting the lunch cost
    std::cin >> lunch_cost;
    std::cout << "Enter the cost of bus" << "\n";
    // inputting the bus cost
    std::cin >> bus_cost;
    std::cout << "Enter the cost of stationery" << "\n";
    // inputting the stationery cost
    std::cin >> stationery_cost;

    int total_cost = lunch_cost + bus_cost + stationery_cost; //calculating total cost
    double avg_cost = total_cost/3;                           //calculating average cost
    std::cout << "The total cost for lunch is " << total_cost << "\n" ;
    std::cout << "The average cost per item is " << avg_cost << "\n";
    return 0;
}