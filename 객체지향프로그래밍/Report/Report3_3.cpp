/*#include <iostream>
using namespace std;

class coord {
private:
	int x, y;
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }
	coord operator--(); // --�ߺ������� (���λ�)
	coord operator--(int notused); // --�ߺ������� (���̻�)
};

coord coord::operator--()
{
	x--; y--;
	return *this;
} // ���λ� --�ߺ������� ����

coord coord::operator--(int notused)
{
	coord temp;
	temp = *this;
	x--; y--;
	return temp;
} // ���̻� --�ߺ������� ����

int main()
{
	coord a(3, 4), b;
	int xx, yy;
	b = --a; //��ġ--
	a.get_xy(xx, yy);
	cout << "(���λ�--) a: " << xx << ',' << yy << endl; // ��ġ-- �� a��� ���
	b.get_xy(xx, yy);
	cout << "(���λ�--) b: " << xx << ',' << yy << endl; // ��ġ-- �� b��� ���
	b = a--; // ��ġ--
	a.get_xy(xx, yy);
	cout << "(���̻�--) a: " << xx << ',' << yy << endl; // ��ġ-- �� a��� ���
	b.get_xy(xx, yy);
	cout << "(���̻�--) b: " << xx << ',' << yy << endl; // ��ġ-- �� b��� ���
	return 0;
}*/