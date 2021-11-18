#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main ()
{
  int iSecret, iGuess, TimesGuessed;
  srand (time(NULL));

  iSecret = rand() % 80 + 1;

  do {
    printf ("Guess the number (1 to 80): ");
    scanf ("%d",&iGuess);
    if (iSecret<iGuess) puts ("Lower");
    else if (iSecret>iGuess) puts ("Higher");
    TimesGuessed++;
  } while (iSecret!=iGuess);

  puts ("You Win!");
  std::cout << "You Guessed " << TimesGuessed << "." << std::endl;
  return 0;
}