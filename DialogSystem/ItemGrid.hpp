#pragma once
#include <SFML/Graphics.hpp>

class ItemGrid : public sf::Transformable, public sf::Drawable
{
public:
    ItemGrid(unsigned int,unsigned int,unsigned int _tw = 32,unsigned int _th = 32);
    void draw(sf::RenderTarget&, sf::RenderStates) const;
    void loadTex(sf::Texture*);
    void appendItem(const int, const int, const unsigned int);
    sf::Vector2u getSize() const;
    sf::Vector2u getTileSize() const;
    void cleanLastSquare(unsigned int);
private:
    unsigned int width_in_tiles;
    unsigned int height_in_tiles;
    unsigned int tile_height;
    unsigned int tile_width;
    sf::Texture *_tex;
    sf::VertexArray grid;
    unsigned int lastX;
    unsigned int lastY;
};
