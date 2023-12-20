#include<iostream>
using namespace std;
void change(bool status) {
	if (status == true) { status = false; }
	else { status = true; }
}
int main() {
	int i, n,j;
	bool box[100]{ 0 };
	for (i = 1; i <= 100;i++) {
		for (n = 1; n <= 100; n++) {
			if ((i * n) < 100) {
				if (box[i  * n] == true) { box[ i*n] = false; }
				else { box[i*n] = true; }
			}
		}
	}
	for (j = 0; j < 100; j++){
		if (box[j] == true) {
			cout << j << " ";
		}
	}
}