#include <iostream>
#include <string>
#include "Library.h"

using namespace std;



//å ����
void library::borrow_book() {
	string borrow_num;
	cout << endl << "�����ϰ� ���� å�� ��ȣ�� �������� >> ";
	cin >> borrow_num;
	

	for (int i = 1; i <= 7; i++) {//i->�ִ� booklist����
		
		if (borrow_num == booklist[i][0]) {
			if (booklist[i][5] == "o") {
				if (borrowbook_num == 3) {//�ִ� ���� �Ǽ��� 3��
					cout << "���� �Ǽ��� �ʰ��մϴ�." << endl;
					break;
				}
				else { borrowbook_num++; }
				booklist[i][5] = "x";
				
				for (int j = 0; j < 3; j++) {//�ִ� ������ �ִ� å���� 3��
					if (borrow_list[j] == "") {	//����å�� �̸��� borrow_list�� �߰���
						borrow_list[j] = borrow_num;
						break;
					}
				}

			}
			else {
				cout << endl << "���� ���� ���� �����Դϴ�." << endl;
			}
		}
		

	}
	cout << endl << id << "���� ���� ���� ����� " << endl;//���� ��� �߰��ؾ���
	

	for (int i = 1; i <= 7; i++) {
		if (booklist[i][5] == "x") {
			cout << booklist[i][0] << " / " << booklist[i][1] << " / " << booklist[i][2] << " / " << booklist[i][3] << "/" << booklist[i][4] << endl;

		}
	}

	my_list[total] = borrow_num;
	total++;
	cout << endl << endl;
}

//å �ݳ��ϱ�
void library::return_book() {
	string return_num;
	cout << endl << id << " ���� ���� ���� ��Ȳ�� " << endl;
	for (int i = 0; i < borrowbook_num; i++) {
		for (int j = 1; j <= 7; j++) {	//j->booklist�� �ִ밹��
			if (booklist[j][0] == borrow_list[i]) {
				cout << booklist[j][0] << " / " << booklist[j][1] << " / " << booklist[j][2] << " / " << booklist[j][3] << "/" << booklist[j][4] << endl;
			}
		}
	}
	cout << endl << "�ݳ��Ͻ� å�� ��ȣ�� �������� >>";
	cin >> return_num;
	for (int i = 0; i < borrowbook_num; i++) {//���� å�� 
		for (int j = 1; j <= 7; j++) {	//j->booklist�� �ִ� ����
			if (return_num == booklist[j][0]) {
				if (booklist[j][5] == "x") {
					booklist[j][5] = "o";		//�ݳ������� �ݳ��������� ǥ��
					borrowbook_num--;
				}

			}
		}
		

	}
			
			
			if (borrowbook_num != 0) {
				cout << endl << id << "���� ���� �뿩 ������ " << endl;
				

				for (int i = 1; i <= 7; i++) {
					if (booklist[i][5] == "x") {
						cout << booklist[i][0] << " / " << booklist[i][1] << " / " << booklist[i][2] << " / " << booklist[i][3] << "/" << booklist[i][4] << endl;

					}
				
				}
			
			cout << endl;
		
			}



}
void library::mybook_list() {
	cout << endl << "������� �����Ͻ� ���� ���" << endl;
	if (total != 0) {
		for (int i = 0; i < total; i++) {
			for (int j = 1; j <= 7; j++) { //j->�ִ� booklist ����
				if (my_list[i] == booklist[j][0]) {
					cout << booklist[j][0] << " / " << booklist[j][1] << " / " << booklist[j][2] << " / " << booklist[j][3] << "/" << booklist[j][4] << endl;

				}
			}
		}
	}
	else { cout << "������ ����� �����ϴ�." << endl; }
	cout << endl;
}