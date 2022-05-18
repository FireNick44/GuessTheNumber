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
void game(int min, int max);
void custom();
void game_end(int x, int count);
int get_random(int min, int max);

int main()
{
  system("mode con cols=58 lines=25");
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
    if (input == '1') { end = true; custom(); }
    else if (input == '2') { end = true; game(1, 30000); }
    else if (input == '3') { end = true; game(1, 1000); }
    else if (input == '4') { end = true; game(1, 100); }
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
    printf("   Input two numbers between 1 and 999'999\n");
    printf("  ------------------------------------------------------\n\n");
    printf("                       (Number 1 and Number 2)\n");
    printf("  ------------------------------------------------------\n\n");
    printf("   Number 1:\t 1\n");
    
    number1 = 1;
    //scanf_s(" %i", &number1);
    
    printf("   Number 2:\t");
    scanf_s(" %i", &number2);
    if (number1 >= 1 && number1 <= 999999 && number2 >= 1 && number2 <= 999999 && number2 >= number1) end = true;
    else UP4();
  }
  game(number1, number2);
}

void game(int min, int max)
{
  int x = get_random(min, max);
  int count = 1;
  int temp = 0;
  bool end = false;
  while (!end)
  {
    system("cls");
    UP1();
    printf("  ------------------------------------------------------\n");
    printf("   My number is between %i and %i  \n", min, max);
    printf("   Enter a number to reduce the possible range.\n");
    printf("   Find my number as quickly as possible.\n");
    printf("  ------------------------------------------------------\n\n");
    printf("   ( Number between %i and %i )\n", min, max);
    printf("  ------------------------------------------------------\n\n");
    printf("   ~$ ");
    scanf_s("%i", &temp);
    if (temp >= max || temp <= min) UP3();
    else {
      if (temp == x) { end = true; game_end(x, count); }
      else if (temp <= x) min = temp;
      else if (temp >= x) max = temp;
    }
    count++;
  }
}

void game_end(int x, int count) {
  char input = 0;
  bool end = false;
  while (!end)
  {
    system("cls");
    UP1();
    printf("  ------------------------------------------------------\n");
    printf("   You found my number!\n");
    printf("   It was %i, you needed %i tries.\n", x, count);
    printf("   You can play again or leave the programm\n");
    printf("  ------------------------------------------------------\n\n");
    printf("   1 = Restart\n");
    printf("   2 = End\n");
    printf("  ------------------------------------------------------\n\n");
    printf("   ~$ ");
    input = _getch();
    if (input == '1') main();
    else if (input == '2') end = true;
    else if (input != '1' && input != '2') UP3();
  }
}

int get_random(int min, int max)
{
  return rand() % max + (min - 1);
}

void UP1()
{
  printf("\n\n");
  printf("        _____ _____ _____ _____ _____ _____ _____ \n");
  printf("       |   | |  |  |     | __  |   __| __  |   __|\n");
  printf("       | | | |  |  | | | | __ -|   __|    -|__   |\n");
  printf("       |_|___|_____|_|_|_|_____|_____|__|__|_____|\n\n\n\n");
}

void UP2()
{
  printf("  ------------------------------------------------------\n");
  printf("   We play a game, guess my number as fast as possible! \n");
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
  printf("\n\n\n\n\n\n\n");
  printf("                    _____           _ \n");
  printf("                   | ____|_ __   __| |\n");
  printf("                   |  _| | '_ \x5C / _` |\n");
  printf("                   | |___| | | | (_| |\n");
  printf("                   |_____|_| |_|\x5C__,_|\n\n\n\n\n\n\n   ");
  Sleep(2000);
}