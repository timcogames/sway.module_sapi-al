# sway.module_sapi-al

[![Documentation][codedocs-svg]][codedocs-url] [![License][license-svg]][license-url]

## Клонирование проекта

```console
git clone --recursive https://github.com/timcogames/sway.module_sapi-al.git
```

```console
git submodule foreach --recursive git checkout develop
git submodule foreach --recursive git pull origin develop
```

## Сборка проекта

Создаем директорию build и переходим в неё

```console
mkdir build && cd ./build
```

Конфигурируем проект для сборки

```console
# Только динимическая библиотека
cmake -D CMAKE_BUILD_TYPE=Release \
      -D MODULE_SAPI_AL_LIB_TYPE=shared \
      ../

cmake -D CMAKE_BUILD_TYPE=Release \
      -D GLOB_EMSCRIPTEN_ROOT_DIR=/Users/<USER_NAME>/Documents/Third-party/emsdk/upstream/emscripten \
      -D GLOB_EMSCRIPTEN_PLATFORM=ON \
      -D GLOB_GTEST_ROOT_DIR= \
      -D GLOB_GMOCK_ROOT_DIR= \
      -D GLOB_GTEST_LIB_DIR= \
      -D GLOB_GMOCK_LIB_DIR= \
      -D MODULE_CORE_ENVIRONMENT=web,node \
      -D MODULE_CORE_COMPILATION=async \
      -D MODULE_SAPI_AL_ENVIRONMENT=node \
      -D MODULE_SAPI_AL_COMPILATION=async \
      -D MODULE_SAPI_AL_LIB_TYPE=object \
      -D MODULE_SAPI_AL_MT=ON \
      -D MODULE_SAPI_AL_ENABLE_TESTS=OFF \
      ../
```

Запускаем сборку

```console
cmake --build ./
```

## Contributing

См. [CONTRIBUTING](./github/CONTRIBUTING.md)

[codedocs-svg]: https://codedocs.xyz/timcogames/sway.module_sapi-al.svg
[codedocs-url]: https://codedocs.xyz/timcogames/sway.module_sapi-al/
[license-svg]: https://img.shields.io/github/license/mashape/apistatus.svg
[license-url]: LICENSE
