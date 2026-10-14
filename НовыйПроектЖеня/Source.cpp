#include "iostream"
#include "Windows.h"






void AddProduct(int quantity, int total, int MaxItem)
{
	if (quantity < MaxItem)
	{
		
		MaxItem = MaxItem - quantity;
		
	}
	else
	{
		std::cout << " Место в корзине кончилось";

	}
}

void RemoveProduct(int quantity, int total, int MaxItem, int Category, int Trash, int TrashCategory, int TrashQuantity, int AppleQuantity, int OrangeQuantity,
	int AbricotQuantity, int PearQuantity, int TomatQuantity, int OnionQuantity, int CucumberQuantity, int GarlicQuantity, int ParsleyQuantity)

{
	if (Trash == 0)
	{
		MaxItem = 100;
		std::cout << "Корзина успешно почищена\n Места в корзине:" << MaxItem;
		
	}
	else if (Trash == 1)
	{
		std::cout << "Выберите какой напиток вы хотите удалить\n1:Яблочный Сок\t\t5:Томатный сок\n2:Апельсиновый Сок\t6: Луковый Сок\n3:Абрикосовый Сок\t7: Огуречный сок\n4:Грушевый Сок\t\t8: Чесночный чай" << 
		"\n9: Петрушевый чай ";
		std::cin >> TrashCategory;
		if (TrashCategory == 1)
		{
			std::cout << "Вы заказали " << AppleQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			
			if (TrashQuantity < 0 || TrashQuantity > AppleQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{
				MaxItem = MaxItem - TrashQuantity;
				
				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 2)
		{
			std::cout << "Вы заказали " << OrangeQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > OrangeQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 3)
		{
			std::cout << "Вы заказали " << AbricotQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > AbricotQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 4)
		{
			std::cout << "Вы заказали " << PearQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > PearQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 4)
		{
			std::cout << "Вы заказали " << TomatQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > TomatQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 4)
		{
			std::cout << "Вы заказали " << OnionQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > OnionQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 4)
		{
			std::cout << "Вы заказали " << CucumberQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > CucumberQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 4)
		{ 
			std::cout << "Вы заказали " << GarlicQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > GarlicQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
		else if (TrashCategory == 4)
		{
			std::cout << "Вы заказали " << ParsleyQuantity << " Сока";
			std::cout << "Напишите количество литров яблочного сока которого вы хотите удалить\n";
			std::cin >> TrashQuantity;
			if (TrashQuantity < 0 || TrashQuantity > ParsleyQuantity)
			{
				std::cout << "Количество не должно быть меньше 0";
			}
			else
			{

				if (MaxItem > 100)
				{
					std::cout << "Корзина не может быть больше чем была ";
				}
				else
				{
					MaxItem = MaxItem + TrashQuantity;
					std::cout << "Корзина была успешно почищена, Места в корзине: " << MaxItem;
				}
			}
		}
	}
}
void Buy(int TotalPriceApple, int TotalPriceOrange, int TotalPriceAbricot, int TotalPricePear, int TotalPriceTomat,
	int TotalPriceOnion, int TotalPriceCucumber, int TotalPriceGarlic, int TotalPriceParsley, int answer, int Sum)
{

	std::cout << "В вашей корзине\n" << TotalPriceApple << " Яблочного сока\n" << TotalPriceOrange << " Апельсинового сока\n" << TotalPriceAbricot << " Абрикосового сока\n" << TotalPricePear << " Грушевого сока\n" << TotalPriceTomat << " Томатного сока\n" <<
		TotalPriceOnion << " Лукового сока\n" << TotalPriceCucumber << " Огуречного сока\n" << TotalPriceGarlic << " Чесночного сока\n" << TotalPriceParsley << " Петрушевого сока\n";
	Sum = TotalPriceApple + TotalPriceOrange + TotalPriceAbricot + TotalPricePear + TotalPriceTomat + TotalPriceOnion + TotalPriceCucumber + TotalPriceGarlic + TotalPriceParsley;
	std::cout << "С вас" << Sum << " Рублей\nЖелаете оплатить?\n1:Да\n2:Нет";
	std::cin >> answer;
	if (answer == 1)
	{
		std::cout << "Оплата прошла успешно приходите еще!";
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
	
	int Apple = 55, Orange = 50, Abricot = 60, Pear = 50, Tomat = 45, Onion = 40, Cucumber = 35, GarlicTea = 65, ParsleyTea = 25;
	int AppleQuantity = 0, OrangeQuantity = 0, AbricotQuantity = 0, PearQuantity = 0, TomatQuantity = 0,
		OnionQuantity = 0, CucumberQuantity = 0, GarlicQuantity = 0, ParsleyQuantity = 0;
	int ChooseFruct = 0;
	int chooseOvosh = 0;
	int chooseTea = 0;
	int quantity = 0;
	int MaxItem = 100;
	int backetSize = 0;
	int total = 0;
	int TotalPriceApple = 0, TotalPriceOrange = 0, TotalPriceAbricot = 0, TotalPricePear = 0, TotalPriceTomat = 0, TotalPriceOnion = 0, TotalPriceCucumber = 0, TotalPriceGarlic = 0, TotalPriceParsley = 0;
	int Trash = 1;
	int TrashCategory = 0;
	int TrashQuantity = 0;
	int Sum = 0;
	int answer = 0;

	std::cout << "Добро пожаловать в магазин Соки Александра\n" << "Мы продаем напитки в чаях желаете посмотреть асортимент? \n1:Да\n2:Я просто рядом проходил\n";
	std::cin >> Way;
		if (Way == 1)
		{
			while (true)
			{
				std::cout << "\nВыберите категорию:\n1:Фруктовые\n2:Овощные\n3:Чаи\n0:Перейти к покупке\n4:Убрать из корзины\n";
				std::cin >> Category;
					if (Category == 1)
					{
						std::cout << "Выберите Фруктовые напитки:\n1: Яблочный Сок(55руб\\л)\n2: Апельсиновый сок(50руб\\л)\n3: Абрикосовый сок(50руб\\л)\n4: Грушевый сок(60руб\\л)\n";
						std::cin >> ChooseFruct;
						if (ChooseFruct == 1)
						
						{
							std::cout << "Выберите количество Яблочного сока в литрах: ";
							std::cin >> quantity;
							TotalPriceApple = quantity * Apple;
							
							if (quantity < 0)
								
							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше сока чем есть места в корзине";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								AddProduct(quantity, total, MaxItem);
								std::cout << quantity << " Яблочного сока добавлено в корзину\n";
								std::cout << MaxItem << " Места осталось в корзине\n" << "\nЦена выходит: " << TotalPriceApple;
								AppleQuantity = quantity;
								
								
							}	
							
						}
						else if (ChooseFruct == 2)
						{
							std::cout << "Выберите количество Апельсиного сока в литрах: ";
							std::cin >> quantity;
							TotalPriceOrange = quantity * Orange;
							if (quantity < 0)

							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше сока чем есть места в корзине";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								AddProduct(quantity, total, MaxItem);
								OrangeQuantity = quantity;
								std::cout << quantity << " Апельсинового сока добавлено в корзину\n";
								std::cout << MaxItem << " Места осталось в корзине\n" << "\n Цена выходит: " << TotalPriceOrange;

							}


							
							
						}
						else if (ChooseFruct == 3)
						{
							std::cout << "Выберите количество Абрикосового сока в литрах: ";
							std::cin >> quantity;
							TotalPriceAbricot = quantity * Abricot;
							if (quantity < 0)

							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше сока чем есть места в корзине";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								AddProduct(quantity, total, MaxItem);
								AbricotQuantity = quantity;
								std::cout << quantity << " Абрикосового сока добавлено в корзину\n";
								
								std::cout << MaxItem << " Места осталось в корзине\n" << "\n Цена выходит: " << TotalPriceAbricot;
							}
						}
						else if (ChooseFruct == 4)
						{
							std::cout << "Выберите количество Грушевого сока в литрах: ";
							std::cin >> quantity;
							TotalPricePear = quantity * Pear;
							if (quantity < 0)

							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше сока чем есть места в корзине";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								AddProduct(quantity, total, MaxItem);
								PearQuantity = quantity;
								std::cout << quantity << "  Грушевого сока добавлено в корзину\n";
								std::cout << MaxItem << " Места осталось в корзине\n" << "\n Цена выходит: " << TotalPricePear;
							}
						}
						else
						{
							std::cout << "Такого Напитка не существует ";
						}

					}
					else if (Category == 2)
					{
						std::cout << "Выберите овощные напитки:\n1:Томатный сок(45руб)\n2: Луковый сок(40руб)\n3: Огурченый сок(35руб)\n";
						std::cin >> chooseOvosh;
						if (chooseOvosh == 1)
						{
							std::cout << "Выберите количество томатного сока в литрах: ";
							std::cin >> quantity;
							TotalPriceTomat = quantity * Tomat;
							if (quantity < 0)

							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше сока чем есть места в корзине";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								TomatQuantity = quantity;
								std::cout << quantity << " Томатного сока добавлено в корзину\n" << "\nЦена выходит:" << TotalPriceTomat;
								AddProduct(quantity, total, MaxItem);
							}
							
						}
						else if (chooseOvosh == 2)
						{
							std::cout << "Выберите количество луково сока в литрах: ";
							std::cin >> quantity;
							
							TotalPriceOnion = quantity * Onion;
							if (quantity < 0)

							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше сока чем есть места в корзине";
							}
							else
							{
								AddProduct(quantity, total, MaxItem);
								MaxItem = MaxItem - quantity;
								OnionQuantity = quantity;
								std::cout << quantity << " Лукового сока добавлено в корзину\n";
								std::cout << MaxItem << " Места осталось в корзине\n" << "\n Цена выходит: " << TotalPriceOnion;
							}
						}
						else if (chooseOvosh == 3)
						{
							std::cout << "Выберите количество Огуречного сока в литрах: ";
							std::cin >> quantity;
							
							TotalPriceCucumber = quantity * Cucumber;
							if (quantity < 0)

							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше сока чем есть места в корзине";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								AddProduct(quantity, total, MaxItem);
								CucumberQuantity = quantity;
								std::cout << quantity << " Огуречного сока добавлено в корзину\n";
								std::cout << MaxItem << " Места осталось в корзине\n" << "\n Цена выходит: " << TotalPriceCucumber;
							}
						}
						else
						{
							std::cout << "Некоректный ввод,";
						}
					}
					else if (Category == 3)
					{
						std::cout << "Выберите чайные напитки\n1:Чесночный чай()\n2:Петрушевый чай()";
						std::cin >> chooseTea;
						if (chooseTea == 1)
						{
							std::cout << "Выберите количество Чесночного чая в литрах: ";
							std::cin >> quantity;
							
							TotalPriceGarlic = quantity * GarlicTea;
							if (quantity < 0)

							{
								std::cout << "\nЧисло должно быть больше 0 ";
							}
							else if (quantity > 100)
							{
								std::cout << "Вы не можете положить больше чая чем есть места в корзине";
							}
							else
							{
								MaxItem = MaxItem - quantity;
								AddProduct(quantity, total, MaxItem);
								GarlicQuantity = quantity;
								std::cout << quantity << " Чесночного чая добавлено в корзину\n";
								std::cout << MaxItem << " Места осталось в корзине\n" << "\n Цена выходит: " << TotalPriceGarlic;
							}
						}
						else if (chooseTea == 2)
						{
							std::cout << "Выберите количество Петрушного чая в литрах: ";
							std::cin >> quantity;
							
							if (chooseTea == 1)
							{
								std::cout << "Выберите количество Чесночного чая в литрах: ";
								std::cin >> quantity;
								std::cout << quantity << "\nЧесночного чая было добавлено в корзину";
								if (quantity < 0)

								{
									std::cout << "\nЧисло должно быть больше 0 ";
								}
								else if (quantity > 100)
								{
									std::cout << "Вы не можете положить больше чая чем есть места в корзине";
								}
								else
								{
									MaxItem = MaxItem - quantity;
									AddProduct(quantity, total, MaxItem);
									ParsleyQuantity = quantity;
									std::cout << quantity << " Петрушевого чая добавлено в корзину\n";
									std::cout << MaxItem << " Места осталось в корзине\n" << "\n Цена выходит: " << TotalPriceParsley;
								}
							}
						}
					}
					else if (Category == 4)
					{
							std::cout << "Почистить всю корзину? \n0: Почистить всю\n 1: Почистить самому ";
							std::cin >> Trash;
							RemoveProduct(quantity, total, MaxItem, Category, Trash, TrashCategory, TrashQuantity, AppleQuantity, OrangeQuantity,
								AbricotQuantity, PearQuantity, TomatQuantity, OnionQuantity, CucumberQuantity, GarlicQuantity, ParsleyQuantity);
					}

					else if  (Category == 0)
					{
							
						Buy(TotalPriceApple, TotalPriceOrange, TotalPriceAbricot, TotalPricePear, TotalPriceTomat,
							TotalPriceOnion, TotalPriceCucumber, TotalPriceGarlic, TotalPriceParsley, answer, Sum);

					}


					
				
			}
		}
		else
		{
			std::cout << "До свидания";
		}



	return 0;

}
