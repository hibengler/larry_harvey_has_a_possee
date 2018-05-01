#ifndef LARRY_HARVEY_POSSEE_H
#define LARRY_HARVEY_POSSEE_H

#include "raylib.h"


typedef struct larry_harvey_rectangle_section {
  Rectangle the_section;
  } larry_harvey_rectangle_section;

typedef struct larry_harvey_robot {
  Color usual_first_color;
  Color usual_second_color;
  Color usual_third_color;
  int number_first_color_sections;
  larry_harvey_rectangle_section *first_sections;
  int number_second_color_sections;
  larry_harvey_rectangle_section *second_sections;
  int number_third_color_sections;
  larry_harvey_rectangle_section *third_sections;
  } larry_harvey_robot;

    
typedef struct larry_harvey_basketball_team {
  larry_harvey_robot players[5];
  } larry_harvey_basketball_team;
  
typedef struct larry_harvey_robot_league {
  larry_harvey_basketball_team teams[8];
  } larry_harvey_robot_league;
  
extern larry_harvey_robot_league * new_larry_harvey_robot_league();
extern void free_larry_harvey_robot_league();

void draw_larry_harvey_robot_2d(larry_harvey_robot *probot);
void draw_larry_harvey_robot_3d(larry_harvey_robot *probot);

  
#endif
