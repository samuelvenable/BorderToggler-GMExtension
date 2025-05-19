#include <CoreGraphics/CoreGraphics.h>
#define EXPORTED_FUNCTION extern "C" __attribute__((visibility("default")))

EXPORTED_FUNCTION double display_mouse_get_x() {
  CGEventRef event = CGEventCreate(nullptr);
  CGPoint mouse = CGEventGetLocation(event);
  return mouse.x;
}

EXPORTED_FUNCTION double display_mouse_get_y() {
  CGEventRef event = CGEventCreate(nullptr);
  CGPoint mouse = CGEventGetLocation(event);
  return mouse.y;
}
