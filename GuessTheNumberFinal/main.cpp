#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

void UP1();
void UP2();
void UP3();
void UP4();
void game();
void custom();

int main()
{
  system("mode con cols=170 lines=40");
  system("color b");
  srand((unsigned)time(NULL));

  bool end = false;
  while(!end)
  {
    int number = 0;
    int max = 0;
    int min = 0;
    char input = 0;

    UP1();
    UP2();

    input = _getch();
    if      (input == '1') custom();
    else if (input == '2') max = input;
    else if (input == '3') max = input;
    else if (input == '4') max = input;
    else if (input == '5') end = true;
    else UP3();
  }
  system("cls");
  UP4();
}

void custom()
{
  int number1;
  int number2;
  bool end = false;
  while (!end)
  {
    system("cls");
    UP1();
    printf("  ------------------------------------------------------\n");
    printf("   Custom:\n");
    printf("   Input two numbers between 1 and 999'999'999\n");
    printf("  ------------------------------------------------------\n\n");
    printf("   Number 1:\t");
    scanf_s(" %i", &number1);
    printf("   Number 2:\t");
    scanf_s(" %i", &number2);
    if (number1 >= 1 && number1 <= 999999999 && number2 >= 1 && number2 <= 999999999) end = true;
  }
  game();
}

void game()
{
  printf("game here");
  Sleep(1000);
  Sleep(1000);
  Sleep(1000);
  Sleep(1000);
  Sleep(1000);


}

void UP1()
{
  printf("\n\n     ____                       _____ _            _   _                 _               \n");
  printf("    / ___|_   _  ___  ___ ___  |_   _| |__   ___  | \x5C | |_   _ _ __ ___ | |__   ___ _ __ \n");
  printf("   | |  _| | | |/ _ \x5C/ __/ __|   | | | '_ \x5C / _ \x5C |  \x5C| | | | | '_ ` _ \x5C| '_ \x5C / _ \x5C '__|\n");
  printf("   | |_| | |_| |  __/\x5C__ \x5C__ \x5C   | | | | | |  __/ | |\x5C  | |_| | | | | | | |_) |  __/ |   \n");
  printf("    \x5C____|\x5C__,_|\x5C___||___/___/   |_| |_| |_|\x5C___| |_| \x5C_|\x5C__,_|_| |_| |_|_.__/ \x5C___|_|   \n\n\n\n");
}

void UP2()
{
  printf("  ------------------------------------------------------\n");
  printf("   We play a game, guess my number as fast as possible!\n");
  printf("   Choose your difficulty:\n");
  printf("  ------------------------------------------------------\n");
  printf("                \t        _       _\n");
  printf("   1 = Custom  :\t Custom  \x5C(o_o)/\n");
  printf("   2 = Expert  :\t Numbers between 1 and 30000\n");
  printf("   3 = Hard    :\t Numbers between 1 and 1000\n");
  printf("   4 = Easy    :\t Numbers between 1 and 100\n");
  printf("   5 = End     :\t End\n");
  printf("  ------------------------------------------------------\n");
  printf("   ~$ ");
}

void UP3()
{
  printf("     Incorrect input !");
  Sleep(1000);
  system("cls");
}

void UP4()
{
  printf("\n\n    _____           _ \n");
  printf("   | ____|_ __   __| |\n");
  printf("   |  _| | '_ \x5C / _` |\n");
  printf("   | |___| | | | (_| |\n");
  printf("   |_____|_| |_|\x5C__,_|\n\n\n\n");
  Sleep(2000);
}