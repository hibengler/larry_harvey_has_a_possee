
#include "raylib.h"
#include "larry_harvey_has_a_possee.h"

#include "larry_harvey_has_a_possee.c"


larry_harvey_robot_league *league;


float startx;
float starty;
float offsetx;
float offsety;

void InitGame(void)
{
league = new_larry_harvey_robot_league();

startx=0.f;
starty=0.f;
offsetx = 1.f;
offsety = 1.f;

// 
/*
for (int i=0;i<2;i++) {
  larry_harvey_basketball_team *team = league->teams+i;
  for (int j=0;j<5;j++) {
    larry_harvey_robot *probot = team->players+j;
    }
  }
*/

}


void UpdateGame(void) {
/*
for (int i=0;i<5;i++) {
  larry_harvey_basketball_team *team = league->teams+i;
  for (int j=0;j<5;j++) {
    larry_harvey_robot *probot = team->players+j;
    }
  }
*/

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

}





static void draw_robot_2d(larry_harvey_robot *probot,int y_level,int x_level) {
float x_scale = 3.f * 56.f;
float y_scale = 3.f * 56.f;
float y_offset = 30.f + 56.f * y_level + starty;
float x_offset = 30.f + 56.f * x_level + startx;
draw_larry_harvey_robot_2d(probot,(Vector2){.x=x_offset*3.,.y=y_offset*3.},
                                   (Vector2){.x=x_scale,.y=y_scale});
}






void DrawGame(void) {
BeginDrawing();

ClearBackground(BLACK);

for (int i=0;i<8;i++) {
  larry_harvey_basketball_team *team = league->teams+i;
  for (int j=0;j<5;j++) {
    larry_harvey_robot *probot = team->players+j;

    draw_robot_2d(probot,i,j);

    }
  }

EndDrawing();
}




// Update and Draw (one frame)
void UpdateDrawFrame(void)
{
    UpdateGame();
    DrawGame();
}



void UnloadGame(void) {
}


#if defined(PLATFORM_ANDROID)
void android_main(struct android_app *app)
#else   
int main(void)
#endif
{

#if defined(PLATFORM_ANDROID)
    InitWindow(1024, 768, app);
#else
    InitWindow(1024, 1600, "sample game: Robot hate on Black Rock City, NV");
#endif

InitGame();


#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update and Draw
        //----------------------------------------------------------------------------------
        UpdateDrawFrame();
        //----------------------------------------------------------------------------------
    }
#endif

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadGame();         // Unload loaded data (textures, sounds, models...)

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
#if !defined(PLATFORM_ANDROID)
    return 0;
#endif
}

