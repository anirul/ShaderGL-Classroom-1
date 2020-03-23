#include "Mesh.h"
#include <iterator>
#include <fstream>
#include <sstream>
#include <gl/glew.h>
#include "Mesh.h"

namespace sgl {

	Mesh::Mesh(const std::string& file)
	{
#pragma message ("You have to complete this code!")
	}

	Mesh::~Mesh()
	{
#pragma message ("You have to complete this code!")
	}

	void Mesh::SetTextures(std::initializer_list<std::string> values)
	{
#pragma message ("You have to complete this code!")
	}

	void Mesh::Draw(
		const sgl::Program& program,
		const sgl::TextureManager& texture_manager,
		const sgl::matrix& model /*= {}*/) const
	{
#pragma message ("You have to complete this code!")
	}

	std::optional<sgl::Mesh::ObjFile> Mesh::LoadFromObj(const std::string& file)
	{
#pragma message ("You have to complete this code!")
		return std::nullopt;
	}

} // End namespace sgl.
