#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Here we are taking vector of integers for illustration purpose
    vector<int> vt{-2, -3, 4, -1, 2, 1};
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < vt.size(); i++)
    {
        // we are taking sum of all elements of vector
        sum += vt[i];
        // since we are concern to max_sum so we are storing max sum till current index
        maxi = max(sum, maxi);
        // since we have to take max_sum so negative sum will not be entertained
        if (sum < 0)
            sum = 0;
    }
    cout << "printing max subarray sum " << maxi << endl;

    return 0;
}