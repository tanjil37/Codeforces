#include <iostream>

int main()
{
    // Read input
    long long A, B, C, D;
    std::cin >> A >> B >> C >> D;

    // Calculate the product of the four numbers
    long long product = (A % 100 * B % 100 * C % 100 * D % 100) % 100;

    // Print the last 2 digits of the product
    if (product < 10)
    {
        std::cout << "0"; // Add leading zero if necessary
    }
    std::cout << product << std::endl;

    return 0;
}
