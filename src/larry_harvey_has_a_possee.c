
#include <stdio.h>
#include <malloc.h>


#include "raylib.h"
#include "larry_harvey_has_a_possee.h"











/* EVIL EVIL EVIL EVIL EVIL EVIL EVIL team (dark red) EVIL EVIL EVIL EVIL EVIL EVIL EVIL */
/* vvvvvvvvvv                                                                vvvvvvvvvvv */

void init_larry_harvey_evil_standard(larry_harvey_robot *probot) {
probot->usual_first_color  = CLITERAL{149,11,24,255};   	// Dark red
probot->usual_second_color = CLITERAL{205,130,91,255};     	// Tan Chaps
probot->usual_third_color  = CLITERAL{0,0,0,0};       		// No third color
probot->number_third_color_sections = 0;			// Only goa has 3 colors.
probot->third_sections = NULL;
}




/*
        XX    
    XXXXXXXXXX   
  XXXX  XX  XXXX
    XXXXXXXXXX
    XXXXXXXXXX
      XX  XX  
*/	 
void init_larry_harvey_evil_point_guard(larry_harvey_robot *probot) {
init_larry_harvey_evil_standard(probot);
probot->number_first_color_sections = 6;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=24};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-21,.y=-3,.width=6,.height=6};  // left arm
probot->first_sections[2].the_section = (Rectangle) {.x=15,.y=-3,.width=6,.height=6};  // right arm
probot->first_sections[3].the_section = (Rectangle) {.x=-3,.y=-15,.width=6,.height=6};  // top noogie
probot->first_sections[4].the_section = (Rectangle) {.x=-9,.y=15,.width=6,.height=6};   // left foot
probot->first_sections[5].the_section = (Rectangle) {.x=3,.y=15,.width=6,.height=6};   	// right foot

probot->number_second_color_sections = 0;
probot->second_sections = NULL;
}


/*  
    XX      XX
      XX  XX  
    XXXXXXXXXX   
    XX  XX  XX
    XXXXXXXXXX
      XX  XX  
    XX      XX
*/	 
void init_larry_harvey_evil_shooting_guard(larry_harvey_robot *probot) {
init_larry_harvey_evil_standard(probot);
probot->number_first_color_sections = 9;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=18};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-9,.y=-15,.width=6,.height=6};  // left ear
probot->first_sections[2].the_section = (Rectangle) {.x=3,.y=-15,.width=6,.height=6};  // right ear
probot->first_sections[3].the_section = (Rectangle) {.x=-15,.y=-21,.width=6,.height=6}; // left antennae
probot->first_sections[4].the_section = (Rectangle) {.x=9,.y=-21,.width=6,.height=6};   // right antennae
probot->first_sections[5].the_section = (Rectangle) {.x=-9,.y=9,.width=6,.height=6};   // left foot
probot->first_sections[6].the_section = (Rectangle) {.x=3,.y=9,.width=6,.height=6};   	// right foot
probot->first_sections[7].the_section = (Rectangle) {.x=-15,.y=15,.width=6,.height=6};  // left pointantennae
probot->first_sections[8].the_section = (Rectangle) {.x=9,.y=15,.width=6,.height=6};   	// right pointantennae

probot->number_second_color_sections = 0;
probot->second_sections = NULL;
}



/*  
        XX  
    XX  XX  XX  
    XXXXXXXXXX   
  XXXX  XX  XXXX
    XXXXXXXXXX
      XX  XX  
          
*/	 
void init_larry_harvey_evil_center(larry_harvey_robot *probot) {
init_larry_harvey_evil_standard(probot);
probot->number_first_color_sections = 8;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=24};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-15,.y=-15,.width=6,.height=6}; // left ear
probot->first_sections[2].the_section = (Rectangle) {.x=9,.y=-15,.width=6,.height=6};   // right ear
probot->first_sections[3].the_section = (Rectangle) {.x=-3,.y=-21,.width=6,.height=12};  // top horn
probot->first_sections[4].the_section = (Rectangle) {.x=-21,.y=-3,.width=6,.height=6};  // left arm
probot->first_sections[5].the_section = (Rectangle) {.x=15,.y=-3,.width=6,.height=6};  // right arm
probot->first_sections[6].the_section = (Rectangle) {.x=-9,.y=15,.width=6,.height=6};   // left foot
probot->first_sections[7].the_section = (Rectangle) {.x=3,.y=15,.width=6,.height=6};   	// right foot

probot->number_second_color_sections = 0;
probot->second_sections = NULL;
}






