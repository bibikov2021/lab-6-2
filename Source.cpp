#include <iostream>
using namespace std;

int limit(int left, int right, double* n) {
	while (*n < left || *n > right)
	{
		cout << "„исло выходит за указанные лимиты, введите повторно: ";
		cin >> *n;
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
	cout << "¬ведите число: ";
	cin >> n;
	cout << limit(1, 10, &n) << endl;


	return 0;
}