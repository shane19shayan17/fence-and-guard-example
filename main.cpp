#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

namespace Utility
{
    vector<int> split_string(string input)
    {
        vector<int> numbers;
        stringstream ss(input);
        int num;
        while (ss >> num)
        {
            numbers.push_back(num);
        }
        return numbers;
    }

    int get_row_count(vector<int> numbers, int height)
    {
        int row_count = 0;
        for (int num : numbers)
        {
            if (num > height)
            {
                row_count += 1;
            }
            ++row_count;
        }
        return row_count;
    }
}

int main()
{
    string line_1, line_2;
    getline(cin, line_1);
    int height = Utility::split_string(line_1)[1];

    getline(cin, line_2);
    vector<int> heights = Utility::split_string(line_2);

    int row_count = Utility::get_row_count(heights, height);
    cout << row_count << endl;

    return 0;
}