/*  
    XX      XX  
    XXXX  XXXX  
    XXXXXXXXXX   
    XX  XX  XX
    XXXXXXXXXX
    XXXX  XXXX
    XX      XX
*/	 
void init_larry_harvey_evil_small_forward(larry_harvey_robot *probot) {
init_larry_harvey_evil_standard(probot);
probot->number_first_color_sections = 9;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=18};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-15,.y=-21,.width=6,.height=12}; // left ear
probot->first_sections[2].the_section = (Rectangle) {.x=9,.y=-21,.width=6,.height=12};   // right ear
probot->first_sections[3].the_section = (Rectangle) {.x=-9,.y=-15,.width=6,.height=6};  // left ear2
probot->first_sections[4].the_section = (Rectangle) {.x=3,.y=-15,.width=6,.height=6};   // right ear2
probot->first_sections[5].the_section = (Rectangle) {.x=-15,.y=9,.width=6,.height=12}; // left foot
probot->first_sections[6].the_section = (Rectangle) {.x=9,.y=9,.width=6,.height=12};   // right foot
probot->first_sections[7].the_section = (Rectangle) {.x=-9,.y=9,.width=6,.height=6};   // left foot2
probot->first_sections[8].the_section = (Rectangle) {.x=3,.y=9,.width=6,.height=6};   	// right foot2

probot->number_second_color_sections = 0;
probot->second_sections = NULL;
}


/*  


    XXXXXXXXXX   
  XXXX  XX  XXXX
  XXXXXXXXXXXXXX
    XX222222XX
    XX22  22XX
*/	 
void init_larry_harvey_evil_power_forward(larry_harvey_robot *probot) {
init_larry_harvey_evil_standard(probot);
probot->number_first_color_sections = 5;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=18};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-21,.y=-3,.width=6,.height=12}; // left ear
probot->first_sections[2].the_section = (Rectangle) {.x=15,.y=-3,.width=6,.height=12};  // right ear
probot->first_sections[3].the_section = (Rectangle) {.x=-15,.y=9,.width=6,.height=12}; // left foot
probot->first_sections[4].the_section = (Rectangle) {.x=9,.y=9,.width=6,.height=12};   // right foot


probot->number_second_color_sections = 3;
probot->second_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_second_color_sections);
probot->second_sections[0].the_section = (Rectangle) {.x=-9,.y=9,.width=18,.height=6};  // bottom pants bar
probot->second_sections[1].the_section = (Rectangle) {.x=-9,.y=15,.width=6,.height=6};  // left pants leg
probot->second_sections[2].the_section = (Rectangle) {.x=3,.y=15,.width=6,.height=6};   // right pants leg
}


/* EVIL EVIL EVIL EVIL EVIL EVIL EVIL team (dark red) EVIL EVIL EVIL EVIL EVIL EVIL EVIL

   point guard      shooting guard      center        small forward  power forward 
                      XX      XX          XX            XX      XX  
        XX              XX  XX        XX  XX  XX        XXXX  XXXX  
    XXXXXXXXXX        XXXXXXXXXX      XXXXXXXXXX        XXXXXXXXXX      XXXXXXXXXX       
  XXXX  XX  XXXX      XX  XX  XX    XXXX  XX  XXXX      XX  XX  XX    XXXX  XX  XXXX
    XXXXXXXXXX        XXXXXXXXXX      XXXXXXXXXX        XXXXXXXXXX    XXXXXXXXXXXXXX
    XXXXXXXXXX          XX  XX          XX  XX          XXXX  XXXX      XX222222XX
      XX  XX          XX      XX                        XX      XX      XX22  22XX

   EVIL EVIL EVIL EVIL EVIL EVIL EVIL team (dark red) EVIL EVIL EVIL EVIL EVIL EVIL EVIL */
void init_larry_harvey_evil(larry_harvey_basketball_team *pteam) {
init_larry_harvey_evil_point_guard(pteam->players+0);
init_larry_harvey_evil_shooting_guard(pteam->players+1);
init_larry_harvey_evil_center(pteam->players+2);
init_larry_harvey_evil_small_forward(pteam->players+3);
init_larry_harvey_evil_power_forward(pteam->players+4);
}





















