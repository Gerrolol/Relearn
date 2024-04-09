#include <iostream>
#include <cmath>
#include <ctime>

char getUserChoice();
char getComputerChoice();

void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
char player;
char computer;


do{
player = getUserChoice();
computer = getComputerChoice();
std::cout << "computer has selected ";
showChoice(computer);

std::cout << "\n";

std::cout << "player has selected " ;
showChoice(player);

std::cout << "\n";

chooseWinner(player, computer);

}while(player == computer);

return 0;
}


char getUserChoice(){
    char choice;

    do{
        std::cout << "rock paper or scissors, enter r, p or s" << std::endl;
        std::cin >> choice;
    } while(choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

char getComputerChoice(){

srand(time(NULL));
int rng = (rand()%3) +1;
char computer_choice;

switch(rng){
    case 1:
        computer_choice = 'r';
    case 2:
        computer_choice = 'p';
    case 3:
        computer_choice = 's';
}
return computer_choice;
}

void showChoice(char choice){
    switch(choice){
        case 'r':
        std::cout << "rock";
        break;
        case 'p':
        std::cout << "paper";
        break;
        case 's':
        std::cout << "scissors"; 
        break;
    }
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer  == 's'){
            std::cout << "winner winner chicken dinner" << std::endl;
            }
            else if(computer == 'r'){
                std::cout << "draw, try again" << std::endl;
            }
            else{
                std::cout << "u lose unlucky mate" << std::endl;
            }
        break;
        case 'p':
            if(computer  == 'r'){
                std::cout << "winner winner chicken dinner" << std::endl;
            }
            else if(computer == 'p'){
                std::cout << "draw, try again" << std::endl;
            }
            else{
                std::cout << "u lose unlucky mate" << std::endl;
            }
        break;
        case 's':
            if(computer  == 'p'){
                std::cout << "winner winner chicken dinner" << std::endl;
            }
            else if(computer == 's'){
                std::cout << "draw, try again" << std::endl;
            }
            else{
                std::cout << "u lose unlucky mate" << std::endl;
            }
        break;        
    }
}