#include<iostream>
#include<cstring>
#define num 66
using namespace std;
bool pd;
int indexOf(const char s1[], const char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i < len2; i++)
	{
		pd = true;
		for (int j = i; j < len1 + i; j++) { if (s1[j - i] != s2[j]) pd = false; }
		if (pd)
		{
			return i;
		}
	}if (!pd)return -1;
};
int main() {
	char s1[num], s2[num];
	cout << "Enter the first string :";
	cin.getline(s1,num);
	cout << "Enter the second string :";
	cin.getline(s2,num);
    cout << "indexOf(" << s1 << "," << s2 << ")" << "is" << indexOf(s1, s2);
}