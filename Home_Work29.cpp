#include <iostream>
#include <string>
using namespace std;

struct Harazh
{
	int size_h = 10;
	int size_c = 3;
	int num_car;
	string s_num;
	string color_car;
	string model_car;

	string** cars = new string *[size_h];

	void creat_car()
	{
		for (int i = 0; i < size_h; i++)
		{
			cars[i] = new string[size_c];
		}
	}

	void add_car()
	{
		for (int i = 0; i < size_h; i++)
		{
			for (int j = 0; j < size_c; j++)
			{
				cout << "Enter model car: " << endl;
				cin >> cars[i][j];
				cars[i][j] = model_car;
				j++;
				cout << "Enter color car: " << endl;
				cin >> cars[i][j];
				cars[i][j] = color_car;
				j++;
				cout << "Enter num car (4 digits): " << endl;
				cin >> num_car;
				cars[i][j] = to_string(num_car);
			}
		}
	}

	void search_car()
	{
		cout << "Enter search number car: ";
		cin >> s_num;
		for (int i = 0; i < size_h; i++)
		{
			if (s_num == cars[i][2])
			{
				cout << "Yes" << endl;
				break;
			}
		}
	}

	void show_car()
	{
		for (int i = 0; i < size_h; i++)
		{
			for (int j = 0; j < size_c; j++)
			{
				cout << cars[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	Harazh Cars;
	Cars.creat_car();
	Cars.add_car();
	Cars.show_car();
	Cars.search_car();
}