#include <iostream>

using std::cout;
using std::endl;

void healByValue(int hp, const int amount) //복사본 사용하는 거
{
	hp += amount;
	cout << "hp = " << hp << endl; //원본의 복사본 전달(원본 hp 변화 없음)
}

void healByReference(int& hp, const int amount)
{
	hp += amount;
	if (hp > 100)
	{
		hp = 100;
	}
	cout << "hp = " << hp << endl; //참조 전달(원본 hp 바뀜)
}

int main()
{
	int hp = 70;

	cout << "처음 체력 : " << hp << endl;

	healByValue(hp, 20); //70+20
	cout << "체력 : " << hp << "(그대로)" << endl; //70

	healByReference(hp, 20); //90
	cout << "체력 : " << hp << "(회복!)" << endl;

	healByReference(hp, 50); //90+50 -> 100
	cout << "체력 : " << hp << "(최대 100)" << endl;
}