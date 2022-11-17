#include "Enemy.hpp"

class Samurai : public Enemy  
{ 
private:
    int belt;
    sf::Texture text;

public:
    /*CONSTRUCTORS & DESTRUCTORS*/
    Samurai(int ident = 1, double px = 0.0f, double py = 0.0f, double sx = 0.0f, double sy = 0.0f, double vx = 0.0f, double vy = 0.0f, int hp = 6, int dam = 2, const float atkCooldown = 0.0, Player *pP = nullptr, int bt=1);
    ~Samurai();

    /*SETTERS & GETTERS*/

    /*METHODS*/
    void update(double timeFraction);
    void init();
    void collide(Entity *ent2, double inter_x, double inter_y);
    void attack();
};