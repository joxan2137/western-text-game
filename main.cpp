#include <iostream>
#include <string>

#include "characters.h"
#include "Player.h"
// Additional includes as needed

void startGame(Player &player) {
    // Introduction to the game
    std::cout << "Welcome to \"Legends of the West\"!\n\n"
             "In this rugged world of gunslingers and outlaws, you are a lone cowboy seeking fortune and adventure in the untamed Wild West. Your journey will take you through dusty towns, desolate landscapes, and dangerous frontiers where only the bravest survive.\n\n"
             "Character:\n"
             "You are an experienced cowboy, known for your sharpshooting and quick thinking. Your past is a tapestry of tales told around campfires, some true, some just tall tales. But now, you seek something greater, a treasure that will cement your name in the legends of the West.\n\n"
             "Main Story:\n"
             "Rumors are swirling about a hidden treasure, said to be buried deep within the heart of the West. It's a treasure so grand that it has drawn the attention of the most notorious outlaws and treasure hunters. Your quest is to find this treasure, navigating through a series of challenges and making decisions that will determine your fate.\n\n"
             "Game Mechanics:\n"
             "- Exploration: Travel across various locations in the Wild West, each with its own dangers and opportunities.\n"
             "- Interaction: Engage with other characters you meet. Choose your words wisely, as they can make you friends or foes.\n"
             "- Duels: Test your mettle in gunfights. Your skill with a revolver will be crucial for survival.\n"
             "- Inventory: Manage your resources and equipment. From bullets to beans, every item counts.\n"
             "- Decision Making: Your choices will impact the story and lead you to one of several different endings.\n\n"
             "Are you ready to write your own legend? Saddle up, cowboy. Your adventure begins now.\n\n"
             "What's your name?\n";
    std::string playerName;
    std::getline(std::cin, playerName);
    player.name = playerName;
    std::cout << "Welcome, " << player.name << ".\n\n";

}

void scenario1() {
    NewCharacter robber_tutorial("robber", 10, 10);
    std::cout << "You are walking down a dusty road when you encounter a robber.\n\n"
             "What do you do?\n"
             "1. Draw your revolver and shoot the robber.\n"
             "2. Try to talk your way out of the situation.\n"
             "3. Run away.\n\n"
             "Enter your choice: ";
    int choice;
    std::cin >> choice;
    std::cout << "\n";
    switch (choice) {
        case 1:
            std::cout << "You draw your revolver and shoot the robber.\n\n"
                     "You win the duel.\n\n";
            break;
        case 2:
            std::cout << "You try to talk your way out of the situation.\n\n"
                     "The robber doesn't listen and shoots you.\n\n"
                     "You lose the duel.\n\n";
            break;
        case 3:
            std::cout << "You run away.\n\n"
                     "The robber shoots you in the back.\n\n"
                     "You lose the duel.\n\n";
            break;
        default:
            std::cout << "Invalid choice.\n\n";
            break;
    }
}


int main() {
    bool gameOver;
    Player player;
    startGame(player);

    if (player.health == 0) {
        gameOver = true;
    } else {
        gameOver = false;
    }

    while (!gameOver) {
        scenario1();
        // Additional scenario functions
    }
}
