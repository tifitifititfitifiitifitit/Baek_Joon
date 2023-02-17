#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	string str;
	cin >> str;

	vector<string> vec;
	
	while(!str.empty()) {
		vec.push_back(str);
		
        //pop_front가 안되서 그냥 뒤집고 팝백, 다시 뒤집음
		reverse(str.begin(), str.end());
		str.pop_back();
		reverse(str.begin(), str.end());
	}

	sort(vec.begin(), vec.end());

	for (auto x : vec) {
		cout << x << endl;
	}
}