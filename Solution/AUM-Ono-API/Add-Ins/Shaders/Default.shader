Read shader vertex
#version 330 core

layout(location = 0) in vec4 position;

void main()
{
gl_Position = position;
}

Read shader fragment
#version 330 core

layout(location = 0) out vec4 color;

uniform vec4 UNIFORM_COLOR = vec4(.81, 0.81, 0.81, .81);

void main()
{
	color = UNIFORM_COLOR;
}