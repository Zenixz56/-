#include "iostream"
#include "Windows.h"






void AddProduct(int quantity, int total, int MaxItem)
{
	if (total + quantity < MaxItem)
	{
		quantity = MaxItem - total;
		std::cout << quantity << " Места осталось в корзине";
	}
	else
	{
		std::cout << "Место в корзине кончилось";

	}
}

void RemoveProduct(int quantity, int total, int MaxItem, int Category, int Trash, int TrashCategory)

{
	if (Trash == 0)
	{
		MaxItem = 100;
		std::cout << "Корзина успешно почищена\n Места в корзине:" << MaxItem;
		
	}
	else if (Trash == 1)
	{
		std::cout << "Выберите какой фруктовый сок вы хотите удалить\n1:Яблочный\n2:Апельсиновый\n3:Абрикосовый\n4:Грушевый";
		std::cin >> TrashCategory;
		if (TrashCategory == 1)
		{
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			
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
	
	int Apple = 55, Orange = 50,Abricot = 60, Pear = 50, 
	int AppleQuantity = 0, OrangeQuantity = 0, AbricotQuantity = 0, PearQuantity = 0,
	int ChooseFruct = 0;
	int chooseOvosh = 0;
	int chooseTea = 0;
	int quantity = 0;
	int MaxItem = 100;
	int backetSize = 0;
	int total = 0;
	int TotalPrice = 0;
	int Trash = 1;
	int TrashCategory = 0;



	std::cout << "Добро пожаловать в магазин Соки Александра\n" << "Мы продаем напитки в чаях желаете посмотреть асортимент? \n1:Да\n2:Я просто рядом проходил";
	std::cin >> Way;
		if (Way == 1)
		{
			while (true)
			{
				std::cout << "\nВыберите категорию:\n1:Фруктовые\n2:Овощные\n3:Чаи\n0:Перейти к покупке\n4:Убрать из корзины";
				std::cin >> Category;
					if (Category == 1)
					{
						std::cout << "Выберите Фруктовые напитки:\n1: Яблочный Сок(55руб\\л)\n2: Апельсиновый сок(50руб\\л)\n3: Абрикосовый сок(50руб\\л)\n4: Грушевый сок(60руб\\л)\n";
						std::cin >> ChooseFruct;
						if (ChooseFruct == 1)
						
						{
							std::cout << "Выберите количество Яблочного сока в литрах: ";
							std::cin >> quantity;
							TotalPrice = quantity * Apple;
							if (quantity < 0)
								
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								AppleQuantity = quantity;
								std::cout << quantity << " Яблочного сока добавлено в корзину\n" << "\n Цена выходит:" << TotalPrice;
								AddProduct(quantity, total, MaxItem);
							}
							
						}
						else if (ChooseFruct == 2)
						{
							std::cout << "Выберите количество Апельсиного сока в литрах: ";
							std::cin >> quantity;
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
							
							MaxItem = MaxItem - quantity;

							std::cout << quantity << " Апельсиного сока добавлено в корзину\n";
							AddProduct(quantity, total, MaxItem);

							}


							
							
						}
						else if (ChooseFruct == 3)
						{
							std::cout << "Выберите количество Абрикосового сока в литрах: ";
							std::cin >> quantity;
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;

								std::cout << quantity << " Абрикосового сока добавлено в корзину\n";
								AddProduct(quantity, total, MaxItem);
							}
						}
						else if (ChooseFruct == 4)
						{
							std::cout << "Выберите количество Грушевого сока в литрах: ";
							std::cin >> quantity;
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;

								std::cout << quantity << " Грушевого сока добавлено в корзину\n";
								AddProduct(quantity, total, MaxItem);
							}
						}
						else
						{
							std::cout << "Такого сока не существует ";
						}

					}
					else if (Category == 2)
					{
						std::cout << "Выберите овощные напитки:\n 1:Томатный сок(45руб)\n2: Луковый сок(40руб)\n3: Огурченый сок(35руб)\n";
						std::cin >> chooseOvosh;
						if (chooseOvosh == 1)
						{
							std::cout << "Выберите количество томатного сока в литрах: ";
							std::cin >> quantity;
							std::cout << quantity << "\nТоматного сока было добавленно в корзину ";
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;

								std::cout << quantity << " Томатного сока добавлено в корзину\n";
								AddProduct(quantity, total, MaxItem);
							}

							
						}
						else if (chooseOvosh == 2)
						{
							std::cout << "Выберите количество луково сока в литрах: ";
							std::cin >> quantity;
							std::cout << quantity << "\nЛуково сока было добавленно в корзину";
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;

								std::cout << quantity << " Луково сока добавлено в корзину\n";
								AddProduct(quantity, total, MaxItem);
							}
						}
						else if (chooseOvosh == 3)
						{
							std::cout << "Выберите количество Огуречного сока в литрах: ";
							std::cin >> quantity;
							std::cout << quantity << "\nОгуречного сока было добавленно в корзину";
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;

								std::cout << quantity << " Огуречного сока добавлено в корзину\n";
								AddProduct(quantity, total, MaxItem);
							}
						}
						else
						{
							std::cout << "Некоректный ввод,";
						}
					}
					else if (Category == 3)
					{
						std::cout << "Выберите чайные напитки\n1: Чесночный чай()\n2:Петрушевый чай()";
						std::cin >> chooseTea;
						if (chooseTea == 1)
						{
							std::cout << "Выберите количество Чесночного чая в литрах: ";
							std::cin >> quantity;
							std::cout << quantity << "\nЧесночного чая было добавлено в корзину";
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;

								std::cout << quantity << " Чесночного чая добавлено в корзину\n";
								AddProduct(quantity, total, MaxItem);
							}
						}
						else if (chooseTea == 2)
						{
							std::cout << "Выберите количество Петрушного чая в литрах: ";
							std::cin >> quantity;
							std::cout << quantity << "\nПетрушного чая было добавлено в корзину";
							if (quantity < 0)
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else
							{
								MaxItem = MaxItem - quantity;

								std::cout << quantity << " Петрушного чая добавлено в корзину\n";
								AddProduct(quantity, total, MaxItem);
							}
						
						}
					}
					else if (Category == 4)
					{
						std::cout << "Что вы хотите убрать из корзины\n1:Фруктовые соки,\n2:Овощные соки\n3:Чаи\n0:Почистить всю корзину";
						std::cin >> Trash;
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
