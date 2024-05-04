
#include <iostream>
#include "Player.cpp"

int main()
{
    Player player1 = Player(100, 8, 4);
    Player player2 = Player(100, 7, 6);
    std::cout << "player 1 id:" << player1.getId() << "\n";
    std::cout << "player 2 id:" << player2.getId() << "\n";
    std::cout << "player 2 hp:" << player2.getHealth() << "/" << player2.getMaxHealth() << "\n";
    player2.TakeDamage(player1.getAttack());
    std::cout << "player 2 hp:" << player2.getHealth() << "/" << player2.getMaxHealth() << "\n";
}
