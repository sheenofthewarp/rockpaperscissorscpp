// This program will allow the user to play a game of rock, paper, scissors against a machine
#include <iostream>
#include <stdlib.h>

int main(){
  srand (time(NULL));

  int computer = rand() % 3 + 1;
  
  int user = 0;

  std::cout << "===================\n";
  std::cout << "rock paper scissors\n";
  std::cout << "===================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;

  if(user == 1){
    std::cout << "You chose rock!";
  }
  else if(user == 2){
    std::cout << "You chose paper!";
  }
  else if(user == 3){
    std::cout << "you chose scissors!";
  }

  if(computer == 1){
    std::cout << "cpu chose rock!";
  }
  else if(computer == 2){
    std::cout << "cpu chose paper!";
  }
  else if(computer == 3){
    std::cout << "cpu chose scissors!";
  }  

  if (user == computer){
    std::cout << "It's a tie!\n";
  }
  // user rock
  else if (user == 1){
    if (computer == 2){
      std::cout << "You lose!\n";
    }
    if (computer == 3){
      std::cout << "You win!\n";
    }
  }
  // user paper
    else if (user == 2){
      if (computer == 1){
        std::cout << "You win!\n";
      }
      if (computer == 3){
        std::cout << "You lose!\n";
      }
    }
  // user scissors
    else if (user == 3){
      if (computer == 1){
        std::cout << "You lose!\n";
      }
      if (computer == 2){
        std::cout << "You win!\n";
      }
    }
return 0;

}
