#include <kipr/botball.h>

int main()
{
    speed = 100;
    bkspeed=-100;
    rest=0;
    enable_servos();
    camera_open_black();
    return 0;
}

void servos_open_inline();{
	set_servo_position(0,299);
    set_servo_position(1,729);
}
