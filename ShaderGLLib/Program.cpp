#include "Program.h"
#include <stdexcept>

namespace sgl {

	Program::Program()
	{
#pragma message ("You have to complete this code!")
	}

	Program::~Program()
	{
#pragma message ("You have to complete this code!")
	}

	void Program::AddShader(const Shader& shader)
	{
#pragma message ("You have to complete this code!")
	}

	void Program::LinkShader()
	{
#pragma message ("You have to complete this code!")
	}

	void Program::Use() const
	{
#pragma message ("You have to complete this code!")
	}

	void Program::UniformBool(const std::string& name, bool value) const
	{
#pragma message ("You have to complete this code!")
	}

	void Program::UniformInt(const std::string& name, int value) const
	{
#pragma message ("You have to complete this code!")
	}

	void Program::UniformFloat(const std::string& name, float value) const
	{
#pragma message ("You have to complete this code!")
	}

	void Program::UniformVector2(
		const std::string& name, 
		const sgl::vector2& vec2) const
	{
#pragma message ("You have to complete this code!")
	}

	void Program::UniformVector3(
		const std::string& name, 
		const sgl::vector3& vec3) const
	{
#pragma message ("You have to complete this code!")
	}

	void Program::UniformVector4(
		const std::string& name, 
		const sgl::vector4& vec4) const
	{
#pragma message ("You have to complete this code!")
	}

	void Program::UniformMatrix(
		const std::string& name, 
		const sgl::matrix& mat,
		const bool transpose /*= false*/) const
	{
#pragma message ("You have to complete this code!")
	}

	const int Program::GetMemoizeUniformLocation(const std::string& name) const
	{
#pragma message ("You have to complete this code!")
		return -1;
	}

} // End namespace sgl.
