#include <iostream>
#include <cstdlib>

int main() { 
  std::cout<<"MAGIC 8-BALL: \n";
  srand(time(NULL));
  int answer = std::rand() % 10; 
  switch (answer) { 
    case 0:
      std::cout<<"It is certain.\n";
      break;
    case 1:
      std::cout<<"It is decidedly so.\n";
      break;
    case 2:
      std::cout<<"Without a doubt.\n";
      break;
    case 3:
      std::cout<<"Better not tell you now\n";
      break;
    case 4:
      std::cout<<"Cannot predict now.\n";
      break;
    case 5:
      std::cout<<"Concentrate and ask again.\n";
      break;
    case 6:
      std::cout<<"Don't count on it.\n";
      break;
    case 7:
      std::cout<<"My reply is no.\n";
      break;
    case 8:
      std::cout<<"My sources say no.\n";
      break;
    case 9:
      std::cout<<"Outlook not so good.\n";
      break;
    default: 
      std::cout<<"Very doubtful.\n";

  }
}