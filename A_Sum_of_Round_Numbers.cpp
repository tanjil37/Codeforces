#include <iostream>
#include <vector>

using namespace std;

// Function to find the sum of round numbers for a given number
vector<int> sum_of_round_numbers(int n)
{
    vector<int> round_nums;
    int divisor = 1;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0)
        {
            round_nums.push_back(digit * divisor);
        }
        n /= 10;
        divisor *= 10;
    }

    return round_nums;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> result = sum_of_round_numbers(n);

        cout << result.size() << endl;
        for (int num : result)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
