#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
为简化c++字符串编程
此头文件提供extstr对象
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
extstr用法与代码示例

1.基本
1.1定义
extstr a;

1.2属性
value

例：
extstr a;
a.value="Hello World";

1.3方法
1.3.1  length()
返回value的长度
例:
extstr a;
a.value="Hello World";
int b;
b=a.length();

1.3.2  to_int()
将value转换为int类型并返回
例:
extstr a;
a.value="2";
int b;
b= a.to_int();

1.3.3  to_double()
将value转换为double类型并返回
例：
extstr a;
a.value="1.3";
double b;
b=a.to_value();

1.3.4 replace()
替换
例:
extstr a;
a.value="Hello World";
a.replace("World","Kitty");
cout <<a.value;

此例的结果输出为
Hello Kitty
1.3.5 sub_str()
返回某个字符串在value中出现的次数
例：
extstr a;
a.value="Hello World";
int b=a.sub_str("l");

1.3.6 clear()
将value的值设置为""
例：
extstr a;
a.value="Hello World";
a.clear();

1.3.7 empty()
判断value的值是否为空,并返回true或false。
例：
extstr a;
a.value="Hello World";
a.clear();
bool b=a.empty();
此时b为false。

其他函数应用举例：
int_str(1);//返回"1"
double_str(1.1);//返回"1.1"
//...以此类推
str_replace("aabbb","a","b");//返回"bbbbb"
sub_str("aabbb","b");//返回3
*/
