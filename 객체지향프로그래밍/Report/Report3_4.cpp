#include <iostream>
using namespace std;

class coord {
private:
	int x, y;
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }
	friend coord operator- (coord op1, coord op2); // -�������ߺ�
	friend coord operator/ (coord op, coord op2); // /�������ߺ�
};

coord operator-(coord op1, coord op2)
{
	coord temp;
	temp.x = op1.x - op2.x;
	temp.y = op1.y - op2.y;
	return temp;
} // - �ߺ������� ����

coord operator/(coord op1, coord op2)
{
	coord temp;
	temp.x = op1.x / op2.x;
	temp.y = op1.y / op2.y;
	return temp;
} // /�ߺ������� ����

int main()
{
	coord a(6, 8), b(3, 2), c; // 3�� ��ü ����
	int xx, yy;
	c = a - b;
	c.get_xy(xx, yy); // �� ��� ����
	cout << "-�� ���(x,y): " << xx << ',' << yy << endl; // �� ��� ���
	c = a / b;
	c.get_xy(xx, yy); // ���� ��� ����
	cout << "/�� ���(x,y): " << xx << ',' << yy << endl; // ���� ��� ���
	return 0;
}