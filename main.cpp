#include <cstdio>
#include <iostream>
#include <cstdlib>
#include "lib/console.h"
#include <stdlib.h>
#include <unistd.h>

int main(){
  cls();

  int col = 0;
  int row = 0;

  Dimensions(&col, &row);

  mv(0, 1);

  println(BLUE, "Console stuff by @arbol_gg");

  mv(0, 4);

  println(GREEN, "Loading something xd...");

  LoadingBar bar = LoadingBar(10);
  for(int i = 0; i <= 1000000000; i+=1){
    bar.setPercentage(i/10000000, 5);
  }

  mv(0, 4);
  println(GREEN, "Done!                   ");
  mv(0, 6);

  //char c = getchar();

  return 0;
}