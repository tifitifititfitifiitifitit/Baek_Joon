#include<iostream>
#include<deque>
using namespace std;

int main() {
	int n;
	cin >> n;

	deque<int> deq;

	//deq.front() = 1 / deq.back() = n
	for (int i = 1; i <= n; i++) deq.push_back(i);

	//한 개의 숫자만 남을때까지
	while (deq.size() != 1) {

		//제일 위의 숫자 제거
		deq.pop_front();
		
		//제일 위의 카드를 제일 아래로
		int tmp = deq.front();
		deq.pop_front();
		deq.push_back(tmp);
	}

	cout << deq.front();

	return 0;
}