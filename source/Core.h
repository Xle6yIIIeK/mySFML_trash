#ifndef CPP_COREPROGRAM_H
#define CPP_COREPROGRAM_H

#include "states/MainMenu.hpp"
#include "states/gfx.hpp"
#include "systemFunctionUNIX.hpp"

class Core {
private:
    mypars::parsJSON* parsJSON;
    float deltaTime;
    sf::Clock deltaClock;

    sf::RenderWindow* mWindow;
    StateData mStatedata;
    std::stack<State*> mState;
    GraphicsSettings gfxSettings;
    sf::Event mEvents;
    std::map<std::string, int> supportedKeys;

    Logger myLogger_core;

    // initilization functions
    void initDirectories();
    void initKeyBinds();
    void initVar();
    void initStateData();
    void initState();
    void initWindow();

public:
    Core();
    virtual ~Core();
    void run();

    void updateEventsWindow();
    void updateDeltaTime();
    void update();
    void render();
};

#endif