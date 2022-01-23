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
    int eingabe = 0;

    UP1();
    UP2();

    eingabe = _getch();
    if (eingabe == 1) max = eingabe;
    else if (eingabe == 2) max = eingabe;
    else if (eingabe == 3) max = eingabe;

    number = rand() % max + 1;
    
  }

}

int game()
{



}

void UP1()
{
  printf("\n    .oooooo.                                                   .   oooo                      ooooo      ooo                                .o8                          \n");
  printf("   d8P'  `Y8b                                                .o8   `888                      `888b.     `8'                               '888                          \n");
  printf("  888           oooo  oooo   .ooooo.   .oooo.o  .oooo.o    .o888oo  888 .oo.    .ooooo.       8 `88b.    8  oooo  oooo  ooo. .oo.  .oo.    888oooo.   .ooooo.  oooo  d8b\n");
  printf("  888           `888  `888  d88' `88b d88(  '8 d88('8        888    888P'Y88b  d88' `88b      8   `88b.  8  `888  `888  `888P'Y88bP'Y88b   d88' '88b d88' '88b `888''8P \n");
  printf("  888     ooooo  888   888  888ooo888 `'Y88b.  `'Y88b.       888    888   888  888ooo888      8     '88b.8   888   888   888   888   888   888   888 888ooo888  888     \n");
  printf("  `88.    .88'   888   888  888    .o o.  )88b o.  )88b      888 .  888   888  888    .o      8       `888   888   888   888   888   888   888   888 888    .o  888     \n");
  printf("   `Y8bood8P'    `V88V'V8P' `Y8bod8P' 8''888P' 8''888P'      '888' o888o o888o 'Y8bod8P'     o8o        `8   `V88V'V8P' o888o o888o o888o  `Y8bod8P' `Y8bod8P' d888b    \n\n\n");
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
  printf("\n  oooooooooooo                   .o8  \n");
  printf("  `888'     `8                  '888  \n");
  printf("   888         ooo. .oo.    .oooo888  \n");
  printf("   888oooo8    `888P'Y88b  d88' `888  \n");
  printf("   888    '     888   888  888   888  \n");
  printf("   888       o  888   888  888   888  \n");
  printf("  o888ooooood8 o888o o888o `Y8bod88P' \n\n\n");
}
