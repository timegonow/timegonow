#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// 声明高精度乘法函数，输入两个字符串，返回字符串类型的积
string multiply(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    // 创建一个存放结果的vector，大小为两数长度之和
    vector<int> result(len1 + len2, 0);
    // 从个位开始，逐位相乘
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = mul + result[p2];
            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }
    // 去掉结果前导0
    int start_pos = 0;
    while (start_pos < result.size() && result[start_pos] == 0) {
        start_pos++;
    }
    // 若结果全是0，则返回"0"
    if (start_pos == result.size()) {
        return "0";
    }
    // 构造结果字符串并返回
    string res;
    for (int i = start_pos; i < result.size(); i++) {
        res += result[i] + '0';
    }
    return res;
}

int main() {
    string num1, num2;
    cin >> num1 >> num2;
    string res = multiply(num1, num2);
    cout << res << endl;
    return 0;
}