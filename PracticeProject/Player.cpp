#include "GameEntity.cpp"
class Player : public GameEntity {
	private:
		int Attack;
		int Defense;
public:
	Player(int Health, int Attack, int Defense) : GameEntity(Health){
		this->Attack = Attack;
		this->Defense = Defense;
	}

	int getAttack() {
		return Attack;
	}

	void TakeDamage(int Damage) {
		this->CurrentHealth -= Damage * (100 - Defense) / 100;
	}

	void Heal(int Heal) {
		CurrentHealth += Heal;
		CurrentHealth = CurrentHealth > MaxHealth ? MaxHealth : CurrentHealth;
	}
};