#include <stdio.h>
#include <stdbool.h>

int user_level = 1;
const int max_level = 5;

const char* task_names[] = {
  "\x1b[33m[level 1]:\x1b[0m Getting the map...",
  "Room breakout...",
  "Finding the guard's uniform...",
  "Distracting the guards...",
  "Escape method..."
};

bool level_1(){
  int subtask_answer;

  puts(task_names[0]);  
  puts("\nNow you are heading for dinner but your main aim is to escape..");
  puts("You need to get the map...");
  puts("The guards are observing you carefully.. good luck!");

  puts("\nWhat will you do now?");
  puts("[1] Head towards the dining area..");
  puts("[2] Turn left(you see a map there!)");
  printf("\x1b[35m[choice]:\x1b[0m ");
  scanf("%d", &subtask_answer);

  if (subtask_answer != 1){
    puts("\x1b[31m[oopsy]!\x1b[0m the guards understood your intention and you are facing a punishment");
    return false;
  }
  
  puts("Good! you choose the right path... now what to do here?");
  puts("[1] Wait for 2 minutes and go to washroom");
  puts("[2] Go towards washroom");
  printf("\x1b[35m[choice]:\x1b[0m ");
  scanf("%d", &subtask_answer);

  if (subtask_answer != 1){
    puts("\x1b[31m[oopsy]!\x1b[0m the guards are following you so you cannot see the map...");
    return false;
  }

  puts("\x1b[32m[good]!\x1b[0m since most of the guards are eating dinner so you can go to the location where you saw the map...");
  puts("\x1b[32m[sucess]!\x1b[0m you got the map..");
  return true;
}

bool level_5(){
  int vehicle_choice;

  puts("\x1b[32m[congrats]!\x1b[0m: for breaking out of the camp.. but you need to be careful with transportation..");
  puts("[warning]: there are 3 vehicles going but only one of them is correct");
  puts("[1] A bus going to east");
  puts("[2] A jeep going to west");
  puts("[3] A bus going to north");
  printf("[choice]: "); 
  scanf("%d", &vehicle_choice);

  if(vehicle_choice == 1){
    puts("\x1b[32[sucess]!\x1b[0m the vehicle is going to a safe location");
    puts("\x1b[32m[sucess]!\x1b[0m you escaped the camp completely and you are safe");
    return true;
  } else{
    printf("\x1b[31m[oopsy]!\x1b[0m: the vehicle is going to a unsafe location");
    return false;
  }
}

int main(){
  puts("Welcome to 1938... Austria!... a year of misery...");
  puts("You have been taken into a death camp \x1b[1mbut\x1b[0m you have ways to escape...");
  puts("\x1b[33m[warning]:\x1b[0m the guards are very strict and observing but sometimes they are engaged in common activities...");
  puts("Don't worry, clues will be given. now interpret them");

  level_1();
  level_5();
  return 0;
}
