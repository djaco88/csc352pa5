/* Author: Jacob Davis
Purpose: calculate and display stats for basketball
players
*/
#include <stdio.h>
#include "arrayz.h"



int getStatArrs(char name[], int scores[], int rebs[], int assists[], char line[]){
  int switchStat = 0;
  int lineIndex = 0;
  int statIndex = 0;
  int nameIndex = 0;
  while(line[lineIndex] != '\0'){
    temp = 0;
    if (line[LineIndex] == '[' || line[lineIndex] == ','){
      if (switchStat == 1){
        scores[statIndex] = temp;
      }
      if (switchStat == 2){
        rebs[statIndex] = temp;
      }
      if (switchStat == 3){
        assists[statIndex] = temp;
      }
      switchStat++;
      if (switchStat == 4){
        switchStat = 1;
        statIndex++;
      }
    }
    else if (switchStat == 0){
      name[nameIndex] = line[lineIndex];
      nameIndex++;
    }
    else if (line[lineIndex] != ']'){
      temp = temp*10;
      temp += line[lineIndex]-'0';   
    }
    lineIndex++;      
  }
  return 0;
}



int main(int argc, char * argv[]){
/*
  char mostConScorer[51];
  char mostConReb[51];
  char mostConAssister[51];
  char leastConScorer[51];
  char leastConReb[51];
  char leastConAssister[51];
  char bestScorer[51];
  char bestReb[51];
  char bestAssister[51];
  char worstScorer[51];
  char worstReb[51];
  char worstAssister[51];
*/
  char statNames[12][51];
  int statNums[13];
  for (int i = 0; i < 13; i++){
    statNums[i] = -1;
  }
  char buffer[1051];
  while (fgets(buffer, 1050, stdin) != NULL){
    char name[51];
    int scores[101];
    int rebs[101];
    int assists[101];
    getStatArrs(name, scores, rebs, assists, buffer);   
  }
  printf("LETS GOOOOOOOO");
  return 0;
}
