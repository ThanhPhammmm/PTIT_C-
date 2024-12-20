//Done
// Tìm số thứ n không thuộc dãy fibonacci
#include <bits/stdc++.h>
using namespace std;

int nonFibonacci(int n)
{
    int prevPrev = 1, prev = 2, curr = 3;
    while (n > 0)
    {
        prevPrev = prev;
        prev = curr;
        curr = prevPrev + prev;
        n = n - (curr - prev - 1);
    }
    n = n + (curr - prev - 1);
    return prev + n;
}
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int n;
        cin >> n;
        cout << nonFibonacci(n) << endl;
    }
    return 0;
}
// Note: 
// + Nếu n giảm xuống 0 hoặc âm, điều đó nghĩa là số thứ n không thuộc dãy Fibonacci nằm trong khoảng giữa prev và curr. Khi đó, ta thoát khỏi vòng lặp.
// + n = n + (curr - prev - 1) điều chỉnh lại n để xác định số lượng số cần đếm từ prev đến số thứ n.
// + return prev + n cho ta số tự nhiên thứ n không thuộc dãy Fibonacci, nằm giữa prev và curr.





//9/10
// #include <bits/stdc++.h>
// using namespace std;

// // Generate Fibonacci sequence up to a large enough limit
// vector<long long> generateFibonacci(long long limit) {
//     vector<long long> fib = {0, 1};
//     while (true) {
//         long long next = fib[fib.size() - 1] + fib[fib.size() - 2];
//         if (next > limit) break;
//         fib.push_back(next);
//     }
//     return fib;
// }

// long long findNthNonFibonacci(long long N, const vector<long long>& fib) {
//     long long count = 0, num = 1, fibIdx = 2; // Start from 1, skip 0 and 1
//     while (true) {
//         // Skip Fibonacci numbers
//         if (fibIdx < fib.size() && num == fib[fibIdx]) {
//             fibIdx++;
//         } else {
//             // Count non-Fibonacci numbers
//             count++;
//             if (count == N) return num;
//         }
//         num++;
//     }
// }

// int main() {
//     // Generate Fibonacci numbers up to a reasonable limit
//     vector<long long> fib = generateFibonacci(1e18);
    
//     int T;
//     cin >> T;
//     while (T--) {
//         long long N;
//         cin >> N;
//         cout << findNthNonFibonacci(N, fib) << endl;
//     }
//     return 0;
// }
