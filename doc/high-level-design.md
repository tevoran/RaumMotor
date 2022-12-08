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