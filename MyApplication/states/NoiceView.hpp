#ifndef CPP_STATE_NOICEVIEW_HPP
#define CPP_STATE_NOICEVIEW_HPP

#include "../GUI/GUISYS.hpp"
#include "../math/LSystem.hpp"
#include "../math/ProcessGenerationNoice.hpp"
#include "../math/simplex.hpp"
#include "State.hpp"

class NoiceView : public State {
private:
    struct {
        int deep_ocean = 0;
        int ocean = 0;
        int seasand = 0;
        int beath = 0;
        int sand = 0;
        int grass = 0;
        int dirt = 0;
        int rock = 0;
        int other = 0;
        int mountain = 0;
        int snow = 0;
        int forest = 0;
        int lava = 0;
    } m_BlocksCounter;

    noiceData noicedata;
    ProcessGenerationNoice* myGN;
    ProcessGenerationNoice* myGN_biome;
    SimplexNoise* mySN;
    LSystem* myLS;
    sf::Image image;
    sf::Texture texture;
    sf::RectangleShape shape;
    std::map<std::string, gui::Button*> buttons;
    bool showTabmenu;
    sf::RectangleShape tabShape;
    std::map<std::string, gui::StaticSelector*> staticSelector;
    gui::Selector* selector;

    // threads
    std::vector<std::thread> threads;
    const int numThreads = 1;

    sf::Vector2u generateArea;
    sf::Vector2f closeGrid;
    bool isGeneratorClosed;

    void initKeybinds();
    void initButton();

    void createStepByStep(sf::Vector2f pos);

public:
    NoiceView(StateData* statedata);
    virtual ~NoiceView();

    void updateInput(const float& delta_time);
    void update(const float& delta_time);
    void renderTabMenu(sf::RenderTarget& target);
    void render(sf::RenderWindow& target);
};
#endif