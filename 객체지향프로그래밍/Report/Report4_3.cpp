#include<iostream>
using namespace std;
template <class X> int find(X object, X* list, int size) // ���ø�Ʈ �Լ�
{
	int t = -1; // t�� -1�� �ʱ�ȭ
	for (int i = 0; i < size; i++)
	{
		if (list[i] == object) // list[i]�� object�� ���ٸ�
			t = i; 
	}
	return t; // t��ȯ
}
int main()
{
	int _size, * a, find_int; 
	float* b, find_float;
	char* c, find_char;

	cout << "size �Է�: ";
	cin >> _size; // size �Է�
	a = new int[_size]; // ������ �����Ҵ����
	cout << "�����Է�: ";
	for (int i = 0; i < _size; i++)
	{
		cin >> a[i]; // _size��ŭ ���� �Է�
	}
	cout << "Ž���Ұ�: ";
	cin >> find_int; // Ž���� �� �Է�
	cout << "÷��: " << find(find_int, a, _size) << endl; // ���

	cout << "size �Է�: ";
	cin >> _size;
	b = new float[_size]; // �Ǽ��� �����Ҵ����
	cout << "�Ǽ��Է�: ";
	for (int i = 0; i < _size; i++)
	{
		cin >> b[i]; //_size��ŭ �Ǽ� �Է�
	}
	cout << "Ž���Ұ�: ";
	cin >> find_float; // Ž���� �� �Է�
	cout << "÷��: " << find(find_float, b, _size) << endl; // ���

	cout << "size �Է�: ";
	cin >> _size;
	c = new char[_size]; // ������ �����Ҵ����
	cout << "�����Է�: ";
	for (int i = 0; i < _size; i++)
	{
		cin >> c[i]; // _size��ŭ ���� �Է�
	}
	cout << "Ž���Ұ�: ";
	cin >> find_char; // Ž���� �� �Է�
	cout << "÷��: " << find(find_char, c, _size) << endl; // ���
	delete[]a; delete[]b; delete[]c; //�����Ҵ� ��� ����
	return 0;
}
