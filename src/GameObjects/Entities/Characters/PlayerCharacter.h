#include "raylib.h"
#include "./BaseCharacter.h"

/**
 * Character controlled by the player.
 */
class PlayerCharacter : BaseCharacter {
private:
    Vector2 position;
    int rotation;
    Vector2 movementSpeed;
    int rotationSpeed;
    Vector2 acceleration;
    int radius;

    Texture2D texture;

    bool isAlive;
    bool isVulnerable;
public:
    PlayerCharacter(Vector2 spawnPosition) {
        position = spawnPosition;
        rotation = 0;
        movementSpeed.x = 0;
        movementSpeed.y = 0;
        rotationSpeed = 0;
        acceleration.x = 1;
        acceleration.y = 1; // Gravity acceleration
        radius = 20;

        Image wheel = LoadImage("resources/player_character.png");
        texture = LoadTextureFromImage(wheel);
    }
    /**
     * Renders the player character in game.
     */
    void const render() override;
    /**
     * Calls all the processes that need to be called every frame.
     */
    void tick() override;
    /**
     * Instantly stops the player character and deactivates self acceleration.
     * Also, makes it invulnerable to damage.
     * Meant to be called when the "STOP" input is pressed.
     */
    void pressStop();
    /**
     * Resets self acceleration and restores the player character's damage vulnerability.
     * Meant to be called when the "STOP" input is released.
     */
    void releaseStop();
};
