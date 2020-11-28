#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
Ϊ��c++�ַ������
��ͷ�ļ��ṩextstr����
(c)321FreeWeb @321.vipgz1.idcfengye.com 2020
*/
class extstr
{
public:
	string value;
	long int length();
	long int to_int();
	long double to_double(int i);
	void replace(string, string);
	int sub_str(string);
	void clear();
	bool empty();

private:

};

string int_str(long int );
string double_str(long double );
string float_str(float );
string str_replace(string, string, string);
int sub_str(string, string);



/*
extstr�÷������ʾ��

1.����
1.1����
extstr a;

1.2����
value

����
extstr a;
a.value="Hello World";

1.3����
1.3.1  length()
����value�ĳ���
��:
extstr a;
a.value="Hello World";
int b;
b=a.length();

1.3.2  to_int()
��valueת��Ϊint���Ͳ�����
��:
extstr a;
a.value="2";
int b;
b= a.to_int();

1.3.3  to_double()
��valueת��Ϊdouble���Ͳ�����
����
extstr a;
a.value="1.3";
double b;
b=a.to_value();

1.3.4 replace()
�滻
��:
extstr a;
a.value="Hello World";
a.replace("World","Kitty");
cout <<a.value;

�����Ľ�����Ϊ
Hello Kitty
1.3.5 sub_str()
����ĳ���ַ�����value�г��ֵĴ���
����
extstr a;
a.value="Hello World";
int b=a.sub_str("l");

1.3.6 clear()
��value��ֵ����Ϊ""
����
extstr a;
a.value="Hello World";
a.clear();

1.3.7 empty()
�ж�value��ֵ�Ƿ�Ϊ��,������true��false��
����
extstr a;
a.value="Hello World";
a.clear();
bool b=a.empty();
��ʱbΪfalse��

��������Ӧ�þ�����
int_str(1);//����"1"
double_str(1.1);//����"1.1"
//...�Դ�����
str_replace("aabbb","a","b");//����"bbbbb"
sub_str("aabbb","b");//����3
*/
