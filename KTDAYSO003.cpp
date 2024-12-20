#include <bits/stdc++.h>
using namespace std;

// Hàm tính tổ hợp C(n, k)
long long comb(long long n, long long k) {
    if (k > n) return 0;
    long long res = 1;
    for (long long i = 1; i <= k; i++) {
        res = res * (n - (k - i)) / i;
    }
    return res;
}
int main() {
    int t;
    cin >> t;  // Đọc số lượng test case

    while (t--) {
        int N, K;
        cin >> N >> K;  // Đọc N, K

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];  // Đọc mảng A
        }

        // Sắp xếp mảng A
        sort(A.begin(), A.end());

        // Tính tổng của K phần tử nhỏ nhất
        int min_sum = 0;
        for (int i = 0; i < K; i++) {
            min_sum += A[i];
        }

        // Tìm số lượng các phần tử bằng phần tử cuối cùng trong K phần tử nhỏ nhất
        int x = A[K - 1];  // Phần tử thứ K nhỏ nhất
        int count_in_A = count(A.begin(), A.end(), x);  // Đếm số lần xuất hiện x trong mảng A
        int count_in_min_k = count(A.begin(), A.begin() + K, x);  // Đếm số lần xuất hiện x trong K phần tử nhỏ nhất

        // Số cách chọn count_in_min_k phần tử x từ count_in_A phần tử x
        long long result = comb(count_in_A, count_in_min_k);

        cout << result << endl;  // In kết quả
    }

    return 0;
}
