#include <iostream>
#include <vector>
using namespace std;

// Function to compute power of 2^exp
long long power_of_two(int exp) {
    return 1LL << exp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        
        // Calculate the total sum of all subsets
        long long result = sum * power_of_two(n - 1);
        
        // Output the result in the required format
        cout << result << " [";
        for (int i = 0; i < n; i++) {
            cout << arr[i];
            if (i < n - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
