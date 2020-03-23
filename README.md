# ShaderGL

Simple project creation display an obj with a texture. The obj and the texture are stored in a directory (Asset/).

![OpenGL](https://github.com/anirul/ShaderGL-Classroom-1/raw/master/Asset/Capture.png "A textured torus rendered by OpenGL.")

## Compile

First you'll need to install [VCPKG](https://github.com/microsoft/vcpkg) (if you don't have it yet). And you can install the following packages (if you don't have already). You could have an old version of windows and you should then replace the `x64-windows` with `x86-windows`.

```cmd
[vcpkg_dir]> vcpkg install sdl2:x64-windows
[vcpkg_dir]> vcpkg install glew:x64-windows
[vcpkg_dir]> vcpkg install gtest:x64-windows
```

Now we can generate the project files:

```cmd
[project_dir]> mkdir Build
[project_dir]> cd Build
[project_dir]/Build> cmake .. -DCMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT\scripts\buildsystems\vcpkg.cmake" -DVCPKG_TARGET_TRIPLET=x64-windows
```

This should create the whole project you can now either clic on it in the file explorer ou just use the command line `start`. 

## Run

You can now use the `Set as startup project` on `SimpleSample` and on `ShaderGLTest` to execute it.

## Code is missing!

There is some code missing in specific `.cpp` files. You'll have to fill it up to be able to complete the task.

```C++
{
#pragma message ("You have to complete this code!")
}
```

You can replace all the code inside the curly brackets, but only there! This mean you can also change return type as they are there to compile and not to be correct. You can follow what is recommanded on the slides that are on [Google Drive](https://drive.google.com/drive/folders/1Tt4yu9GfIaq8YnbGPl_vFDHgHtrQTtjd?usp=sharing).

## Finally

You will get this to work and have the rotating torus!
