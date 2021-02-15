#ifndef GDEXAMPLE_H
#define GDEXAMPLE__H

#include <Godot.hpp>
#include <Sprite.hpp>
#include <iostream>

namespace godot {
class GDExample : public Sprite {
    GODOT_CLASS(GDExample, Sprite)

   private:
    float time_passed;
    float amplitude, speed;

   public:
    static void _register_methods();

    GDExample();
    ~GDExample();

    void _init();          // initializer called by godot
    void _process(float);  // process func called by godot

    void set_speed(float);
    float get_speed();
};

}  // namespace godot

#endif