#include <iostream>
#include <string>
#include "Library.h"

using namespace std;

void library::setlibrary() {	//library sys
	cout << endl << "---단국 Library 회원가입---" << endl;
	cout << "사용자의 Id를 입력해 주세요 >>";
	cin >> this->id;

	cout << "사용자의 비밀번호를 설정해 주세요 >>";
	cin >> this->password;

	cout << "성함을 입력해주세요 >> (100자 이하)";
	cin >> name;

	for (int i = 0; i < 100; i++) {
		this->name[i] = name[i];

	}
	cout << "주소를 입력해주세요 >> (10자 이하)";
	cin >> address;
	for (int i = 0; i < 100; i++) {
		this->address[i] = address[i];
	}
	cout << "전화번호를 입력해주세요 >> ( - 없이 입력해주세요!)";
	cin >> this->phone;

	cout << "사용자의 나이를 입력해주세요 >>";
	cin >> this->age;



	cout << "반갑습니다." << id << "님은 " << "단국 library 회원이 되셨습니다." << endl;
	cout << endl;
}

void library::changeinformation() {
	int change = 0;
	cout << endl << "사용자의 정보를 변경합니다" << endl;
	cout << "1. 비밀번호" << endl;
	cout << "2. 주소" << endl;
	cout << "3. 전화번호" << endl;
	cout << "변경하고자 하는 항목을 입력해주세요 >> ";
	cin >> change;
	switch (change)
	{
	case 1:
		int password2;
		cout << "새로운 비밀번호를 입력해주세요 >>";
		cin >> password2;
		this->password = password2;
		cout << "비밀 번호가 변경되었습니다." << endl;
		break;

	case 2:
		char address2[101];
		cout << "새로운 주소를 입력해주세요 >>";
		cin >> address2;
		for (int i = 0; i < 101; i++) {
			this->address[i] = address2[i];
		}
		cout << "주소가 변경되었습니다" << endl;
		break;

	case 3:
		double phone2;
		cout << "새로운 전화번호를 입력해주세요 >>";
		cin >> phone2;
		this->phone = phone2;
		cout << "전화번호가 변경되었습니다" << endl;
		break;
	}
}



