#pragma once

#include <map>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

namespace BubbleBash
{
    class AssetManager
    {
    public:
        AssetManager(){}
        ~AssetManager(){}

        void LoadTexture(std::string name,std::string fileName);
        sf::Texture &GetTexture(std::string name);

        void LoadFont(std::string name,std::string fileName);
        sf::Font &GetFont(std::string name);

        sf::Music _music;

        std::vector<int> PauseOrGame_State;

    private:
        std::map<std::string,sf::Texture> _textures;
        std::map<std::string,sf::Font> _fonts;

    };
}