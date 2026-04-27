#include <iostream> // активируем библиотеку ввода вывода

// using namespace std; // дикларируем прстранство имен чтобы везде не писать его

int main() {
	setlocale(LC_ALL, "ru_RU.UTF-8"); // активируем распознование Русского
	// рандом
	//int result = 1 + rand() % 20; // случайное число от 1 до 20 иначе от 0 до 1
	//std::cout << result << std::endl;

	// калькулятор
	float num1, num2, res; //задаем переменные c точками
	std::cout << "Введите num1: "; // вывод на экран
	std::cin >> num1; // запрашиваем ввод у оператора

	std::cout << "Введите num2: ";
	std::cin >> num2;

	//+, -, *, /
	char math; // задаем переменную 1 символа
	std::cout << "Введите математический символ: ";
	std::cin >> math;

	//блок условий
	/*if (math == '+')
		res = num1 + num2;
	else if (math == '-')
		res = num1 - num2;
	else if (math == '*')
		res = num1 * num2;
	else if (math == '/')
		res = num1 / num2;*/

	switch (math) {
	case '+': res = num1 + num2; break;
	case '-': res = num1 - num2; break;
	case '*': res = num1 * num2; break;
	case '/': res = num1 / num2; break;
	default:
		res = 0;
		std::cout << "Error";
		break;
	}

	std::cout << "Результат: " << res << std::endl;

	return 0;


}