#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    ordered_set s;
    for (int i = 1; i <= n; ++i) {
        s.insert(i); // Insert 1 to n
    }

    int ind = k % n; // Adjust the starting index
    while (n--) {
        auto itr = s.find_by_order(ind);
        cout << *itr << " ";
        s.erase(itr);

        if (n) {
            ind = (ind + k) % n; // Update index for next iteration
        }
    }

    return 0;
}
