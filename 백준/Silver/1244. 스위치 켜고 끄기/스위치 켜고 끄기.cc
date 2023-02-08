#include<iostream>
using namespace std;

int main() {
	int n, arr[101];
	cin >> n;

	//스위치의 초기상태
	for (int i = 1; i <= n; i++) cin >> arr[i];

	//학생의 수
	int student;
	cin >> student;

	//성별과 번호
	int sex, number;
	for (int i = 1; i <= student; i++) {
		cin >> sex >> number;

		//남학생
		if (sex == 1) {
			for (int j = number; j <= n; j += number) {
				arr[j] = arr[j] ? 0 : 1;
			}
		}

		//여학생
		if (sex == 2) {
			arr[number] = arr[number] ? 0 : 1;
			
			int x = 1;
			while (1) {
				if ((arr[number - x] == arr[number + x]) && ((number - x >= 1) && (number + x <= n))) {
					arr[number - x] = arr[number - x] ? 0 : 1;
					arr[number + x] = arr[number + x] ? 0 : 1;
					x++;
				}
				else break;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (i % 20 == 0) cout << arr[i] << endl;
		else cout << arr[i] << " ";
	}
}