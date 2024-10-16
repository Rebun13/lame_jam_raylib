#include "raylib.h"
#include "../GameObject.h"

/**
 * (Abstract) GameObject that can be rendered. Does not include UI.
 */
class BaseEntity : GameObject {
private:
    Vector2 position;
    Texture texture;
public:
    virtual const void render() override;
    virtual void tick() override;
};
