#include<iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void merge(const int *list1, int size1, const int *list2, int size2, int *list3) {
    for (int i = 0; i < size1; i++) {
        list3[i] = list1[i];
    }for (int i = size1; i < size1 + size2; i++) {
        list3[i] = list2[i - size1];
    }int size3 = size1 + size2;
    for (int i = 0; i < size3-1; i++) {
        for (int j = 0; j < size3-i-1; j++) {
            if (list3[j] > list3[j+1]) {
                swap(list3[j], list3[j + 1]);
            }
        }
    }
};
int main() {
    int size1, size2;
    cout << "�������һ�������Ԫ����:" << endl;
    cin >> size1;
    int *list1=new int[size1];
    cout << "������" << size1 << "����һ�������Ԫ��" << endl;
    for (int i = 0; i < size1; i++) {
        cin>>list1[i];
    }
    cout << "������ڶ��������Ԫ����:" << endl;
    cin >> size2;
    int* list2 = new int[size2];
    cout << "������" << size2 << "���ڶ��������Ԫ��" << endl;
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }
    int size3=size1+size2;
    int* list3=new int[size3];
    merge(list1, size1, list2, size2,list3);
    
    for (int n = 0; n < size3; n++) {
        cout << list3[n] << " ";
    }
    delete[] list1;
    delete[] list2;
    delete[] list3;
}