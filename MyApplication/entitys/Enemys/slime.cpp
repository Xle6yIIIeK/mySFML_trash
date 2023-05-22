#include "slime.hpp"

Slime::Slime(float spawn_pos_x, float spawn_pos_y, sf::Texture& texture, Entity& targer_follow) {
    this->m_sprite.setTexture(texture);
    this->createHitboxComponent(this->m_sprite, 0.f, 0.f, 32.f, 32.f);
    this->createMovementComponent(3.f, 1.4f, 5.f);

    this->e_setPosition(spawn_pos_x, spawn_pos_y);
    this->m_AIFollow = new AIFollow(*this, targer_follow);
}

Slime::~Slime() {
    delete this->m_AIFollow;
}

void Slime::e_update(const float& delta_time) {
    this->m_AIFollow->update(delta_time);

    this->e_movement->update(delta_time);
    this->e_hitbox->update();
}

void Slime::e_render(sf::RenderTarget& target, const bool show_hitbox) {
    target.draw(this->m_sprite);

    if (show_hitbox)
        this->e_hitbox->render(target);
}