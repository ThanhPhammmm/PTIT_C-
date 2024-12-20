//Done
#include <bits/stdc++.h>
using namespace std;

// Function to compare two large numbers represented as strings
bool isSmaller(string str1, string str2) {
    if (str1.size() < str2.size()) return true;
    if (str1.size() > str2.size()) return false;
    return str1 < str2; // Compare lexicographically if lengths are equal
}

// Function to subtract two large numbers (a - b), where a >= b
string subtractLargeNumbers(string a, string b) {
    bool negative = false;

    // Ensure a >= b by comparing the strings
    if (a.size() < b.size() || (a.size() == b.size() && a < b)) {
        swap(a, b);   // Swap to make sure a >= b
        negative = true; // Result will be negative
    }

    string result = "";
    int n1 = a.size(), n2 = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int carry = 0;
    for (int i = 0; i < n2; i++) {
        int sub = ((a[i] - '0') - (b[i] - '0') - carry);
        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result.push_back(sub + '0');
    }

    for (int i = n2; i < n1; i++) {
        int sub = ((a[i] - '0') - carry);
        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result.push_back(sub + '0');
    }

    // Remove leading zeros
    while (result.size() > 1 && result.back() == '0') result.pop_back();
    reverse(result.begin(), result.end());

    // Add a negative sign if needed
    if (negative) result = "-" + result;

    return result;
}


// Function to divide two large numbers represented as strings
pair<string, string> divideLargeNumbers(string a, string b) {
    string quotient = ""; // Quotient
    string remainder = ""; // Current remainder

    for (char digit : a) {
        remainder += digit;

        while (remainder.size() > 1 && remainder[0] == '0') {
            remainder.erase(remainder.begin()); // Remove leading zeros
        }

        int count = 0;
        while (!isSmaller(remainder, b)) {
            remainder = subtractLargeNumbers(remainder, b);
            count++;
        }
        quotient += (count + '0'); // Add the count to the quotient
    }

    while (quotient.size() > 1 && quotient[0] == '0') {
        quotient.erase(quotient.begin()); // Remove leading zeros
    }

    if (quotient.empty()) quotient = "0";
    if (remainder.empty()) remainder = "0";

    return {quotient, remainder};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        pair<string, string> result = divideLargeNumbers(a, b);
        cout << result.first << " " << result.second << "\n";
    }
    return 0;
}
