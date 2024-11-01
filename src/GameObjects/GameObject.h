#include <vector>

/**
 * (Abstract) Class for every object in the game environment.
 */
class GameObject {
private:
    const char* id;
    const std::vector<GameObject> components;
public:
    virtual const void render();
    virtual void tick();
};
