#ifndef CPP_CONTENT_BLOCKS_HPP
#define CPP_CONTENT_BLOCKS_HPP
#include "../../header.h"

enum BLOCKTYPE { BLOCK_GRASS, BLOCK_SAND, BLOCK_OCEAN, BLOCK_ROCK, BLOCK_DIRT, BLOCK_MUD };

class BrickBlock
{
    private:
    sf::RectangleShape m_Shape;
    sf::RectangleShape m_Hitbox;
    sf::Texture& m_Texture;
    bool m_collision;
    const unsigned short m_type;

    public:
    BrickBlock(sf::Vector2f size, sf::Vector2f position, sf::Color color, bool collosion, sf::Texture& texture, unsigned short type);
    virtual ~BrickBlock();

    const bool& getCollision();
    sf::RectangleShape& getRectangleShape();
    void render(sf::RenderTarget* target);
};
#endif