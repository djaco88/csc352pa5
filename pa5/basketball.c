/* Author: Jacob Davis
Purpose: calculate and display stats for basketball
players
*/
#include <stdio.h>
#include "arrayz.h"



int getStatArrs(char name[], long scores[], long rebs[], long assists[], char line[]){
  int switchStat = 0;
  int lineIndex = 0;
  int statIndex = 1;
  int nameIndex = 0;
  while(line[lineIndex] != '\0'){
    long temp = 0;
    if (line[lineIndex] == '[' || line[lineIndex] == ','){
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
  scores[0] = statIndex;
  rebs[0] = statIndex;
  assists[0] = statIndex;
  name[nameIndex] = '\0';
  return 0;
}


void updateName(char toUpdate[], char name[]){
  int index = 0;
  while (name[index] != '\0'){
    toUpdate[index] = name[index];
    index++;
  }
}


void updateStats(char statNames[12][51], long statNums[], char name[], long scores[],
                 long rebs[], long assists[]){
  if (statNums[0] > sdev(scores) || statNums[0] == -1){
    updateName(statNames[0], name);
    statNums[0] = sdev(scores);
  }
  if (statNums[1] > sdev(rebs) || statNums[1] == -1){
    updateName(statNames[1], name);
    statNums[1] = sdev(rebs);
  }
  if (statNums[2] > sdev(assists) || statNums[2] == -1){
    updateName(statNames[2], name);
    statNums[2] = sdev(assists);
  }
  if (statNums[3] < sdev(scores) || statNums[3] == -1){
    updateName(statNames[3], name);
    statNums[3] = sdev(scores); 
  }
  if (statNums[4] < sdev(rebs) || statNums[4] == -1){
    updateName(statNames[4], name);
    statNums[4] = sdev(rebs);
  }
  if (statNums[5] < sdev(assists) || statNums[5] == -1){
    updateName(statNames[5], name);
    statNums[5] = sdev(assists);
  }
  if (statNums[6] < mean(scores) || statNums[6] == -1){
    updateName(statNames[6], name);
    statNums[6] = mean(scores);
  }
  if (statNums[7] < mean(rebs) || statNums[7] == -1){
    updateName(statNames[7], name);
    statNums[7] = mean(rebs);
  }
  if (statNums[8] < mean(assists) || statNums[8] == -1){
    updateName(statNames[8], name);
    statNums[8] = mean(assists);
  }
  if (statNums[9] > mean(scores) || statNums[9] == -1){
    updateName(statNames[9], name);
    statNums[9] = mean(scores);
  }
  if (statNums[10] > mean(rebs) || statNums[10] == -1){
    updateName(statNames[10], name);
    statNums[10] = mean(rebs);
  }
  if (statNums[11] > mean(assists) || statNums[11] == -1){
    updateName(statNames[11], name);
    statNums[11] = mean(assists);
  }
}


void printResults(char names[12][51]){
printf("most consistent scorer: %s\n", names[0]);
printf("most inconsistent scorer: %s\n", names[1]);
printf("highest scorer: %s\n", names[2]);
printf("lowest scorer: %s\n", names[3]);
printf("most inconsistent rebounder: %s\n", names[4]);
printf("most consistent rebounder: %s\n", names[5]);
printf("highest rebounder: %s\n", names[6]);
printf("lowest rebounder: %s\n", names[7]);
printf("most inconsistent assister: %s\n", names[8]);
printf("most consistent assister: %s\n", names[9]); 
printf("lowest assister: %s\n", names[10]);
printf("highest assister: %s\n", names[11]);
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
  long statNums[13];
  for (int i = 0; i < 13; i++){
    statNums[i] = -1;
  }
  char buffer[1051];
  while (fgets(buffer, 1050, stdin) != NULL){
    char name[51];
    long scores[102];
    long rebs[102];
    long assists[102];
    getStatArrs(name, scores, rebs, assists, buffer);
    updateStats(statNames, statNums, name, scores, rebs, assists);
  }
  printResults(statNames);
  printf("LETS GOOOOOOOO");
  return 0;
}
