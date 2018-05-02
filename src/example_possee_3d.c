
#include "raylib.h"
#include "larry_harvey_has_a_possee.h"

#include "larry_harvey_has_a_possee.c"

float startx;
float starty;
float offsetx;
float offsety;

larry_harvey_robot_league *league;






static void draw_robot_3d(larry_harvey_robot *probot,int y_level,int x_level) {
float x_scale = 1.f;
float y_scale = 1.f;
float y_offset = 0.f  + (12-y_level + starty);
float x_offset = 0.f  +(x_level + startx/10.);
draw_larry_harvey_robot_3d(probot,(Vector3){.x=-4.+x_offset,.y=-3+y_offset,.z=3.f},
                                   (Vector3){.x=x_scale,.y=y_scale,.z=x_scale});
}



int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 1600;
    int screenHeight = 1000;
    league = new_larry_harvey_robot_league();
    
    startx=0.f;
    starty=0.f;
    offsetx = 0.1f;
    offsety = 1.f;
      
      

    InitWindow(screenWidth, screenHeight, "Larry Harvey Hater robots 3d");

    // Define the camera to look into our 3d world
    Camera camera;
    camera.position = (Vector3){ 3.0f, 5.0f, 14.0f };  // Camera position
    camera.target = (Vector3){ -2.0f, 5.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y

    Vector3 cubePosition = { 4.0f, 0.0f, -4.0f };

    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
if (offsetx>0.f) {
  startx = startx + offsetx;
  if (startx>30.f) {
    offsetx = -offsetx;
    }
  }
else {
  startx = startx + offsetx;
  if (startx< -10.f) {
    offsetx = -offsetx;
    }
  }
    

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(GRAY);

            Begin3dMode(camera);

                DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
                DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);

                DrawGrid(10, 1.0f);
for (int i=0;i<8;i++) {
            End3dMode();
//	    EndDrawing();
//            BeginDrawing();
	    Begin3dMode(camera);
  larry_harvey_basketball_team *team = league->teams+i;
  for (int j=0;j<5;j++) {
    larry_harvey_robot *probot = team->players+j;
    draw_robot_3d(probot,i,j);
    }
  }
for (int i=5;i<8;i++) {
  larry_harvey_basketball_team *team = league->teams+i;
  for (int j=0;j<5;j++) {
    larry_harvey_robot *probot = team->players+j;
    draw_robot_3d(probot,i,j);
    }
  }

            DrawFPS(10, 10);
            End3dMode();
	    EndDrawing();
				
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}





