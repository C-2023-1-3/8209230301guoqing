#include<iostream>
using namespace std;
int chartoint(char c) {
    if ('0' <= c && c <= '9') return c - '0';
    return c - 'A' + 10;
}
int parseHex(const char* const hexString) {
    int a[100];
    int len =strlen(hexString);
    for (int i = len - 1; i >= 0; i--) a[len - 1 - i] = chartoint(hexString[i]);
    int sum = 0, w = 1;
    for (int i = 0; i < len; i++) {
        sum += w * a[i];
        w = w * 16;
    }
    return sum;
};
int main() {
	cout<<parseHex("A5")<<endl;
}