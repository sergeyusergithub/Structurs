#include <iostream>
#include <string>


struct Date {
	int day = 1;
	int month = 1;
	int year = 1970;
	std::string note = "empty";
};



void print_date(const Date& D) {
	std::cout << D.day << "." << D.month << "." << D.year << " - " << D.note << std::endl;
}

Date input_date() {
	Date tmp;
	std::cout << "Введите день -> ";
	std::cin >> tmp.day;
	std::cout << "Введите месяц -> ";
	std::cin >> tmp.month;
	std::cout << "Введите год -> ";
	std::cin >> tmp.year;
	std::cin.ignore();
	std::cout << "Введите запись -> ";
	std::getline(std::cin, tmp.note);

	return tmp;
}

void fill_date(Date& D){
	std::cout << "Введите день -> ";
	std::cin >> D.day;
	std::cout << "Введите месяц -> ";
	std::cin >> D.month;
	std::cout << "Введите год -> ";
	std::cin >> D.year;
	std::cin.ignore();
	std::cout << "Введите запись -> ";
	std::getline(std::cin, D.note);
}

struct MyDate {
	int day = 1;
	int month = 1;
	int year = 1970;
};

struct CoinKeeper {
	std::string name = "noname";
	MyDate birthday;
	int coins_number = 0;
	int* coins = nullptr;
};

void print_keeper(const CoinKeeper& CK) {
	std::cout << "Имя: " << CK.name << "\n";
	std::cout << "Дата рождения: " << 
		CK.birthday.day << "." << 
		CK.birthday.month << "." << 
		CK.birthday.year << "\n";
	std::cout << "Монеты: ";
	for (int i = 0; i < CK.coins_number; i++)
		std::cout << CK.coins[i] << ' ';
	std::cout << std::endl;
}

inline int age(const CoinKeeper& CK, int year) {
	return (year - CK.birthday.year);
}

int cash(const CoinKeeper& CK) {
	int sum = 0;
	for (int i = 0; i < CK.coins_number; i++)
		sum += CK.coins[i];

	return sum;
}

struct Point {
	double x{};
	double y{};
};

int compare_distance(Point P1, Point P2) {
	double dist1 = P1.x*P1.x + P1.y*P1.y;
	double dist2 = P2.x * P2.x + P2.y * P2.y;
	if (dist1 > dist2)
		return 1;
	if (dist1 < dist2)  // return dist1 < dist2 ? -1 : 0;
		return -1;

	return 0;	
}

int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251 > null");
		int n;


	// Структуры: создание, мгновенная инициализация, работа с полями

	/*
	//struct Person {
	//	std::string name;
	//	int age;
	//	std::string job;
	//	double salary;
	//} p3, p4{ "Unknow person", 18 };

	//Person p1; // создание объекта на основе структуры Person


	//// инициализация полей объекта p1
	//p1.name = "Tom Smith";
	//p1.age = 25;
	//p1.job = "programmer";
	//p1.salary = 80000;

	//// Вывод полей объекта p1

	//std::cout << "Имя: " << p1.name << std::endl;
	//std::cout << "Возраст: " << p1.age << std::endl;
	//std::cout << "Должность: " << p1.job << std::endl;
	//std::cout << "Зарплата: " << p1.salary << std::endl;
	//std::cout << "--------------------------------------\n";


	//Person p2 {
	//	"Bob Thomas",
	//	45,
	//	"director",
	//	130000
	//};

	//std::cout << "Имя: " << p2.name << std::endl;
	//std::cout << "Возраст: " << p2.age << std::endl;
	//std::cout << "Должность: " << p2.job << std::endl;
	//std::cout << "Зарплата: " << p2.salary << std::endl;

	//p3 = p1; // копирование значений полей объекта p1 в поля объекта p3 */




	// Указатели и функции при работе со структурами

	/*Date d1;

	print_date(d1);


	Date* pd1 = &d1;

	std::cout << "День: " <<  pd1->day << std::endl; // Обращение к полю day через указатель на объект d1

	std::cout << std::endl;

	std::cout << "Ввод данных в объект:\n";

	//Date d2 = input_date();

	Date d2;
	fill_date(d2);

	print_date(d2);

	*/

	// Задача 1. Хранитель монет
		/*std::cout << "Задача 1.\n";

		CoinKeeper ck{
			"Robert Polson",
			{11, 2, 2010 },
			5,
			new int[5] {10, 2, 5, 2, 1}
		};

		print_keeper(ck);

		std::cout << "Возраст: " << age(ck, 2023) << std::endl;

		std::cout << "Общие сбережения: " << cash(ck) << std::endl;

	delete[] ck.coins; */

	// Задача 2. Точки в плоскости

	std::cout << "Задача 2.\n";

	Point A{2.2, 5.0}, B{7.1, 6.8};

	std::cout << compare_distance(A, B) << std::endl;
	std::cout << compare_distance({ 5.5, 1.1 }, {3.3, 0.77}) << std::endl;
	std::cout << compare_distance({5.5, 1.1}, {-1.1, 5.5}) << std::endl;



	return 0;
}