////字符串函数实例
////strcpy函数与strcat貌似已被废弃掉，控制台建议使用strcpy_s与strcat_s进行替代。
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main() {
//	char str1[11] = "Hello";
//	char str2[11] = "World";
//	char str3[11];
//	int len;
//
//	//复制str1 到str3
//	strcpy_s(str3, str1);
//	cout << "strcpy(str3, str1) :" << str3 << endl;
//
//	//连接str1 和str2
//	strcat_s(str1, str2);
//	cout << "strcat(str1, str2): " << str1 << endl;
//
//	//连接后，str1的总长度
//	len = strlen(str1);
//	cout << "strlen(str1): " << len << endl;
//
//	return 0;
//}