/* LOVE LOVE LOVE LOVE LOVE LOVE LOVE team (light red/pink) LOVE LOVE LOVE LOVE LOVE LOVE LOVE */



                
void init_larry_harvey_love_standard(larry_harvey_robot *probot) {
probot->usual_first_color  = CLITERAL{253,34,38,255};   	// Redder almost pink
probot->usual_second_color = CLITERAL{0,0,0,0};         	// No second color
probot->usual_third_color  = CLITERAL{0,0,0,0};       		// No third color
probot->number_second_color_sections = 0;			// No second color for love
probot->second_sections = NULL;
probot->number_third_color_sections = 0;			// Only goa has 3 colors.
probot->third_sections = NULL;
}




/*
      XX  XX
    XXXXXXXXXX   
    XX  XX  XX
    XXXXXXXXXX
    XXXXXXXXXX
      XX  XX  
*/	 
void init_larry_harvey_love_point_guard(larry_harvey_robot *probot) {
init_larry_harvey_love_standard(probot);
probot->number_first_color_sections = 5;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=24};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-9,.y=-15,.width=6,.height=6};  // left nub
probot->first_sections[2].the_section = (Rectangle) {.x=3,.y=-15,.width=6,.height=6};   // right nub
probot->first_sections[3].the_section = (Rectangle) {.x=-9,.y=15,.width=6,.height=6};   // left foot
probot->first_sections[4].the_section = (Rectangle) {.x=3,.y=15,.width=6,.height=6};   	// right foot
}



/*
        
    XXXXXXXXXX   
  XXXX  XX  XXXX
    XXXXXXXXXX
    XXXXXXXXXX
    XX      XX  
*/	 
void init_larry_harvey_love_shooting_guard(larry_harvey_robot *probot) {
init_larry_harvey_love_standard(probot);
probot->number_first_color_sections = 5;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=24};// Main chunk
probot->first_sections[1].the_section = (Rectangle) {.x=-21,.y=-3,.width=6,.height=6};  // left arm
probot->first_sections[2].the_section = (Rectangle) {.x=15,.y=-3,.width=6,.height=6};   // right arm
probot->first_sections[3].the_section = (Rectangle) {.x=-15,.y=15,.width=6,.height=6};  // left foot
probot->first_sections[4].the_section = (Rectangle) {.x=9,.y=15,.width=6,.height=6};   	// right foot

}




/*
    XX      XX
      XX  XX      
    XXXXXXXXXX   
  XXXX  XX  XXXX
    XXXXXXXXXX
    XXXXXXXXXX
      XX  XX  
*/	 
void init_larry_harvey_love_center(larry_harvey_robot *probot) {
init_larry_harvey_love_standard(probot);
probot->number_first_color_sections = 9;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=24};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-9,.y=-15,.width=6,.height=6};  // left nub
probot->first_sections[2].the_section = (Rectangle) {.x=3,.y=-15,.width=6,.height=6};   // right nub
probot->first_sections[3].the_section = (Rectangle) {.x=-15,.y=-21,.width=6,.height=6}; // left antannae
probot->first_sections[4].the_section = (Rectangle) {.x=9,.y=-21,.width=6,.height=6};   // right antannae
probot->first_sections[5].the_section = (Rectangle) {.x=-21,.y=-3,.width=6,.height=6};  // left arm
probot->first_sections[6].the_section = (Rectangle) {.x=15,.y=-3,.width=6,.height=6};   // right arm
probot->first_sections[7].the_section = (Rectangle) {.x=-9,.y=15,.width=6,.height=6};   // left foot
probot->first_sections[8].the_section = (Rectangle) {.x=3,.y=15,.width=6,.height=6};   	// right foot

}



/*

      XX  XX      
    XXXXXXXXXX   
    XX  XX  XX
    XXXXXXXXXX
  XXXXXXXXXXXXXX
  XXXX      XXXX
*/	 
void init_larry_harvey_love_small_forward(larry_harvey_robot *probot) {
init_larry_harvey_love_standard(probot);
probot->number_first_color_sections = 7;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=24};// each block is a 54x54 square with 6 pixels not used.
probot->first_sections[1].the_section = (Rectangle) {.x=-9,.y=-15,.width=6,.height=6};  // left nub
probot->first_sections[2].the_section = (Rectangle) {.x=3,.y=-15,.width=6,.height=6};   // right nub
probot->first_sections[3].the_section = (Rectangle) {.x=-21,.y=15,.width=12,.height=6}; // left foot
probot->first_sections[4].the_section = (Rectangle) {.x=9,.y=15,.width=12,.height=6};   // right foot
probot->first_sections[5].the_section = (Rectangle) {.x=-21,.y=9,.width=6,.height=6};   // left foot2
probot->first_sections[6].the_section = (Rectangle) {.x=15,.y=9,.width=6,.height=6};    // right foot2

}


