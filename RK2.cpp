#include <iostream>

using namespace std;

void insert(int*& arr, int pos, int el, int& len) {
	if (len + 1 >= pos && pos > 0) {
		int* temp = new int[len + 1];
		bool flag = false;
		for (int i = 0; i < len + 1; i++) {
			if (!flag && i != pos) {
				temp[i] = arr[i];
			}
			if (flag) {
				temp[i] = arr[i - 1];
			}
			if (pos - 1 == i) {
				flag = true;
				temp[i] = el;
			}

		}
		len++;
		arr = temp;
	}
	else {
		cout << "wrong pos" << endl;
	}
}

int main()
{
	int len = 3;
	int* arr = new int[len];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	insert(arr, 2, 4, len);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ';
	}
}

