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

void draw_larry_harvey_robot_2d(larry_harvey_robot *probot,Vector2 translate,Vector2 scale);
void draw_larry_harvey_robot_3d(larry_harvey_robot *probot,Vector3 translate,Vector3 scale);
void draw_larry_harvey_robot_container_3d(larry_harvey_robot *probot,Vector3 translate,Vector3 scale);
/* the container is a box that will fit the robot and had the color of the robot.
   It can also used to draw the robot from far away */


/*sometimes you want to rotate */
void draw_larry_harvey_robot_3d_rotate(larry_harvey_robot *probot,Vector3 translate,Vector3 scale,float sinangle,float cosangle);
void draw_larry_harvey_robot_container_3d_rotate(larry_harvey_robot *probot,Vector3 translate,Vector3 scale,float sinangle,float cosangle);


/* sometimes you want to sparkle */
void draw_larry_harvey_robot_container_3d_sparkle(larry_harvey_robot *probot,Vector3 translate,Vector3 scale);

  
#endif
