#pragma once
#ifndef RENDERER_H
#define RENDERER_H

#include "Scene.h"
#include <vector>

class Renderer {
public:
    bool Render(const Scene::Camera&,
                const Scene::Light&,
                const std::vector<const Scene::Object*>&,
                const std::string&);
};

#endif // RENDERER_H