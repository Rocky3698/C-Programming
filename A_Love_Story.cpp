#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class DigitFrequency
{
private:
    vector<int> frequency;

public:
    DigitFrequency()
    {

        frequency.assign(10, 0);
    }

    void countDigits(string num)
    {
        for (char c : num)
        {
            if (isdigit(c))
            {
                int digit = c - '0';
                frequency[digit]++;
            }
        }
    }

    void printFrequency()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "Frequency of digit " << i << ": " << frequency[i] << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string num;
    cout << "Enter a large number: " << endl;
    cin >> num;

    DigitFrequency df;
    df.countDigits(num);
    df.printFrequency();

    return 0;
}
