#include "GameObject.cpp"
class GameEntity : public GameObject {
protected:
	int MaxHealth;
	int CurrentHealth;
	GameEntity(int Health) : GameObject(ENTITY) {
		this->MaxHealth = Health;
		this->CurrentHealth = Health;
	}
public:
	int getHealth() {
		return CurrentHealth;
	}
	int getMaxHealth() {
		return MaxHealth;
	}
};