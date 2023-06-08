#include <iostream>

using namespace std;

struct Hotel
{
	int sizehotel1 = 15;
	int sizehotel2 = 2;
	int num_room;

	string** rooms = new string*[sizehotel1];

	void creat_hotel()
	{
		for (int i = 0; i < sizehotel1; i++)
		{
			rooms[i] = new string[sizehotel1];
		}
	}

	void add_persons()
	{
		for (int i = 0; i < sizehotel1; i++)
		{
			for (int j = 0; j < sizehotel2; j++)
			{
				rooms[i][j] = "A";
			}
		}
	}

	void show_hotel()
	{
		for (int i = 0; i < sizehotel1; i++)
		{
			for (int j = 0; j < sizehotel1; j++)
			{
				cout << rooms[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	Hotel Tustan;
	Tustan.creat_hotel();
	Tustan.add_persons();
	Tustan.show_hotel();
}
