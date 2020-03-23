#include "Scene.h"
#include <stdexcept>

namespace sgl {

	const sgl::matrix SceneMatrix::GetLocalModel(const double dt) const
	{
#pragma message ("You have to complete this code!")
		return {};
	}

	const std::shared_ptr<sgl::Mesh> SceneMatrix::GetLocalMesh() const
	{
#pragma message ("You have to complete this code!")
		return {};
	}

	const sgl::matrix SceneMesh::GetLocalModel(const double dt) const
	{
#pragma message ("You have to complete this code!")
		return {};
	}

	const std::shared_ptr<sgl::Mesh> SceneMesh::GetLocalMesh() const
	{
#pragma message ("You have to complete this code!")
		return { nullptr };
	}

	void SceneTree::AddNode(
		const std::shared_ptr<Scene>& node, 
		const std::shared_ptr<Scene>& parent /*= nullptr*/)
	{
#pragma message ("You have to complete this code!")
	}

	const std::shared_ptr<Scene> SceneTree::GetRoot() const
	{
#pragma message ("You have to complete this code!")
		return { nullptr };
	}

} // End namespace sgl.
