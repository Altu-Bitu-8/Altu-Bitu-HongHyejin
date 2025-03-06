#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int w, i0, t, d, input, output;
    cin >> w >> i0 >> t;
    cin >> d >> input >> output;

    int w1 = w;
    int w2 = w;
    int i2 = i0;

    //1. ���� ���� ��緮 ��ȭ�� ������� �ʾ��� ��
    for (int day = 0; day < d; day++) {
        w1 += input - (i0 + output);
        w2 += input - (i2 + output);
        if (abs(input - (i2 + output)) > t) { //���ʴ�緮 ��ȭ ��ġ���� ���ٸ�
            i2 += floor((input - (i2 + output)) / 2.0); //���� ���ʴ�緮 ��ȭ.
        }
    }

    if (w1 <= 0) {
        //���
        cout << "Danger Diet\n";
    }
    else {
        cout << w1 << " " << i0 << "\n";
    }

    if (w2 <= 0 || i2 <= 0) {
        //���
        cout << "Danger Diet\n";
    }
    else {
        cout << w2 << " " << i2 << " ";
        if ((i0 - i2) > 0) {
            //���
            cout << "YOYO";
        }
        else {
            cout << "NO";
        }
    }
}