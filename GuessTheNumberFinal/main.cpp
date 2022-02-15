#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>


void UP1();
void UP2();
void UP3();
int game();

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
    int input = 0;

    UP1;
    UP2;

    input = _getch();
    if (input == 1) max = input;
    else if (input == 2) max = input;
    else if (input == 3) max = input;
    number = rand() % max + 1;
  }
}

int game()
{



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
  printf("\n  Wir Spielen ein Spiel, erraten Sie so schnell wie m\x94glich meine Zahl!\n");
  printf("  W\x84hlen Sie eine schwierigkeit aus:\n\n\n");
  printf("  1 = Expert:\t Zahlen von 1 bis 30000\n");
  printf("  2 = Hard  :\t Zahlen von 1 bis 1000\n");
  printf("  3 = Easy  :\t Zahlen von 1 bis 10\n\n\n");
}

void UP3()
{
  printf("\n\n    _____           _ \n");
  printf("   | ____|_ __   __| |\n");
  printf("   |  _| | '_ \x5C / _` |\n");
  printf("   | |___| | | | (_| |\n");
  printf("   |_____|_| |_|\x5C__,_|\n\n\n\n");
}
