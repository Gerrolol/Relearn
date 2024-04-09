#include <iostream>


void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char* spaces);

int main(){

char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char player = 'X';
char computer = 'O';

char running = true;

drawBoard(spaces);


return 0;
}


void drawBoard(char *spaces){
    std::cout << "     |     |     "<< '\n';
    std::cout << "   " << spaces[0] << " | " << spaces[1] << "   | " << spaces[2] << " " << std::endl;
    std::cout << "   " <<  << " | " << spaces[1] << "   | " << spaces[2] << " " << std::endl;
}

void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer){
    return 0;
}
bool checkTie(char* spaces){
    return 0;
}
    