# RaumMotor High Level Design Document

This document contains the highest level of the game engine design and is used as the main guide while developing the actual engine.

## Reflecting T3Vtech-3

RaumMotor is intended as the next iteration of the T3Vtech-3 game engine. It can be found be found [here](https://github.com/tevoran/T3Vtech-3).

T3Vtech-3 was quite easy to use in terms of its API which is something that would be good to keep. As well its very complete API documentation.

But on the downside T3Vtech-3 was relative inflexible. It had a fixed rendering pipeline which made it impossible to render into textures or add customized shaders. This made it very hard to add shadows, portals or even a simple splitscreen for 3D games.

Another point to improve is an easier to use building system. Althogh thanks to CMake and the usage of cross platform tools and libraries it was relative easy to use on Windows and Linux. But it wasn't possible to easily create a binary that runs on all or at least almost all Linux distributions, due to different used versions of shared libraries in each distribution. Also it wasn't possible to create a Windows build on Linux which is very important for games on PC to this day. Which makes an overhauled build system necessary.

### The Design Goals of RaumMotor

The reflection of the state of T3Vtech-3 and the experience of using it for a couple of projects leads to the three main goals for RaumMotor:

- Flexibility
- Easy to use
- Easy to develop

Each design decision needs to take these into account although the weight of each might vary.

## The Required Systems of the Engine

A game engine is a quite complex system. Therefor it is built with quite a few major subsystems.

The desired or sometimes simply necessary subsystems are:

- Build system
- Debugging system
- Memory management system
- Configuration system
- Asset management system
- Entity component system
- Physics system
- Window manager
- Renderer
- Audio system
- Event system
- Scripting support

### Build System

As already mentioned above the build system needs to improve upon T3Vtech-3's one. CMake as its base is still a good choice. But it needs to be supported by scripts in order to properly export the game to easily usable packages like ZIP archives or DEB packages. Also crosscompilation functionalities are needed especially for Linux as Windows is still the main gaming platform.

### Debugging System

The debugging system needs to keep track of a lot things if that is desired by the dev. Therefor it needs be toggleable.

When it's activated then it needs to log user defined text output as well as the usage of resources. This means that it is trackable which assets are loaded into memory and whether that happened successfully or not. It is also necessary to log the memory footprint of the engine and the game. Therefor a memory management system is necessary for the engine. Another important part of the debugging system will be an engine intern profiler.

### Memory Management System

The memory management system will be used by the debugging system to keep track of the dynamic used memory of the engine.

But it is important that the memory management system is expandable since a potential use case could be a custom memory allocator to circumvent issues with the OS's memory allocation. The OS might switch into kernel mode for that which is very expensive if done extensively.