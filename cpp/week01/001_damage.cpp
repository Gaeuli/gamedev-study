#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline int damage(const int attack, const int defense)
{
	int result = attack - defense;
	if (result < 0)
	{
		result = 0;
	}
	return result;
}

inline int finalDamage(const int attack, const int defense, const bool isCritical)
{
	int base = damage(attack, defense);
	return isCritical ? base * 2 : base;
}

int main()
{
	int defense;
	cout << "적의 방어력을 입력하세요 : ";
	cin >> defense;

	for (int attack = 10; attack <= 50; attack += 10)
	{
		cout << "공격력 " << attack
			<< " -> 피해량 " << damage(attack, defense)
			<< " (치명타: " << finalDamage(attack, defense, true) << ")" << endl;
	}
}

