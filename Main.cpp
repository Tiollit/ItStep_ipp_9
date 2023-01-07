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

Library Inf(Library Book[10],int M)
{
	int I1, I2, k;
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
	cout << "end for Type: 1 - for Name, 2 - for Autor, 3 - for Publish, 4 - for Genre" << endl;
	cin >> I1 >> I2;
	cout << "Insert new Information: " << endl;
	if (I2 == 1) cin >> Book[I1].Name;
	else if (I2 == 2) cin >> Book[I1].Autor;
	else if (I2 == 3) cin >> Book[I1].Publish;
	else if (I2 == 3) cin >> Book[I1].Genre;
	cout << "If you want to put aditional information tap 1, if you to return in main menu tap 0" << endl;
	cin >> k;
	if (k == 1) return Inf(Book, M + 1);
	else if (k == 0) return Book[10];
}

void Print(Library Book[10])
{
	for (int i = 0; i < 10; i++)
	{
		cout << Book[i].Name << ", " << Book[i].Autor << ", " << Book[i].Publish << ", " << Book[i].Genre << endl;
	}
}

void SAutor(Library Book[10])
{
	char Au[30];
	cout << "Incert the Autor: " << endl;
	gets_s(Au);
	for (int i = 0; i < 10; i++)
	{
		if (Book[i].Autor == Au)
		{
			cout << i << ": " << Book[i].Name << ", " << Book[i].Autor << ", " << Book[i].Publish << ", " << Book[i].Genre << endl;
		}		
	}
}

int main()
{
	int N, M = 0;
	Library Book[10];
	Book[0] = { "The House in the Pines","Ana Reyes","New York Times","Novel" };
	Book[1] = { "A World of Curiosities","Louise Penny","New York Times","Novel" };
	Book[2] = { "Queen of Myth and Monsters","Scarlett St. Clair","Indigo","Novel" };
	Book[3] = { "What's for Dessert","Claire Saffitz","New York Times","Cookbook" };
	Book[4] = { "Pageboy","Elliot Page","Self-published","Memoir" };
	Book[5] = { "Our Book of Awesome","Neil Pasricha","New York Times","Self-Help"};
	Book[6] = { "Elizabeth Taylor: The Grit & Glamour Of An Icon","Kate Andersen Brower","New York Times","Biography"};
	Book[7] = { "The Choice: The Dragon Heart Legacy","Nora Roberts","New York Times","Fantasy"};
	Book[8] = { "The Lost Metal","Brandon Sanderson","New York Times","Novel" };
	Book[9] = { "Bloodmarked","Tracy Deonn","New York Times","Fantasy"};
	cout << "To move thought Library use numbers: " << endl;
	cout << "If You want to change information inside of book put 1" << endl;
	cout << "If You want to print all library put 2" << endl;
	cout << "if you want to find a book based on Autor tape 3" << endl;
	cin >> N;
	if (N == 1)
	{
		Inf(Book, M);
	}
	else if (N == 2)
	{
		Print(Book);
	}	
	else if (N == 3)
	{
		SAutor(Book);
	}
	return 0;
}