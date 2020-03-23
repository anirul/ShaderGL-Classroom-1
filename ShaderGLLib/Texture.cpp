#include "Texture.h"
#include <assert.h>
#include <GL/glew.h>
#include "Image.h"

namespace sgl {

	Texture::Texture(const std::string& file)
	{
#pragma message ("You have to complete this code!")
	}

	Texture::~Texture() 
	{
#pragma message ("You have to complete this code!")
	}

	void Texture::Bind(const unsigned int slot /*= 0*/) const
	{
#pragma message ("You have to complete this code!")
	}

	void Texture::UnBind() const
	{
#pragma message ("You have to complete this code!")
	}

	TextureManager::~TextureManager()
	{
#pragma message ("You have to complete this code!")
	}

	bool TextureManager::AddTexture(
		const std::string& name, 
		const std::shared_ptr<sgl::Texture>& texture)
	{
#pragma message ("You have to complete this code!")
		return false;
	}

	bool TextureManager::RemoveTexture(const std::string& name)
	{
#pragma message ("You have to complete this code!")
		return false;
	}

	void TextureManager::EnableTexture(const std::string& name) const
	{
#pragma message ("You have to complete this code!")
	}

	void TextureManager::DisableTexture(const std::string& name) const
	{
#pragma message ("You have to complete this code!")
	}

	void TextureManager::DisableAll() const
	{
#pragma message ("You have to complete this code!")
	}

} // End namespace sgl.
