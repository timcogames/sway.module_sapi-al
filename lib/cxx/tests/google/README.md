#### Конфигурируем проект для Google тестов

```console
cmake -D CMAKE_BUILD_TYPE=Release \
      -D GLOB_THIRD_PARTY_DIR=/Users/<USER_NAME>/Documents/Third-party \
      -D GLOB_GTEST_ROOT_DIR=/Users/<USER_NAME>/Documents/Third-party/googletest/googletest \
      -D GLOB_GTEST_LIB_DIR=/Users/<USER_NAME>/Documents/Third-party/googletest/build/lib \
      -D GLOB_GMOCK_ROOT_DIR=/Users/<USER_NAME>/Documents/Third-party/googletest/googlemock \
      -D GLOB_GMOCK_LIB_DIR=/Users/<USER_NAME>/Documents/Third-party/googletest/build/lib \
      -D GLOB_OPENAL_ROOT_DIR=/opt/homebrew/opt/openal-soft \
      -D MODULE_SAPI_AL_LIB_TYPE=static \
      -D MODULE_SAPI_AL_ENABLE_TESTS=ON \
      -D MODULE_SAPI_AL_USE_GMOCK=OFF \
      ../
```

#### Запускаем сборку

```console
cmake --build ./
```
