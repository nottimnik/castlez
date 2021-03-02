#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include <thread>
#include <chrono>

using namespace std;

void exit() { //the message printed when exiting the game
  system("clear");
  cout << "Thank you for playing ";
  printf("\x1B[32mCastlez\033[0m"); 
  cout << "! See you soon!";
  cout << endl << endl;
  cout << "Chat: Closing in 3 seconds..." << endl;
  this_thread::sleep_for (chrono::seconds(3));
}

void community() {
  system("clear");
  cout << "Join Our Community:" << endl;
  cout << "Forum: castlez.org/forum" << endl;
  cout << "Discord: castlez.org/discord" << endl << endl;
  cout << "[";
  printf("\x1B[32m1\033[0m");
  cout << "] Go back to the main menu."<< endl;

  cout << "Chat: ";
  
  int command;
  cin >> command;
  bool invalid_command = true;
  if(command == 1) {
    invalid_command = false;
  }
  while(invalid_command == true) {
    printf("\x1B[31mInvalid Command.\033[0m"); //let the user that the command is invalid
    cout << endl << "Chat: ";
    cin >> command;
    if(command == 1) {
      invalid_command = false;
    }
  }
}

void credits() { //the message printed at the credits section
  system("clear");
  cout << "   ____             _    _                "<< endl;
  cout << "  / ___| __ _  ___ | |_ | |   ___  ____   "<< endl;
  cout << " | |    / _` |/ __|| __|| |  / _ ||_  /   "<< endl;
  cout << " | |___| (_| ||__ || |_ | |_ |  __|/ /_   "<< endl;
  cout << "  |____||__,_||___/|__| |___||___|/___|   "<< endl << endl;
  cout << "Castlez was created by Ungureanu Călin Petru, known as ";
  printf("\x1B[32mTimnik\033[0m");
  cout << "." << endl << endl;
  cout << "Where you can find Timnik:" << endl;
  cout << "Website: timnik.com" << endl;
  cout << "Github: github.com/nottimnik" << endl;
  cout << "Twitter: twitter.com/nottimnik" << endl;
  cout << "Discord: Timnik#4158" << endl << endl;
  cout << "[";
  printf("\x1B[32m1\033[0m");
  cout << "] Go back to the main menu." << endl;

  cout << "Chat: ";

  int command;
  cin >> command;
  bool invalid_command = true;
  if(command == 1) {
    invalid_command = false;
  }
  while(invalid_command == true) {
    printf("\x1B[31mInvalid Command.\033[0m"); //let the user that the command is invalid
    cout << endl << "Chat: ";
    cin >> command;
    if(command == 1) {
      invalid_command = false;
    }
  }
}

int menu() { //The Menu Screen of the Game
  system("clear");
  cout << "                                                                ____                                               "<<endl;
  cout << "                                             _   _   _         |   |       _   _   _ "<< endl;
  cout << "   ____             _    _                  | |_| |_| |        |___|      | |_| |_| |"<< endl;
  cout << "  / ___| __ _  ___ | |_ | |   ___  ____     |         |     _  |_   _     |         |"<< endl;
  cout << " | |    / _` |/ __|| __|| |  / _ ||_  /      |       |     | |_| |_| |     |       |"<< endl;
  cout << " | |___| (_| ||__ || |_ | |_ |  __|/ /_      |   █   |      |       |      |   █   |"<< endl;
  cout << "  |____||__,_||___/|__| |___||___|/___|      |       |______|       |______|       |"<< endl;
  cout << "                                             |                                     |" << endl;
  cout << " Welcome to Castlez! Castlez.org             |   █                             █   |" << endl;
  cout << " Join Our Discord: castlez.org/discord       |                                     |" << endl;
  cout << " Choose what you want to do:                 |                                     |" << endl;
  cout << " [";
  printf("\x1B[32m1\033[0m");
  cout << "] Play                                    |                                     |" << endl;
  cout << " [";
  printf("\x1B[32m2\033[0m");
  cout << "] Credits                                 |                                     |" << endl;
  cout << " [";
  printf("\x1B[32m3\033[0m");
  cout << "] Community                               |                                     |" << endl;
  cout << " [";
  printf("\x1B[32m4\033[0m");
  cout << "] Exit" << endl;
  cout << "Chat: ";
  int command;
  cin >> command;

  //verify if the command entered by the user is valid or not
  bool invalid_command = true;
  if(command==1) {invalid_command = false;}
  else if(command==2) {invalid_command = false;}
  else if(command==3) {invalid_command = false;}
  else if(command==4) {invalid_command = false;}
  else {invalid_command = true;}

  while(invalid_command == true) {
    printf("\x1B[31mInvalid Command.\033[0m"); //let the user that the command is invalid
    cout << endl << "Chat: ";
    cin >> command;
    if(command == 1 || command == 2 || command == 3 || command == 4) {
      invalid_command = false;
    }
  }
  if(command == 1) { //exits the menu and continues by playing the game
    return 1;
  }
  else if(command == 2){
    credits();
    menu();
  }
  else if(command == 3){
    community();
    menu();
  }

  else if(command == 4) {
    exit();
    return 0; //closes the game
  }

}

int main() {
  if(menu()==0){ //closes the game if the user pressed the exit button
    return 0;
  }
  
  return 0;
}
