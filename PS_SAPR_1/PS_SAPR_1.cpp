
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

const std::string SPLITTER = "---------------------------------------------------------------";
const int DRP_SIDE = 25;

//int DRP[DRP_SIDE][DRP_SIDE] = {
//-1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//-1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//};

void PRINT_DRP(int DRP[DRP_SIDE][DRP_SIDE])
{
	std::cout << std::endl << SPLITTER << std::endl;
	for (int i = 0; i < DRP_SIDE; i++)
	{
		for (int j = 0; j < DRP_SIDE; j++)
		{
			switch (DRP[i][j])
			{
			case 0: std::cout  << std::setw(4) << "."; break;
			case -1: std::cout << std::setw(4) << "#"; break;
			case -2: std::cout << std::setw(4) << "A"; break;
			case -3: std::cout << std::setw(4) << "B"; break;
			case -6: std::cout << std::setw(4) << "&"; break;
			default: std::cout << std::setw(4) << DRP[i][j]; break;
			}
			if (j == 24)
			{
				std::cout << std::endl;
			}
		}
	}
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int DRP[DRP_SIDE][DRP_SIDE];

	if (argc > 1)
	{
		std::string path = argv[1];
		std::ifstream fin(path);
		if (fin.is_open())
		{
			for (size_t i = 0; i < DRP_SIDE; i++)
			{
				for (size_t j = 0; j < DRP_SIDE; j++)
				{
					fin >> DRP[i][j];
					if (fin.eof())
					{
						break;
					}
				}
			}
		}
		else
		{
			std::cout << "Проверьте корректность введенного аргумента!";
			return 1;
		}
	}
	else
	{
		std::cout << "В командную строку не передан аргумент с именем файла" << std::endl;
		return 0;
	}

	PRINT_DRP(DRP);

	std::string PATH_OUT = "out.txt";

	int AX, AY, BX, BY;
	bool CORRECT_INPUT = false;
	
	while (!CORRECT_INPUT)
	{
		std::cout << std::endl << SPLITTER << std::endl;
		int inputCount = 0;
		std::cout << "Диапазон координат (0,0) -> (24,24)" << std::endl;
		std::cout << "Введите X координату точки А:";
		std::cin >> AX;
		if ((AX>=0)&&(AX<25))
		{
			inputCount++;
		}
		else
		{
			std::cout << "Ошибка. Некорректный ввод.";
			continue;
		}

		std::cout << "Введите Y координату точки А:";
		std::cin >> AY;
		if ((AY >= 0) && (AY < 25))
		{
			inputCount++;
		}
		else
		{
			std::cout << "Ошибка. Некорректный ввод.";
			continue;
		}

		if (DRP[AX][AY] == -1)
		{
			std::cout << "Точка попала на преграду.";
			continue;
		}

		std::cout << "Введите X координату точки B:";
		std::cin >> BX;
		if ((BX >= 0) && (BX < 25))
		{
			inputCount++;
		}
		else
		{
			std::cout << "Ошибка. Некорректный ввод.";
			continue;
		}

		std::cout << "Введите Y координату точки B:";
		std::cin >> BY;
		if ((BY >= 0) && (BY < 25))
		{
			inputCount++;
		}
		else
		{
			std::cout << "Ошибка. Некорректный ввод.";
			continue;
		}

		if (DRP[BX][BY] == -1) 
		{
			std::cout << "Точка попала на преграду.";
			continue;
		}

		if ((AX == BX) && (AY == BY))
		{
			std::cout << "Наложение точек.";
			continue;
		}

		if ((abs(BX-AX)<1)&&(abs(BY-AY)<1))
		{
			std::cout << "Соседство. Длина пути: 1";
			return 0;
		}

		if (inputCount==4)
		{
			CORRECT_INPUT = true;
			DRP[AX][AY] = -2;
			DRP[BX][BY] = -3;
		}
	}

	PRINT_DRP(DRP);

	std::cout << std::endl << SPLITTER << std::endl;

	int move_x[4] = {1, 0, -1, 0};   // смещения
	int move_y[4] = {0, 1, 0, -1};   
	int wave = 1;
	

	for (int i = 0; i < DRP_SIDE; i++)
	{
		for (int j = 0; j < DRP_SIDE; j++)
		{
			if (DRP[i][j] == -2)
			{
				for (int k = 0; k < 4; k++)
				{
					int dy = i + move_y[k], dx = j + move_x[k];
					if ((dy >= 0) && (dy < DRP_SIDE) && (dx >= 0) && (dx < DRP_SIDE) && (DRP[dy][dx] == 0))
					{
						DRP[dy][dx] = 1;
					}
				}
			}
		}
	}
	std::cout << "Первая волна" << std::endl;
	PRINT_DRP(DRP);

	int routeTraced = 0;
	int neighboursChanged = 0;
	int temp = 0;
	int routeLen = 0;

	while(routeTraced == 0)
	{
		for (int i = 0; i < DRP_SIDE; i++)
		{
			for (int j = 0; j < DRP_SIDE; j++)
			{

				if (DRP[i][j] == wave)
				{
					for (int k = 0; k < 4; k++)
					{
						int dy = i + move_y[k], dx = j + move_x[k];
						if ((dy >= 0) && (dy < DRP_SIDE) && (dx >= 0) && (dx < DRP_SIDE) && (DRP[dy][dx] == 0))
						{
							DRP[dy][dx] = wave + 1;
							neighboursChanged++;
						}
					}
				}
			}
		}
		if (neighboursChanged != temp)
		{
			temp = neighboursChanged;
		}
		else
		{
			routeTraced = 2;
			break;
		}

		
		for (int i = 0 ; i < 4; i++)
		{
			int dy = BY + move_y[i], dx = BX + move_x[i];
			if ((dy >= 0) && (dy < DRP_SIDE) && (dx >= 0) && (dx < DRP_SIDE))
			{
				if ((DRP[dy][dx] != 0) && (DRP[dy][dx] != -1))
				{
					routeTraced = 1;
					routeLen = wave + 1;
				}
			}
		}

		wave++;
	} 

	PRINT_DRP(DRP);
	
	if (routeTraced == 1)
	{

		int routeBX, routeBY;
		routeBX = BY;
		routeBY = BX;
		
		while (wave>0)
		{
			for (int k = 0; k < 4; k++)
			{
				int dy = routeBY + move_y[k], dx = routeBX + move_x[k];
				if ((dy >= 0) && (dy < DRP_SIDE) && (dx >= 0) && (dx < DRP_SIDE) && (DRP[dy][dx] > 0)&&(DRP[dy][dx]!=-6))
				{
					if (DRP[dy][dx]<=wave)
					{
						DRP[dy][dx] = -6;
						routeBX = dx;
						routeBY = dy;
						wave--;
					}
				
				}
			}
		}

	PRINT_DRP(DRP);
	}


	if (routeTraced == 1)
	{
		std::cout << std::endl << "Длина пути: " << routeLen;
	}
	if (routeTraced == 2)
	{
		std::cout << std::endl << "Ты не пройдешь!";
	}

	if (routeTraced == 1)
	{
		std::ofstream fout(PATH_OUT);
		if (fout.is_open())
		{
			for (int i = 0; i < DRP_SIDE; i++)
			{
				for (int j = 0; j < DRP_SIDE; j++)
				{
					switch (DRP[i][j])
					{
					case 0: fout << std::setw(4) << "."; break;
					case -1: fout << std::setw(4) << "#"; break;
					case -2: fout << std::setw(4) << "A"; break;
					case -3: fout << std::setw(4) << "B"; break;
					case -6: fout << std::setw(4) << "&"; break;
					default: fout << std::setw(4) << DRP[i][j]; break;
					}
					if (j == 24)
					{
						fout << std::endl;
					}
				}
			}
		}
		fout.close();
	}
	

	return 0;
}
