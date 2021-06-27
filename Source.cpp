#include <iostream>
using namespace std;


void func_a(int* l, int* r, double* n) {
 cout << endl;
//вывод меню
 cout << "1.Ввод верхнего предела" << endl;
 cout << "2.Ввод нижнего предела" << endl;
 cout << "3. Изменить входящее число" << endl;
 cout << "4. Выход из программы" << endl;
 int number;
//выбор из меню
 cin >> number;
 if (number == 1) {
  cout << "Введите верхний предел заново: " << endl;
  cin >> *r;

 }
 else if (number == 2) {
  cout << "Введите нижний предел заново: " << endl;
  cin >> *l;

 }
 else if (number == 3) {
  cout << "Введите новое число: " << endl;
  cin >> *n;
 }
 else exit(0); // выход из программы
}




int limit(int left, int right, double* n) {
	while (*n < left || *n > right)
	{
		cout << "Число выходит за указанные лимиты, введите повторно: ";
		func_a(&left,&right,n);
	}

	if (floor(*n) == *n) {
		
		return *n;
	}
	else {
		return (int(*n));
	}
}


int main() {
	setlocale(LC_ALL, "Rus");
	double n;
	cout << "Введите число: ";
	cin >> n;
	cout << limit(1, 10, &n) << endl;


	return 0;
}
