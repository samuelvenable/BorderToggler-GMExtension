var dmx = display_mouse_get_x();
var dmy = display_mouse_get_y();
if mouse_check_button(mb_right) {
    window_x += (dmx - mouse_x_prev);
    window_y += (dmy - mouse_y_prev);
    window_set_position(window_x, window_y);
}
mouse_x_prev = dmx;
mouse_y_prev = dmy;
