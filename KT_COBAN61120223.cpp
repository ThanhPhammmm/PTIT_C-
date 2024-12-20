//9/10
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

// Hàm nhân hai ma trận 2x2 với modulo
vector<vector<long long>> multiplyMatrix(const vector<vector<long long>> &a, const vector<vector<long long>> &b) {
    vector<vector<long long>> res(2, vector<long long>(2, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % MOD;
            }
        }
    }
    return res;
}

// Hàm lũy thừa ma trận 2x2 với modulo
vector<vector<long long>> matrixPower(vector<vector<long long>> base, long long exp) {
    vector<vector<long long>> result = {{1, 0}, {0, 1}}; // Ma trận đơn vị
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = multiplyMatrix(result, base);
        }
        base = multiplyMatrix(base, base);
        exp /= 2;
    }
    return result;
}

// Tìm số Fibonacci thứ n
long long findFibonacci(long long n) {
    if (n == 0) return 0; // F(0) = 0
    vector<vector<long long>> fibMatrix = {{1, 1}, {1, 0}};
    vector<vector<long long>> result = matrixPower(fibMatrix, n - 1);
    return result[0][0]; // F(n)
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;

        // Edge case kiểm tra
        if (N < 0) {
            cout << 0 << endl;
            continue;
        }

        cout << findFibonacci(N) << endl;
    }
    return 0;
}

//8/10
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

// Hàm tìm số Fibonacci thứ n bằng phương pháp lặp (iterative)
long long findFibonacciIterative(long long n) {
    if (n == 0) return 0; // F(0) = 0
    if (n == 1) return 1; // F(1) = 1

    long long prev2 = 0; // F(n-2)
    long long prev1 = 1; // F(n-1)
    long long current = 0;

    for (long long i = 2; i <= n; i++) {
        current = (prev1 + prev2) % MOD;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;

        // Tìm số Fibonacci thứ N
        cout << findFibonacciIterative(N) << endl;
    }
    return 0;
}
