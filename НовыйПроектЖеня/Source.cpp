#include "iostream"
#include "Windows.h"



void AddProduct(int MaxBacket, double price, int quantityFruct, int backet, int backetSize)
{
	for (int i = 0; i < MaxBacket; i++)
	{
		if ()
		{

		}
	}
}








int main()
{
	
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	int	Way = 0;
	int Category = 0;
	double price = 0;
	
	
	int ChooseFruct = 0;
	int chooseOvosh = 0;
	int chooseTea = 0;
	int quantityFruct = 0;
	int quantityOvosh = 0;
	int quantityTea = 0;
	int apple = 50;
	int orange = 50;
	int apricot = 50;
	int pear = 60;
	const int MaxBacket = 100;
	int backet[MaxBacket];
	int backetSize = 0;
	
	
	
	std::cout << "Добро пожаловать в магазин Соки Александра\n" << "Мы продаем напитки в чаях желаете посмотреть асортимент? \n1:Да\n2:Я просто рядом проходил\n";
	std::cin >> Way;
		if (Way == 1)
		{
			while (true)
			{
				std::cout << "Выберите категорию:\n1:Фруктовые\n2:Овощные\n3:Чаи\n0:Перейти к покупке\n";
				std::cin >> Category;
					if (Category == 1)
					{
						std::cout << "Выберите Фруктовые напитки:\n1: Яблочный Сок(55руб)\n2: Апельсиновый сок(50руб)\n3: Абрикосовый сок(50руб)\n4: Грушевый сок(60руб)\n";
						std::cin >> ChooseFruct;
						if (ChooseFruct == 1)
						{
							std::cout << "Выберите количество Яблочного сока в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nЯблочного сока добавлено в корзину ";
							
							
						}
						else if (ChooseFruct == 2)
						{
							std::cout << "Выберите количество Апельсиного сока в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nАпельсиного сока добавлено в корзину ";
							
						}
						else if (ChooseFruct == 3)
						{
							std::cout << "Выберите количество Абрикосового сока в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nАбрикосового сока добавлено в корзину ";
							
						}
						else if (ChooseFruct == 4)
						{
							std::cout << "Выберите количество Грушевого сока в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nГрушевого сока добавлено в корзину ";
							
						}
						else
						{
							std::cout << "Некоректный ввод данных";
						}

					}
					else if (Category == 2)
					{
						std::cout << "Выберите овощные напитки:\n 1:Томатный сок(45руб)\n2: Луковый сок(40руб)\n3: Огурченый сок(35руб)\n";
						std::cin >> chooseOvosh;
						if (chooseOvosh == 1)
						{
							std::cout << "Выберите количество томатного сока в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nТоматного сока было добавленно в корзину ";
							
						}
						else if (chooseOvosh == 2)
						{
							std::cout << "Выберите количество луково сока в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nЛуково сока было добавленно в корзину";
							
						}
						else if (chooseOvosh == 3)
						{
							std::cout << "Выберите количество Огуречного сока в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nОгуречного сока было добавленно в корзину";
							
						}
						else
						{
							std::cout << "Некоректный ввод,";
						}
					}
					else if (Category == 3)
					{
						std::cout << "Выберите чайные напитки\n1: Чесночный чай\n2:Петрушевый чай";
						std::cin >> chooseTea;
						if (chooseTea == 1)
						{
							std::cout << "Выберите количество Чесночного чая в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nЧесночного чая было добавлено в корзину";
							
						}
						else if (chooseTea == 2)
						{
							std::cout << "Выберите количество Петрушного чая в литрах: ";
							std::cin >> quantityFruct;
							std::cout << quantityFruct << "\nПетрушного чая было добавлено в корзину";
						
						}
					}
					else if (Category == 0)
					{
						

					}

					
			}
		}
		else
		{
			std::cout << "До свидания";
		}



	return 0;

}
