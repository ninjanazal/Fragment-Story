#include "gdexample.h"

using namespace godot;

void GDExample::_register_methods() {
    register_method("_process", &GDExample::_process);
    register_property<GDExample, float>("amplitude", &GDExample::amplitude, 10.f);
    register_property<GDExample, float>("Anim Speed", &GDExample::set_speed, &GDExample::get_speed, 2.0f);
}

GDExample::GDExample() {}
GDExample::~GDExample() {}

void GDExample::_init() {
    time_passed = 0.0f;
    amplitude = 10.0f;
    speed = 1.5f;
}

void GDExample::_process(float delta) {
    time_passed += delta * speed;
    Vector2 new_pos = Vector2(amplitude + (amplitude * sin(time_passed * 2.0f)),
                              amplitude + (amplitude * cos(time_passed * 1.5f)));
    this->set_position(new_pos);
}

void GDExample::set_speed(float value) {
    this->speed = value;
    std::cout << "Set the value" << std::endl;
}
float GDExample::get_speed() { return this->speed; }