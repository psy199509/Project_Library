#include <iostream>
#include <string>
#include "Library.h"

using namespace std;

void library::setlibrary() {	//library sys
	cout << endl << "---�ܱ� Library ȸ������---" << endl;
	cout << "������� Id�� �Է��� �ּ��� >>";
	cin >> this->id;

	cout << "������� ��й�ȣ�� ������ �ּ��� >>";
	cin >> this->password;

	cout << "������ �Է����ּ��� >> (100�� ����)";
	cin >> name;

	for (int i = 0; i < 100; i++) {
		this->name[i] = name[i];

	}
	cout << "�ּҸ� �Է����ּ��� >> (10�� ����)";
	cin >> address;
	for (int i = 0; i < 100; i++) {
		this->address[i] = address[i];
	}
	cout << "��ȭ��ȣ�� �Է����ּ��� >> ( - ���� �Է����ּ���!)";
	cin >> this->phone;

	cout << "������� ���̸� �Է����ּ��� >>";
	cin >> this->age;



	cout << "�ݰ����ϴ�." << id << "���� " << "�ܱ� library ȸ���� �Ǽ̽��ϴ�." << endl;
	cout << endl;
}

void library::changeinformation() {
	int change = 0;
	cout << endl << "������� ������ �����մϴ�" << endl;
	cout << "1. ��й�ȣ" << endl;
	cout << "2. �ּ�" << endl;
	cout << "3. ��ȭ��ȣ" << endl;
	cout << "�����ϰ��� �ϴ� �׸��� �Է����ּ��� >> ";
	cin >> change;
	switch (change)
	{
	case 1:
		int password2;
		cout << "���ο� ��й�ȣ�� �Է����ּ��� >>";
		cin >> password2;
		this->password = password2;
		cout << "��� ��ȣ�� ����Ǿ����ϴ�." << endl;
		break;

	case 2:
		char address2[101];
		cout << "���ο� �ּҸ� �Է����ּ��� >>";
		cin >> address2;
		for (int i = 0; i < 101; i++) {
			this->address[i] = address2[i];
		}
		cout << "�ּҰ� ����Ǿ����ϴ�" << endl;
		break;

	case 3:
		double phone2;
		cout << "���ο� ��ȭ��ȣ�� �Է����ּ��� >>";
		cin >> phone2;
		this->phone = phone2;
		cout << "��ȭ��ȣ�� ����Ǿ����ϴ�" << endl;
		break;
	}
}



