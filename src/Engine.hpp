#pragma once

#include <memory>
#include "Tile.hpp"
#include "Sound.hpp"
#include "Doodle.hpp"

class Engine
{
private:
    sf::RenderWindow m_window{};
    sf::Image m_app_icon{};
    sf::Event m_event{};

    Tile m_background;
    sf::Texture m_rightTexture;
    sf::Texture m_leftTexture;
    sf::Texture m_platformTexture;

    std::vector<sf::Sprite> m_platforms{};
    std::unique_ptr<Doodle> m_doodle;
public:
    Engine();
    ~Engine() = default;
    Engine(const Engine &) = delete;
    Engine &operator=(const Engine &) = delete;

    void start();
    void event();
    void draw();
    void platforms();
};