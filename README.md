# Sandbox for OpenGL development

Work-in-progress OpenGL framework that aims to provide a strong base for you to just dive-in and start writing OpenGL.

## Install
This project uses CMake to generate build files. The following commands should help you setup a nice starting point.
```console
$ git clone --recursive https://github.com/eligum/OpenGL-fw.git
$ cd OpenGL-fw
$ mkdir -p build
$ cd build
$ cmake .. -DWARNINGS_AS_ERRORS=FALSE -DSPDLOG_BUILD_SHARED=ON
```

## Features
* Fish
* Vegetables
* Meat
* Fruit
  * Apple
  * Orange
  * Pear
  * Bananna
  * Watermelon

## Usage examples
#### Basic usage
```c++
int main()
{
    std::cout << "Hello World!" << std::endl;
}
```
