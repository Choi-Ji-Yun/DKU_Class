/*#include <iostream>
using namespace std;

class coord {
private:
	int x, y;
public:
	coord() { x = 0; y = 0; }
	coord(int i, int j) { x = i; y = j; }
	void get_xy(int& i, int& j) { i = x; j = y; }
	bool operator== (coord op); // ==�ߺ�������
	bool operator&& (coord op); // &&�ߺ�������
	
};

bool coord::operator==(coord op) 
{
	if ((x == op.x) && (y == op.y))
		return true;
	else
		return false;
} // x�� op.x �׸��� y�� op.y�� ��ġ�ϸ� true, �׷��� ������ false ��ȯ

bool coord::operator&&(coord op)
{
	return ((x && op.x) && (y && op.y));
} // ��� ���̸� ��, �ϳ��� �����̸� ���� ��ȯ

int main()
{
	coord a(3, 3), b(4, 4); // 2�� ��ü ����
	cout << "==������: " << (a == b) << endl; //== ���(��/����) ���
	cout << "&&������: " << (a && b) << endl; // && ���(��/����) ���
	return 0;
}*/