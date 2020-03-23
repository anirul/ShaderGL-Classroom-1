#include "DeviceTest.h"

namespace test {

	TEST_F(DeviceTest, CreateDeviceTest)
	{
		EXPECT_FALSE(device_);
		device_ = std::make_shared<sgl::Device>(sdl_window_);
		EXPECT_NE(nullptr, device_->GetGLContext());
		EXPECT_TRUE(device_);
	}

	TEST_F(DeviceTest, StartupDeviceTest)
	{
		ASSERT_FALSE(device_);
		device_ = std::make_shared<sgl::Device>(sdl_window_);
		ASSERT_NE(nullptr, device_->GetGLContext());
		ASSERT_TRUE(device_);
		PostGlewInit();
		device_->Startup(std::make_pair<int, int>(640, 480));
		EXPECT_NE(nullptr, device_->GetProgram());
	}

} // End namespace test.