/*

      XX  XX      
    XXXXXXXXXX   
XXXXXX  XX  XXXXXX
  XXXXXXXXXXXXXX
    XXXXXXXXXX
      XX  XX  
*/	 
void init_larry_harvey_love_power_forward(larry_harvey_robot *probot) {
init_larry_harvey_love_standard(probot);
probot->number_first_color_sections = 9;
probot->first_sections = malloc(sizeof(larry_harvey_rectangle_section)*probot->number_first_color_sections);
probot->first_sections[0].the_section = (Rectangle) {.x=-15,.y=-9,.width=30,.height=24}; // Main chunk
probot->first_sections[1].the_section = (Rectangle) {.x=-9,.y=-15,.width=6,.height=6};   // left nub
probot->first_sections[2].the_section = (Rectangle) {.x=3,.y=-15,.width=6,.height=6};    // right nub
probot->first_sections[3].the_section = (Rectangle) {.x=-27,.y=-3,.width=12,.height=6};  // left arm
probot->first_sections[4].the_section = (Rectangle) {.x=15,.y=-3,.width=12,.height=6};   // right arm
probot->first_sections[5].the_section = (Rectangle) {.x=-21,.y=3,.width=6,.height=6};    // left arm2
probot->first_sections[6].the_section = (Rectangle) {.x=15,.y=3,.width=6,.height=6};     // right arm2
probot->first_sections[7].the_section = (Rectangle) {.x=-9,.y=15,.width=6,.height=6};    // left foot
probot->first_sections[8].the_section = (Rectangle) {.x=3,.y=15,.width=6,.height=6};     // right foot

}
		





/* LOVE LOVE LOVE LOVE LOVE LOVE LOVE team (light red/pink) LOVE LOVE LOVE LOVE LOVE LOVE LOVE 
                                    XX      XX  
      XX  XX                          XX  XX          XX  XX            XX  XX      
    XXXXXXXXXX      XXXXXXXXXX      XXXXXXXXXX      XXXXXXXXXX        XXXXXXXXXX
    XX  XX  XX    XXXX  XX  XXXX  XXXX  XX  XXXX    XX  XX  XX    XXXXXX  XX  XXXXXX
    XXXXXXXXXX      XXXXXXXXXX      XXXXXXXXXX      XXXXXXXXXX      XXXXXXXXXXXXXX
    XXXXXXXXXX      XXXXXXXXXX      XXXXXXXXXX    XXXXXXXXXXXXXX      XXXXXXXXXX
      XX  XX        XX      XX        XX  XX      XXXX      XXXX        XX  XX


   LOVE LOVE LOVE LOVE LOVE LOVE LOVE team (light red/pink) LOVE LOVE LOVE LOVE LOVE LOVE LOVE */

void init_larry_harvey_love(larry_harvey_basketball_team *pteam) {
init_larry_harvey_love_point_guard(pteam->players+0);
init_larry_harvey_love_shooting_guard(pteam->players+1);
init_larry_harvey_love_center(pteam->players+2);
init_larry_harvey_love_small_forward(pteam->players+3);
init_larry_harvey_love_power_forward(pteam->players+4);
}












/* BURNER BURNER BURNER BURNER BURNER BURNER BURNER team (light orange) BURNER BURNER BURNER BURNER BURNER BURNER BURNER */

void init_larry_harvey_burner(larry_harvey_basketball_team *pteam) {}



void init_larry_harvey_star(larry_harvey_basketball_team *pteam) {}



void init_larry_harvey_screw(larry_harvey_basketball_team *pteam) {}



void init_larry_harvey_pasta(larry_harvey_basketball_team *pteam) {}



void init_larry_harvey_hope(larry_harvey_basketball_team *pteam) {}



void init_larry_harvey_goa(larry_harvey_basketball_team *pteam) {}
  
  
  
  

larry_harvey_robot_league * new_larry_harvey_robot_league() {
larry_harvey_robot_league *league=malloc(sizeof(larry_harvey_robot_league));

init_larry_harvey_evil(league->teams+0);
init_larry_harvey_love(league->teams+1);

init_larry_harvey_burner(league->teams+2);
init_larry_harvey_star(league->teams+3);
init_larry_harvey_screw(league->teams+4);
init_larry_harvey_pasta(league->teams+5);
init_larry_harvey_hope(league->teams+6);
init_larry_harvey_goa(league->teams+7);

return league;
}


extern void free_larry_harvey_robot_league();


  
