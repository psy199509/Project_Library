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
		cout << "**단국 Library 서비스 입니다**" << endl;
		cout << "1. 회원가입하기" << endl;
		cout << "2. 사용자 정보 변경" << endl;
		cout << "3. 단국 Library 도서 현황" << endl;
		cout << "4. 단국 Library 도서 정보" << endl;
		cout << "5. 대출하기" << endl;
		cout << "6. 반납하기" << endl;
		cout << "7. 사용자 대출현황" << endl;
		cout << "8. 프로그램 종료" << endl;

		cout << endl << "단국 Library 회원이 아니라면 회원가입 후 서비스를 이용해주세요." << endl;
		cout << "이용하시고 싶은 서비스 번호를 입력해주세요 >> ";
		cin >> menu;

		if (menu < 1 || menu>9) {
			cout << "이용이 불가능한 서비스 입니다. 다른 서비스를 이용 바랍니다." << endl;
		}

		switch (menu) {
		case 1:

			b[user].setlibrary();

			user++;

			break;

		case 2:
			char check_id[100];	//만들어진 id와 입력된 id비교
			int user2;
			int password2;


			password2 = 0;
			user2 = 0;
			cout << "ID를 입력해주세요.>>";
			cin >> check_id;

			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id, b[user2].id) != 0) {
					user2++;
				}
				else { break; }

			}
			cout << "비밀번호를 입력해주세요.>>";
			cin >> password2;
			if (password2 == b[user2].password) {
				b[user2].changeinformation();
			}
			else {
				cout << "비밀번호가 잘못되었습니다." << endl;
			}

			break;
		case 3:		//도서관 책 list
			cout << "단국 library 도서 정보" << endl;
			for (int i = 0; i < 7; i++) {	//i->booklist 최대 갯수
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
			cout << endl << "찾고 싶은 책의 이름을 입력해주세요 >>";
			cin >> info_b_name;
			
			for (int i = 1; i < 7; i++) {
				if (info_b_name == booklist[i][1]) {
						cout << bookinformation[i - 1] << endl;
						break;
				}
				else {
						cout << "단국 Library에 존재하는 도서가 아닙니다" << endl;
						break;
				}

			}
			cout << endl;
			break;

		case 5:		//대출하기
			char check_id3[100];
			int user3;
			int password3;

			cout << "ID를 입력해주세요 >>";
			cin >> check_id3;
			user3 = 0;
			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id3, b[user3].id) != 0) {
					user3++;
				}
				else { break; }
			}
			//cout << user3;
			cout << "비밀번호를 입력해주세요.>>";
			cin >> password3;
			if (password3 != b[user3].password) {
				cout << "비밀번호가 잘못되었습니다." << endl;
				break;
			}

			cout << endl << "현재 대출 가능한 도서목록" << endl;
			for (int i = 1; i <= 7; i++) {		//대여가능한 도서 목록만 보여줌, i->booklist 최대 갯수
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



		case 6:		//반납하기
			char check_id4[100];
			int user4;
			int password4;

			cout << "ID를 입력해주세요 >>";
			cin >> check_id4;
			user4 = 0;
			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id4, b[user4].id) != 0) {
					user4++;
				}
				else { break; }
			}
			cout << "비밀번호를 입력해주세요.>>";
			cin >> password4;
			if (password4 == b[user4].password) {
				b[user4].return_book();
			}

			else {
				cout << "비밀번호가 잘못되었습니다." << endl;

			}
			break;



		case 7:		//사용자 대출 현황
			char check_id5[100];
			int user5;
			int password5;

			cout << "ID를 입력해주세요 >>";
			cin >> check_id5;
			user5 = 0;
			for (int i = 0; i < 100; i++) {

				if (strcmp(check_id5, b[user5].id) != 0) {
					user5++;
				}
				else { break; }
			}
			cout << "비밀번호를 입력해주세요.>>";
			cin >> password5;
			if (password5 == b[user5].password) {
				b[user5].mybook_list();
			}
			else {
				cout << "비밀번호가 잘못되었습니다." << endl;
			}
			break;


		case 8:		//서비스종료
			cout << "단국 Library Service를 종료합니다." << endl;
			sw = 0;
			break;
		}
	}

}