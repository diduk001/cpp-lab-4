project (CPP-LAB-4
        LANGUAGES C) # Используем язык C
cmake_minimum_required(VERSION 2.8.12) # Минимальная допустимая версия CMake
add_executable (lab4 main.c) # Бинарный файл находитя в build/lab3
add_compile_options(-Wall -Wextra -Wpedantic) # Опции компиляции для предупреждений
set_property(TARGET lab4 PROPERTY C_STANDARD 99) # Используем стандарт C99
set(EXECUTABLE_OUTPUT_PATH ..) # Путь скомпилированной программы
