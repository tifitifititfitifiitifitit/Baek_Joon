#include<iostream>
using namespace std;

int main() {
	int arr_1[6] = {1,1,2,2,2,8};
	int arr_2[6] = {0,0,0,0,0,0};
	
	for(int i=0; i<6; i++) {
		cin >> arr_2[i];
		cout << arr_1[i]-arr_2[i] << " ";
	}
	
	return 0;
}