#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RollDice (int sides, int dice_count){
  int i,x,roll_result,lower_limit;
  // Use current time as random seed
  srand(time(0));
  //lowest number to show on dice
  lower_limit=1;

  printf("Rolling for your chance to save humanity\n\r");
  //Each dice rolls once
  for (i=0;i<dice_count;i++){
    //random function takes (rand()% (Max-lowerlimit +1))+lowerlimit
    roll_result=(rand() % (sides-lower_limit+1))+lower_limit;
    printf ("%d \n\r",roll_result);
  }
}
int main(void) {
  int sides;
  int dice_count;

  printf("How many sides does your dice have?\n");
  scanf("%d",&sides);
    printf("How many dice are we rolling?\n");
  scanf("%d",&dice_count);
  RollDice(sides,dice_count);
  return 0;
}