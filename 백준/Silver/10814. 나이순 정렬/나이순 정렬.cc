#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Person {
public:
	string name; //이름
	int index; //가입순서
	int age; //나이
};

bool compare(Person& a, Person& b) {
	if (a.age == b.age) {
		return a.index < b.index;
	}
	else {
		return a.age < b.age;
	}
}

Person human[100000];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> human[i].age >> human[i].name;
		human[i].index = i;
	}

	sort(human, human + n, compare);

	for (int i = 0; i < n; i++) {
		cout << human[i].age << " " << human[i].name << "\n";
	}
}