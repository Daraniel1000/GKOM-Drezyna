#pragma once

#include <glm/glm.hpp>

class View {
public:
	virtual glm::mat4& getMatrix() const = 0;
};