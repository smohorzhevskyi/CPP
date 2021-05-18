#include <iostream>

using namespace std;

void challenge6() {

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl << endl;

    int small_rooms_number {0};
    cout << "How many small rooms would you like cleaned?" << endl;
    cin >> small_rooms_number;

    int large_rooms_number {0};
    cout << "How many large rooms would you like cleaned?" << endl;
    cin >> large_rooms_number;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms_number << endl;
    cout << "Number of large rooms: " << large_rooms_number << endl;

    const int small_room_price {25};
    cout << "Price per small room: $" << small_room_price << endl;

    const int large_room_price {35};
    cout << "Price per large room: $" << large_room_price << endl;

    int cost {small_room_price * small_rooms_number + large_room_price * large_rooms_number};
    cout << "Cost: $" << cost << endl;

    double tax {cost * 0.06};
    cout << "Tax: $" << tax << endl;
    cout << "=====================================" << endl;
    cout << "Total estimate: $" << tax + cost << endl;
    cout << "Total estimate is valid for 30 days" << endl;

}

