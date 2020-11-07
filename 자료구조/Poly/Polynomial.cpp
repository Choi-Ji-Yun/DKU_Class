#include "StdAfx.h"
#include "Polynomial.h"
#include "Term.h"

#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
Polynomial::Polynomial(void)
{
    capacity = 4;
	terms = 0 ;
	termArray = new Term[capacity] ;  // ũ�� 4 �� �迭 ����
}

Polynomial::~Polynomial(void)
{

}

Polynomial Polynomial::Add(Polynomial b)
// a(x)(*this�� ��)�� b(x)�� ���� ����� ��ȯ�Ѵ�.
{
  Polynomial c; 
  int aPos = 0, bPos = 0 ;

  while ((aPos < terms) && (bPos < b.terms))
    if(termArray[aPos].exp == b.termArray[bPos].exp) {
        float t = termArray[aPos].coef + b.termArray[bPos].coef;
        if (t) c.NewTerm(t, termArray[aPos].exp);
        aPos++; bPos++;
	}
	else if (termArray[aPos].exp < b.termArray[bPos].exp) {
        c.NewTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
        bPos++;
	}
	else {
        c.NewTerm(termArray[aPos].coef, termArray[aPos].exp);
        aPos++;
    } 

  // A(x)(*this)�� ������ �׵��� �߰��Ѵ�.
  for (; aPos < terms; aPos++)
    c.NewTerm(termArray[aPos].coef, termArray[aPos].exp);

  // B(x)�� ������ �׵��� �߰��Ѵ�.
  for (; bPos < b.terms; bPos++)
    c.NewTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
 
  return c;
} // Add�� ��


void Polynomial::NewTerm(const float theCoeff, const int theExp)
// ���ο� ���� termArray ���� ÷���Ѵ�.
{
    if (terms == capacity) 
    {//termArray�� ũ�⸦ �� ��� Ȯ��
          capacity *= 2; 
          Term *temp = new Term [capacity];           // ���ο� �迭
		  for(int i=0; i<terms ; i++) 
			  temp[i] = termArray[i] ;
          delete [ ] termArray;                       // ���� �޸𸮸� ��ȯ
          termArray = temp;
	} 
    termArray[terms].coef = theCoeff;
    termArray[terms++].exp = theExp;
}

Polynomial Polynomial::Multiply(Polynomial b) {
    Polynomial c;  // ����� ������ ��üc ����
    cout << "\nA�� ���׽�: " << endl;
    for (int i = 0; i < terms - 1; i++) 
        cout << termArray[i].coef << "X^" << termArray[i].exp << " + ";
    cout << termArray[terms - 1].coef << "X^" << termArray[terms - 1].exp << endl;  // A���׽� ���
    cout << "\nB�� ���׽�: " << endl;
    for (int i = 0; i < b.terms - 1; i++)  
        cout << b.termArray[i].coef << "X^" << b.termArray[i].exp << " + ";
    cout << b.termArray[b.terms - 1].coef << "X^" << b.termArray[b.terms - 1].exp << endl;  //B���׽� ���            
    for (int aPos = 0; aPos < terms; aPos++) {  // A���׽� ���� ����ŭ �ݺ�
        Polynomial temp;  // ������ ������ ��ütemp ����
        for (int bPos = 0; bPos < b.terms; bPos++) {  //B���׽� ���� ����ŭ �ݺ�
            temp.NewTerm(termArray[aPos].coef * b.termArray[bPos].coef, termArray[aPos].exp + b.termArray[bPos].exp);
            // ��������� ������ ���������� ������ temp�� ����
        }
        c = c.Add(temp);  // ���� ����
    }
    return c;  //��� ��ȯ
}

void Polynomial::Print()
{
   int i ;

   cout << "\nC�� ���׽�:"<<endl ;

   if (terms) {
      for (i = 0 ; i < terms-1 ; i++)
	      cout << termArray[i].coef << " x^" << termArray[i].exp << " + " ;
      // ������ ���� ���
      cout << termArray[i].coef << " x^" << termArray[i].exp << "\n" ;
   }
   else
	  cout << " No terms " ;

}
