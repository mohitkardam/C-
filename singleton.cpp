#include<iostream>
using namespace std;
//class gamesetting
//{
//private:
//	static gamesetting* instance;
//	int length;
//	int breadth;
//	gamesetting() :length(22), breadth(44) {}
//public:
//	static gamesetting* getinstance()
//	{
//		if (instance == NULL)
//			instance = new gamesetting();
//		return instance;
//	}
//	void displaysetting()
//	{
//		cout << "length:" << length << endl;
//		cout << "breadth:" << breadth << endl;
//
//	}
//};
//gamesetting* gamesetting::instance = NULL;
//int main()
//{
//	gamesetting* setting = gamesetting::getinstance();
//	setting->displaysetting();
//	return 0;
//}


//Run Time Singleton
class gamesetting
{
private:
	static gamesetting* instance;
	int *length;
	int *breadth;
	gamesetting(int x, int y)
	{
		length = new int(x);
		breadth = new int(y);
	}
public:
	static gamesetting* getinstance(int x,int y)
	{
		if (instance == NULL)
			instance = new gamesetting(x,y);
		return instance;
	}
	void displaysetting()
	{
		cout << "length:" << *length << endl;
		cout << "breadth:" << *breadth << endl;

	}
};
gamesetting* gamesetting::instance = NULL;
int main()
{
	gamesetting* setting = gamesetting::getinstance(11,22);
	setting->displaysetting();
	return 0;
}