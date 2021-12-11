#include <iostream>
#include <unistd.h>



int main() {

//Introduction to the story
sleep(2); 
std::cout << "Welcome.\n"; 
sleep(2); 
std::cout << "This is a game of choice, your choices will lead you down a path, and only your choices will end the story\n";
sleep(2);
std::cout << "....\n";
sleep(2);
std::cout << "You have just woken up in a cave\n";
sleep(2);
std::cout << "And you can't remember a thing\n";
sleep(2);
std::cout << "Next to you, there is a machete, a map, and a flashlight\n";



// If the player plays enough rounds.... he/she finishes the game
for (int i = 0; i <= 10; i = i + 1) {

    sleep(4);
    std::cout << "You have just woken up in a cave\n";
    sleep(2);
    std::cout << "And you can't remember a thing\n";
    sleep(2);
    std::cout << "Next to you, there is a machete, a map, and a flashlight\n";

//choices

    sleep(4);
    std::cout << "Here are your choices:\n";
    sleep(2);
    std::cout << "1) Grab the machete\n";
    std::cout << "2) Grab the map\n";
    std::cout << "3) Grab the flashlight\n";
    std::cout << "4) Go back to sleep\n";

        int choice1;

    std::cin >> choice1;

        if (choice1 == 1) {
            std::cout << "You grabbed the machete!!\n";
            sleep(2);
            std::cout << "What a great choice....\n";
            sleep(2);
            std::cout << "Like a maniac, you go hacking through the woods in the most random direction, attempting to find some sort of evidence of civilization...\n";
            sleep(5);
            std::cout << "It is dark, and you are frantic...\n";
            sleep(2);
            std::cout << "Slice!\n";
            sleep(1);
            std::cout << "....Hack!\n";
            sleep(1);
            std::cout << "....You continue to slice away, until you smell the familiar smell of a campfire\n";
            sleep(3);
            std::cout << "Obviously, you head into that direction hoping you can find help....\n";
            sleep(3);
            std::cout << "But as you approached the camp, there was a family of Man-Bear-Pigs, and they snarled menacingly at you with drool of hunger dangling from their lips nearly to the floor.\n";
            sleep(6);
            std::cout << "Without a second thought, you turn and run back through the path straight to the only safe place you can think of...\n";
            sleep(5);
            std::cout << "....Your cave.\n";
            
        }

        if (choice1 == 2) {
            std::cout << "You grabbed the machete!!\n";
            sleep(2);
            std::cout << "What a great choice....\n";
            sleep(2);
            std::cout << "There is nothing on the map, but one little 'x' in an opening of trees....\n";
            sleep(3);
            std::cout << "So you follow it!\n";
            sleep(2);
            std::cout << "It's kind of dark, and scary and there are weird noises.....\n";
            sleep(3);
            std::cout << "....And you didn't grab the machete, so moving through the bush is a pain in the ass....\n";
            sleep(4);
            std::cout << "But as you move closer to the 'x', you notice the familiar smell of a campfire.\n";
            sleep(4);
            std::cout << "But as you approached the camp, there was a family of Man-Bear-Pigs, and they snarled menacingly at you with drool of hunger dangling from their lips nearly to the floor.\n";
            sleep(6);
            std::cout << "Without a second thought, you turn and run back through the path straight to the only safe place you can think of...\n";
            sleep(5);
            std::cout << "....Your cave.\n";
        }

        if (choice1 == 3) {
            
        }
    }
}