#include <iostream>
using namespace std;

int main(){
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;

    cout << roundedTeaPrice << endl; // 49

    int teaQuality = 2;
    // int price = teaPrice * teaQuality;
    // cout << price << endl; // 99 as int

    double price = teaPrice * teaQuality;
    cout << price << endl; // 99.98
    return 0;
}