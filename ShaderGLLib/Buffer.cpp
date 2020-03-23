#include "Buffer.h"
#include <exception>
#include <stdexcept>

namespace sgl {


	Buffer::Buffer(
		const BufferType buffer_type /*= BufferType::ARRAY_BUFFER*/, 
		const BufferUsage buffer_usage /*= BufferUsage::STATIC_DRAW*/) :
		buffer_type_(buffer_type),
		buffer_usage_(buffer_usage)
	{
#pragma message ("You have to complete this code!")
	}
	
	Buffer::~Buffer()
	{
#pragma message ("You have to complete this code!")	
	}

	void Buffer::Bind() const
	{
#pragma message ("You have to complete this code!")	
	}

	void Buffer::UnBind() const
	{
#pragma message ("You have to complete this code!")	
	}

	void Buffer::BindCopy(
		const size_t size, 
		const void* data /*= nullptr*/) const
	{
#pragma message ("You have to complete this code!")	
	}

} // End namespace sgl.
