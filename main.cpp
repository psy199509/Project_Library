#include <iostream>
#include <string>
#include "Library.h"

using namespace std;


int main() {
	library *b = new library[100];
	int menu = 0;
	int user = 0;
	int sw = 1;
	
	while (sw) {
		cout << "**�ܱ� Library ���� �Դϴ�**" << endl;
		cout << "1. ȸ�������ϱ�" << endl;
		cout << "2. ����� ���� ����" << endl;
		cout << "3. �ܱ� Library ���� ��Ȳ" << endl;
		cout << "4. �ܱ� Library ���� ����" << endl;
		cout << "5. �����ϱ�" << endl;
		cout << "6. �ݳ��ϱ�" << endl;
		cout << "7. ����� ������Ȳ" << endl;
		cout << "8. ���α׷� ����" << endl;

		cout << endl << "�ܱ� Library ȸ���� �ƴ϶�� ȸ������ �� ���񽺸� �̿����ּ���." << endl;
		cout << "�̿��Ͻð� ���� ���� ��ȣ�� �Է����ּ��� >> ";
		cin >> menu;

		if (menu < 1 || menu>9) {
			cout << "�̿��� �Ұ����� ���� �Դϴ�. �ٸ� ���񽺸� �̿� �ٶ��ϴ�." << endl;
		}

		switch (menu) {
		case 1:

			b[user].setlibrary();

			user++;

			break;

		case 2:
			char check_id[100];	//������� id�� �Էµ� id��
			int user2;
			int password2;


			password2 = 0;
			user2 = 0;
			cout << "ID�� �Է����ּ���.>>";
			cin >> check_id;

			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id, b[user2].id) != 0) {
					user2++;
				}
				else { break; }

			}
			cout << "��й�ȣ�� �Է����ּ���.>>";
			cin >> password2;
			if (password2 == b[user2].password) {
				b[user2].changeinformation();
			}
			else {
				cout << "��й�ȣ�� �߸��Ǿ����ϴ�." << endl;
			}

			break;
		case 3:		//������ å list
			cout << "�ܱ� library ���� ����" << endl;
			for (int i = 0; i < 7; i++) {	//i->booklist �ִ� ����
				for (int j = 0; j < 6; j++) {
					if (j != 5) {
						cout << booklist[i][j] << "/";
					}
					else
						cout << booklist[i][j];
				}
				cout << endl;
			}
			cout << endl;
			break;

		case 4:
			char info_b_name[100];
			cout << endl << "ã�� ���� å�� �̸��� �Է����ּ��� >>";
			cin >> info_b_name;
			
			for (int i = 1; i < 7; i++) {
				if (info_b_name == booklist[i][1]) {
						cout << bookinformation[i - 1] << endl;
						break;
				}
				else {
						cout << "�ܱ� Library�� �����ϴ� ������ �ƴմϴ�" << endl;
						break;
				}

			}
			cout << endl;
			break;

		case 5:		//�����ϱ�
			char check_id3[100];
			int user3;
			int password3;

			cout << "ID�� �Է����ּ��� >>";
			cin >> check_id3;
			user3 = 0;
			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id3, b[user3].id) != 0) {
					user3++;
				}
				else { break; }
			}
			//cout << user3;
			cout << "��й�ȣ�� �Է����ּ���.>>";
			cin >> password3;
			if (password3 != b[user3].password) {
				cout << "��й�ȣ�� �߸��Ǿ����ϴ�." << endl;
				break;
			}

			cout << endl << "���� ���� ������ �������" << endl;
			for (int i = 1; i <= 7; i++) {		//�뿩������ ���� ��ϸ� ������, i->booklist �ִ� ����
				if (booklist[i][5] == "o") {
					for (int j = 0; j < 5; j++) {
						if (j != 4) {
							cout << booklist[i][j] << "/";
						}
						else
							cout << booklist[i][j];
					}
					cout << endl;
				}
			}
			b[user3].borrow_book();

			break;



		case 6:		//�ݳ��ϱ�
			char check_id4[100];
			int user4;
			int password4;

			cout << "ID�� �Է����ּ��� >>";
			cin >> check_id4;
			user4 = 0;
			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id4, b[user4].id) != 0) {
					user4++;
				}
				else { break; }
			}
			cout << "��й�ȣ�� �Է����ּ���.>>";
			cin >> password4;
			if (password4 == b[user4].password) {
				b[user4].return_book();
			}

			else {
				cout << "��й�ȣ�� �߸��Ǿ����ϴ�." << endl;

			}
			break;



		case 7:		//����� ���� ��Ȳ
			char check_id5[100];
			int user5;
			int password5;

			cout << "ID�� �Է����ּ��� >>";
			cin >> check_id5;
			user5 = 0;
			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id5, b[user5].id) != 0) {
					user5++;
				}
				else { break; }
			}
			cout << "��й�ȣ�� �Է����ּ���.>>";
			cin >> password5;
			if (password5 == b[user5].password) {
				b[user5].mybook_list();
			}
			else {
				cout << "��й�ȣ�� �߸��Ǿ����ϴ�." << endl;
			}
			break;


		case 8:		//��������
			cout << "�ܱ� Library Service�� �����մϴ�." << endl;
			sw = 0;
			break;
		}
	}

}