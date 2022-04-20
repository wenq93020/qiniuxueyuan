#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <Windows.h>


void setEncoding() {
	system("chcp 65001");
	system("cls");
}

int main(void) {
	setEncoding();

	std::cout << "1.网络404攻击" << std::endl;
	std::cout << "2.网站篡改攻击" << std::endl;
	std::cout << "3.网站攻击记录" << std::endl;
	std::cout << "4.DNS攻击" << std::endl;
	std::cout << "5.服务器重启攻击" << std::endl;

	system("pause");
	return 0;

}
