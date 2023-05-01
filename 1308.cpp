#include<iostream>
#include<string>

using namespace std;

//高精度除法
void highPrecisionDivide(string num1, string num2, string& quotient, string& remainder) {
    if (num2 == "0") {
        quotient = "error";
        remainder = "error";
        return;
    }

    int len1 = num1.length(), len2 = num2.length();
    int a[300] = {0}, b[300] = {0}, c[300] = {0}, r[300] = {0};
    for (int i = 0; i < len1; i++) a[len1 - 1 - i] = num1[i] - '0';
    for (int i = 0; i < len2; i++) b[len2 - 1 - i] = num2[i] - '0';

    for (int i = len1 - len2; i >= 0; i--) {
        int tmp = 0;
     for (int j = 0; j < len2; j++) tmp = tmp * 10 + r[j + i];
    int k = tmp / b[len2 - 1];
    c[i] = k;
    for (int j = len2 - 1; j >= 0; j--)
        r[j + i] -= k * b[j];
    for (int j = 0; j <= i + 1; j++) {
        if (r[j] < 0) {
            r[j + 1] -= 1;
            r[j] += 10;
        }
    }
}

int start;
for (start = len1 - len2; start >= 0 && !c[start]; start--);
quotient = "";
for (int i = start; i >= 0; i--) quotient += c[i] + '0';
if (quotient == "") quotient = "0";

for (start = len2 - 1; start >= 0 && !r[start]; start--);
remainder = "";
for (int i = start; i >= 0; i--) remainder += r[i] + '0';
if (remainder == "") remainder = "0";
}

int main() {
string num1, num2, quotient, remainder;
cin >> num1 >> num2;
highPrecisionDivide(num1, num2, quotient, remainder);
if (quotient == "error") {
cout << "error" << endl;
} else {
cout << quotient << endl;
cout << remainder << endl;
}
return 0;
}