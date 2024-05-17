//
// Created by dshub on 16-05-2024.
//

#ifndef RENDERER_HPP
#define RENDERER_HPP

#endif //RENDERER_HPP

#pragma once
#include <SFML/Graphics.hpp>
#include "../physics/physics.hpp"
#include "../engine/window_context_handler.hpp"


namespace tp {
    struct ThreadPool;
}

struct Renderer
{
    PhysicSolver& solver;

    sf::VertexArray world_va;
    sf::VertexArray objects_va;
    sf::Texture     object_texture;

    tp::ThreadPool& thread_pool;

    explicit
    Renderer(PhysicSolver& solver_, tp::ThreadPool& tp);

    void render(RenderContext& context);

    void initializeWorldVA();

    void updateParticlesVA();

    void renderHUD(RenderContext& context);
};
