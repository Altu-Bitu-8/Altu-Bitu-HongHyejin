#include <iostream>
#include <string>

using namespace std;

int king_a, king_n, rock_a, rock_n;

void program2(string move) {
	int temp_a = king_a, temp_n = king_n;
	if (move == "R") {
		temp_a = king_a + 1;
	}
	else if (move == "L") {
		temp_a = king_a - 1;
	}
	else if (move == "B") {
		temp_n = king_n - 1;
	}
	else if (move == "T") {
		temp_n = king_n + 1;
	}
	else if (move == "RT") {
		temp_a = king_a + 1;
		temp_n = king_n + 1;
	}
	else if (move == "LT") {
		temp_a = king_a - 1;
		temp_n = king_n + 1;
	}
	else if (move == "RB") {
		temp_a = king_a + 1;
		temp_n = king_n - 1;
	}
	else if (move == "LB") {
		temp_a = king_a - 1;
		temp_n = king_n - 1;
	}

	if (temp_a > 8 || temp_a < 1 || temp_n>8 || temp_n < 1) {
		return;
	}

	int check_a = rock_a, check_n = rock_n;
	if (temp_a == rock_a && temp_n == rock_n) {
		if (move == "R") {
			check_a = rock_a + 1;
		}
		else if (move == "L") {
			check_a = rock_a - 1;
		}
		else if (move == "B") {
			check_n = rock_n - 1;
		}
		else if (move == "T") {
			check_n = rock_n + 1;
		}
		else if (move == "RT") {
			check_a = rock_a + 1;
			check_n = rock_n + 1;
		}
		else if (move == "LT") {
			check_a = rock_a - 1;
			check_n = rock_n + 1;
		}
		else if (move == "RB") {
			check_a = rock_a + 1;
			check_n = rock_n - 1;
		}
		else if (move == "LB") {
			check_a = rock_a - 1;
			check_n = rock_n - 1;
		}

		if (check_a < 1 || check_a>8 || check_n < 1 || check_n>8) {
			return;
		}
	}
	king_a = temp_a; king_n = temp_n;
	rock_a = check_a; rock_n = check_n;

	return;
}

int main() {
	string s1, s2; //킹, 돌
	int n; //움직이는 횟수
	cin >> s1 >> s2 >> n;
	king_a = s1[0] - 'A' + 1; //alphabet 
	king_n = s1[1] - '1' + 1; //number
	rock_a = s2[0] - 'A' + 1;
	rock_n = s2[1] - '1' + 1;

	while (n--) {
		string move;
		cin >> move;
		program2(move);
	}

	cout << (char)(king_a + 'A' - 1) << king_n << "\n";
	cout << (char)(rock_a + 'A' - 1) << rock_n << "\n";

	return 0;
}