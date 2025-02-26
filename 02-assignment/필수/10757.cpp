#include <iostream>
#include <algorithm>

using namespace std;

string Add(string s1, string s2) {
    string A = ""; string B = "";
    //�׻� s1�� �ڸ����� �� ���� 
    if (s1.length() < s2.length()) {
        A = s2; B = s1;
    }
    else {
        A = s1; B = s2;
    }

    if ((A.length() - B.length()) > 0) {
        //���� �ڸ����� �� ������
        int ���� = A.length() - B.length();
        string ��ĭ = "";
        while (���� != 0) {
            ��ĭ += "0";
            ����--;
        }
        B = ��ĭ + B;
    }

    //�ں��� �ϳ��� ���ϱ�
    string result = "";
    int up = 0;
    int x, y, sum;
    for (int i = A.length() - 1;i >= 0;i--) {
        x = A[i] - '0';
        y = B[i] - '0';
        sum = x + y;
        if (up == 1) {
            sum++;
            up = 0;
        }
        if (sum > 9) {
            up++;
        }
        result += sum % 10 + '0';
    }
    if (up == 1) {
        result += "1";
    }

    string final_result = "";
    for (int i = result.length() - 1;i >= 0;i--) {
        final_result += result[i];
    }

    return final_result;
}
int main() {
    string A = ""; string B = "";
    cin >> A >> B;
    string result = Add(A, B);
    cout << result;
    return 0;
}
