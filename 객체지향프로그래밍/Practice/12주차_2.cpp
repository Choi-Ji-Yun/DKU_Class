/*#include <iostream>
using namespace std;

template <class MType> class Give_Max {
private:
	int size;
	MType *arr;
public:
	Give_Max(int n) { size = n; arr = new MType[size]; };
	void input();
	MType max();
};

template <class MType> void Give_Max<MType>::input()
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}

template <class MType> MType Give_Max<MType>::max()
{
	MType max = arr[0];
	for (int i = 1; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}

int main()
{
	int n;
	cout << "n�Է�: ";
	cin >> n;
	Give_Max<int> a(n);
	a.input();
	cout << "���� �ִ밪: " << a.max() << endl;

	cout << "n�Է�: ";
	cin >> n;
	Give_Max<double> b(n);
	b.input();
	cout << "�Ǽ� �ִ밪: " << b.max() << endl;
	return 0;
}*/