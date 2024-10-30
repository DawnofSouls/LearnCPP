#include <iostream>
//1.5 — Introduction to iostream: cout, cin, and endl

int main(){

    std::cout << "Enter three numbers: ";

    int x{};
    int y{};
    int z{};

    std::cin >> x >> y >> z;
    std::cout <<"You entered " << x << ", " << y << ", and " << z << ".\n";
    return 0;


}