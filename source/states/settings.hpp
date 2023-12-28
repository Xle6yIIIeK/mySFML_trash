#ifndef CPP_SETTINGS_STATE_HPP
#define CPP_SETTINGS_STATE_HPP

#include "State.hpp"

/// @brief  Class for the settings state
/// @note   Inherited from the State class
/// @retval None
class SettingsState : public State {
private:
    enum settingPage {
        AUDIO,
        GRAPHICS,
        CONTROLS,
        ECT,
        PAGE_COUNT
    };
    // Variables
    sf::Texture backgroundTexture; // Texture for the background
    sf::RectangleShape background; // Shape for the background
    sf::Font font; // Font used in the settings state
    std::map<std::string, std::unique_ptr<gui::Button>> _pageButtons; // Map of buttons, used for change current settings page
    std::string pageName; // Name of the current page

    // Resources for GraphicsSettings
    std::vector<sf::VideoMode> _video_modes; // List of video modes
    std::map<std::string, std::vector<int>> _gfxResource; // Map case for Resolutions, FPS, Antialiasing, VSync, Fullscreen

    // Resources for Keybinds
    std::vector<sf::Text> _keybindText; // List of keybind texts
    std::vector<sf::Text> _settings_list; // List of settings texts
    std::vector<sf::RectangleShape> _text_shapes; // List of text shapes
    std::vector<sf::RectangleShape> _keybindBackground; // List of keybind backgrounds

    // Resources for AudioSettings
    std::map<std::string, std::unique_ptr<gui::SliderInt>> _myTest; // Map case for Master, Music, Sound, Ambient, Voice

    // Gui selectors
    std::map<std::string, std::unique_ptr<gui::Selector>> _selectors; // Map of selectors

    settingPage page; // Current page of settings

    // Initializer functions
    void initVariables(); // Initialize variables
    void initFonts(); // Initialize fonts
    void initKeybinds(); // Initialize key bindings
    void initGui(); // Initialize GUI
    void resetGui(); // Reset GUI

public:
    /// @brief Constructor for SettingsState
    /// @param state_data
    SettingsState(StateData* state_data);
    virtual ~SettingsState();

    // Functions
    void updateAudioPage(const float& delta_time); // Update audio page
    void updateGraphicsPage(const float& delta_time); // Update graphics page
    void updateControlsPage(const float& delta_time); // Update controls page
    void updateEctPage(const float& delta_time); // Update ect page

    void updateInput(const float& delta_time); // Update input
    void updateGui(const float& delta_time); // Update GUI
    void update(const float& delta_time); // Update the state
    void renderGui(sf::RenderTarget& target); // Render the GUI
    void render(sf::RenderWindow& target); // Render the state
};

#endif // CPP_SETTINGS_STATE_HPP