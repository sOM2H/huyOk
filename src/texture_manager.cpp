#include"texture_manager.h"

TextureManager* texture_manager = new TextureManager();

void TextureManager::load(std::string filename, std::string texture_name) {
    image_map[texture_name].loadFromFile(filename);
    texture_map[texture_name].loadFromImage(image_map[texture_name]);
}
