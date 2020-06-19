#include <iostream>
#include <string>
#include "Library.h"

using namespace std;



//책 대출
void library::borrow_book() {
	string borrow_num;
	cout << endl << "대출하고 싶은 책의 번호를 적으세요 >> ";
	cin >> borrow_num;
	

	for (int i = 1; i <= 7; i++) {//i->최대 booklist갯수
		
		if (borrow_num == booklist[i][0]) {
			if (booklist[i][5] == "o") {
				if (borrowbook_num == 3) {//최대 대출 권수는 3개
					cout << "대출 권수를 초과합니다." << endl;
					break;
				}
				else { borrowbook_num++; }
				booklist[i][5] = "x";
				
				for (int j = 0; j < 3; j++) {//최대 빌릴수 있는 책수는 3개
					if (borrow_list[j] == "") {	//빌린책의 이름을 borrow_list에 추가함
						borrow_list[j] = borrow_num;
						break;
					}
				}

			}
			else {
				cout << endl << "현재 대출 중인 도서입니다." << endl;
			}
		}
		

	}
	cout << endl << id << "님의 현재 대출 목록은 " << endl;//대출 목록 추가해야함
	

	for (int i = 1; i <= 7; i++) {
		if (booklist[i][5] == "x") {
			cout << booklist[i][0] << " / " << booklist[i][1] << " / " << booklist[i][2] << " / " << booklist[i][3] << "/" << booklist[i][4] << endl;

		}
	}

	my_list[total] = borrow_num;
	total++;
	cout << endl << endl;
}

//책 반납하기
void library::return_book() {
	string return_num;
	cout << endl << id << " 님의 현재 대출 현황은 " << endl;
	for (int i = 0; i < borrowbook_num; i++) {
		for (int j = 1; j <= 7; j++) {	//j->booklist의 최대갯수
			if (booklist[j][0] == borrow_list[i]) {
				cout << booklist[j][0] << " / " << booklist[j][1] << " / " << booklist[j][2] << " / " << booklist[j][3] << "/" << booklist[j][4] << endl;
			}
		}
	}
	cout << endl << "반납하실 책의 번호를 적으세요 >>";
	cin >> return_num;
	for (int i = 0; i < borrowbook_num; i++) {//빌린 책의 
		for (int j = 1; j <= 7; j++) {	//j->booklist의 최대 갯수
			if (return_num == booklist[j][0]) {
				if (booklist[j][5] == "x") {
					booklist[j][5] = "o";		//반납성공시 반납가능으로 표시
					borrowbook_num--;
				}

			}
		}
		

	}
			
			
			if (borrowbook_num != 0) {
				cout << endl << id << "님의 남은 대여 도서는 " << endl;
				

				for (int i = 1; i <= 7; i++) {
					if (booklist[i][5] == "x") {
						cout << booklist[i][0] << " / " << booklist[i][1] << " / " << booklist[i][2] << " / " << booklist[i][3] << "/" << booklist[i][4] << endl;

					}
				
				}
			
			cout << endl;
		
			}



}
void library::mybook_list() {
	cout << endl << "현재까지 대출하신 도서 목록" << endl;
	if (total != 0) {
		for (int i = 0; i < total; i++) {
			for (int j = 1; j <= 7; j++) { //j->최대 booklist 갯수
				if (my_list[i] == booklist[j][0]) {
					cout << booklist[j][0] << " / " << booklist[j][1] << " / " << booklist[j][2] << " / " << booklist[j][3] << "/" << booklist[j][4] << endl;

				}
			}
		}
	}
	else { cout << "대출한 기록이 없습니다." << endl; }
	cout << endl;
}