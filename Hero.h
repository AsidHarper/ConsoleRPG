#pragma once
class Hero{
private:
	int MaxHealth = 0;
	int Health = 0;
	int Mana = 0;
	int Damage = 0;
	int Action = 0;
	int BAction = 0;
	int ArmorQuality = 0;
	int WeaponQuality = 0;
	int HealhtPotionAmount = 0;
	int ManaPotionAmount = 0;
	int PotionsQuality = 0;
	int FireSpell = 0;
public:
	Hero();
	void TakeDamage(int num);
	void ChaneMaxHealth(int num);
	void UseHealingPot();
};

