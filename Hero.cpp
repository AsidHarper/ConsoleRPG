#include "Hero.h"
#include "Printer.h"
#pragma warning(disable:4996)
#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;

Hero::Hero(){
	Health = 50;
	Mana = 25;
	Action = 1;
	BAction = 1;
	ArmorQuality = 1;
	WeaponQuality = 1;
	PotionsQuality = 1;
	FireSpell = 1;
}

void Hero::TakeDamage(int num){
	Health -= num;
}

void Hero::ChaneMaxHealth(int num){
	MaxHealth += num;
}

void Hero::UseHealingPot(){
	Printer printer;
	if (BAction != 0 and PotionsQuality == 1) {
		Health += 10;
		BAction -= 1;
		HealhtPotionAmount -= 1;
		char healing[36] = "Вы исцелились на 10 едениц здоровья";
		printer.PrintStuff(healing);
		printer.DePrintStuff(healing);
	}
	else if (BAction !=0 and PotionsQuality == 2) {
		Health += 15;
		BAction -= 1;
		HealhtPotionAmount -= 1;
		char healing[36] = "Вы исцелились на 20 едениц здоровья";
		printer.PrintStuff(healing);
		printer.DePrintStuff(healing);
	}
	else {
		char healing[] = "Вы не можете этого сделать";
		printer.PrintStuff(healing);
		printer.DePrintStuff(healing);
	}
	if (Health > MaxHealth) {
		Health = MaxHealth;
	}
}

