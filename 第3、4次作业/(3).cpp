#include<iostream>
using namespace std;
void change(int *list, int size) {
	for (int i = 0; i <size-1 ;i++) {
		for (int j = 0; j <size-1-i ;j++) {
			if (list[j]>list[j+1]) {
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}
int main() {
	int i,size;
	cout << "请输入数组大小:";
	cin >> size;
	int* list = new int[size];
	cout << "请输入数组元素:";
	for (i = 0; i < size; i++) {
		cin >> list[i];
	}
	change(list,size);
	int* n = list;
	for (int i = 0; i < size; i++) {
		cout << *n << " ";
		n++;
	}cout << endl;
	delete[]list;
}