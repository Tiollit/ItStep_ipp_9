#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct Library
{
	char Name[50];
	char Autor[30];
	char Publish[100];
	char Genre[20];
};

int main()
{
	int N, * I;
	Library Book[10];
	Book[0] = { "The House in the Pines", "Ana Reyes", "New York Times", "Novel" };
	Book[1] = { "A World of Curiosities", "Louise Penny", "New York Times","Novel" };
	Book[2] = { "Queen of Myth and Monsters", "Scarlett St. Clair", "Indigo","Novel" };
	Book[3] = { "What's for Dessert", "Claire Saffitz", "New York Times", "Cookbook" };
	Book[4] = { "Pageboy", "Elliot Page", "Self-published", "Memoir" };
	Book[5] = { "Our Book of Awesome", "Neil Pasricha", "New York Times", "Self-Help"};
	Book[6] = { "Elizabeth Taylor: The Grit & Glamour Of An Icon", "Kate Andersen Brower", "New York Times", "Biography"};
	Book[7] = { "The Choice: The Dragon Heart Legacy", "Nora Roberts", "New York Times", "Fantasy"};
	Book[8] = { "The Lost Metal", "Brandon Sanderson", "New York Times", "Novel" };
	Book[9] = { "Bloodmarked", "Tracy Deonn", "New York Times", "Fantasy"};
	cout << "To move thought Library use numbers: " << endl;
	cout << "If You want to change information inside of book put 1" << endl;
	cin >> N;
	if (N == 1)
	{
		cout << "To change Information inside of book - choose Book and type: " << endl;
		cout << " 0 for " << Book[0].Name << endl;
		cout << " 1 for " << Book[1].Name << endl;
		cout << " 2 for " << Book[2].Name << endl;
		cout << " 3 for " << Book[3].Name << endl;
		cout << " 4 for " << Book[4].Name << endl;
		cout << " 5 for " << Book[5].Name << endl;
		cout << " 6 for " << Book[6].Name << endl;
		cout << " 7 for " << Book[7].Name << endl;
		cout << " 8 for " << Book[8].Name << endl;
		cout << " 9 for " << Book[9].Name << endl;
		cout << "End for Type: 1 - for Name, 2 - for Autor, 3 - for Publish, 4 - for Genre" << endl;
	}
	cout << endl;
	return 0;
}