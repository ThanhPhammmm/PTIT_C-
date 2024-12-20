#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính X^k và kiểm tra nếu vượt quá R
long long power(long long x, long long k) {
    long long result = 1;
    for (int i = 0; i < k; ++i) {
        result *= x;
        if (result > 1e12) return -1; // Nếu vượt quá 10^12, dừng lại
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;
        
        int max_k = 1; // Kết quả tối thiểu là k = 1

        // Kiểm tra k từ 2 đến 40 (hoặc giá trị thích hợp)
        for (int k = 2; k <= 60; ++k) {
            long long x_start = pow(L, 1.0 / k);
            long long x_end = pow(R, 1.0 / k);
            
            // Kiểm tra với các giá trị x_start và x_end
            bool found = false;
            for (long long x = x_start; x <= x_end; ++x) {
                long long result = power(x, k);
                if (result >= L && result <= R) {
                    found = true;
                    break;
                }
            }

            if (found) {
                max_k = k;  // Cập nhật k nếu tìm thấy
            }
        }
        
        cout << max_k << endl;  // In kết quả
    }

    return 0;
}
