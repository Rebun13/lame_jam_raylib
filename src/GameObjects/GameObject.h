/**
 * (Abstract) Class for every object in the game environment.
 */
class GameObject {
private:
    const char* id;
public:
    virtual const void render();
    virtual void tick();
};
