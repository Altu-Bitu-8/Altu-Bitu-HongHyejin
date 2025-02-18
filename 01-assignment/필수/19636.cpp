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

    //1. 일일 기초 대사량 변화를 고려하지 않았을 때
    for (int day = 0; day < d; day++) {
        w1 += input - (i0 + output);
        w2 += input - (i2 + output);
        if (abs(input - (i2 + output)) > t) { //기초대사량 변화 역치보다 많다면
            i2 += floor((input - (i2 + output)) / 2.0); //일일 기초대사량 변화.
        }
    }

    if (w1 <= 0) {
        //사망
        cout << "Danger Diet\n";
    }
    else {
        cout << w1 << " " << i0 << "\n";
    }

    if (w2 <= 0 || i2 <= 0) {
        //사망
        cout << "Danger Diet\n";
    }
    else {
        cout << w2 << " " << i2 << " ";
        if ((i0 - i2) > 0) {
            //요요
            cout << "YOYO";
        }
        else {
            cout << "NO";
        }
    }
}