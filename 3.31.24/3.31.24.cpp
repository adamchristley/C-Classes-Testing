#include <iostream>
#include <string>
using namespace std;

class player
{
private:
	int p;
	string Gun;
	string rank;
	string skin;
public:

	player(int pnum, string MainGun, string r, string FavSkin) : p(pnum), Gun(MainGun), rank(r), skin(FavSkin) {}

	void playerinfo()
	{
	cout << "what is the your #? " << endl;
	cin >> p;
	cout << "what is your favorite gun? " << endl;
	cin >> Gun;
	cout << "what is your peak rank? " << endl;
	cin >> rank;
	cout << "what is your favorite skin? " << endl;
	cin >> skin;
	}


};

int main()
{
	player player1(3, "", "", "");
	player playerinfo();
	return 0;
}