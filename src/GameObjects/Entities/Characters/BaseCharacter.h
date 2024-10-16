#include "raylib.h"
#include "../BaseEntity.h"

/**
 * (Abstract) Base class for entites that can move.
 */
class BaseCharacter : BaseEntity {
private:
    Vector2 position;
    Texture texture;
public:
    virtual const void render() override;
    virtual void tick() override;
};
