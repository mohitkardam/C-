
#include<iostream>
#include<mutex>
#include<thread>
using namespace std;

mutex mtx; // global mutex

void fun(int x)
{
	while (x-- > 0)
	{
		mtx.lock();
		cout << x << endl;
		mtx.unlock();
	}
}

void fun1(int y)
{
	while (y-- > 50)
	{
		mtx.lock();
		cout << y << " ";
		mtx.unlock();
	}
}

int main()
{
	thread t1(fun, 50);
	t1.join();
	thread t2(fun1, 100);
	t2.join();
	return 0;
}
