#ifndef LOGSCREEN_H
#define LOGSCREEN_H

#include <Godot.hpp>
#include <Node2D.hpp>

namespace godot {
class LogScreen : public Node2D {
    GODOT_CLASS(LogScreen, Node2D)
   private:
   public:
    LogScreen();
    ~LogScreen();
};
}  // namespace godot

#endif