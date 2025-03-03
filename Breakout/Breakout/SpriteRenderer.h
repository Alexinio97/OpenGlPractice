#pragma once
#include <glad/glad.h>
#include <glm/glm/glm.hpp>
#include <glm/glm/gtc/matrix_transform.hpp>
#include <glm/glm/geometric.hpp>

#include "Shader.h"
#include "Texture.h"
#include "VAO.h"

class SpriteRenderer
{
public:	
	SpriteRenderer(Shader& shader);
	~SpriteRenderer();

	void DrawSprite(Texture& texture, glm::vec2 position,
		glm::vec2 size = glm::vec2(10.0f, 10.0f), float rotate = 0.0f,
		glm::vec3 color = glm::vec3(1.0f));
	void DrawDebugRectangle(glm::vec2 position, glm::vec2 size, glm::vec3 color);

private:
	Shader m_shader;
	unsigned int m_quadVAO;
	unsigned int m_debugVAO;

	void initRenderData();
};

