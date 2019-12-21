#define LOG_LOCAL_LEVEL ESP_LOG_DEBUG

#include "jolt_lib.h"

int japp_main( int argc, const char **argv )
{
    jolt_gui_obj_t *menu = NULL;
    if( 0 == argc ) {
        printf("Launched from GUI\n");
    }
    else {
        printf("Launched from CLI\n");
    }
    return 0;
}

