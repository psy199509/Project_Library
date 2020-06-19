#pragma once
#ifndef Library_H
#define Library_H
//using namespace std;

__declspec(selectany) std::string booklist[][6] = { {"책num","책이름","작가","출판사","출판연도","대출여부"},
							{"가","운영체제","라라","공대","1990년","o"},
							{"나","C언어","나나","예대","2020년","o"},
							{"다","C++프로그래밍","다다","상경대","1985년","o"},
							{"라","JAVA","미미","1공","1970년","o"},
							{"마","매트랩","이이","2공","2000년","o"},
							{"바","HTML5","토토","3공","2010년","o"},
							{"사","DB","로로","법대","2005년","o"},
};
static std::string bookinformation[] = { //책 번호 , 책 위치 , 책내용
{"책 위치 : 3층 예체능실 3-1 / 요약 : 운영체제에 대한 기초적인 내용을 배우고 싶은 사람들을 위한 책"},
{"책 위치 : 3층 예체능실 3-5 / 요약 : 프로그래밍이 처음이라면 C언어부터"},
{"책 위치 : 5층 1사회과학실 5-3 / 요약 : C++ 지금 당장 시작하세요!"},
{"책 위치 : 5층 1사회과학실 5-3 / 요약 : JAVA의 기초부터 고급까지 한번에"},
{"책 위치 : 3층 예체능실 3-2 / 요약 : 엔지니어 및 과학자를 위한 가장 쉽고도 생산적인 소프트웨어"},
{"책 위치 : 5층 2사회과학실 5-9 / 요약 : 웹프로그래밍 입문자들도 쉽게 이해할 수 있도록 제작한 책"},
{"책 위치 : 5층 2사회과학실 5-6 / 요약 : 기초 강좌, 대용량 데이터 추출, SQL 쿼리문 작성, 데이터 베이스의 이해"}
};

class library {
public:
	char id[100];// 사용자 id
	int password = 0;//도서관 id의 비번
	char name[100];//사용자 이름
	char address[100];//주소
	double phone = 0;//전화번호
	int age = 0;//사용자 나이

	std::string borrow_list[100];//대출 된 책
	int borrowbook_num = 0; //대출 책 수
	std::string my_list[100];//이때까지 빌렸던 책
	int total = 0;//이때까지 빌렸던 책의 수

	void setlibrary();
	void changeinformation();
	void borrow_book();
	void return_book();
	void mybook_list();
};

#endif
