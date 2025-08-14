# Versão mínima do CMake
cmake_minimum_required(VERSION 3.10)

# Define o nome do projeto
project(MovimentoXadrez LANGUAGES C)

# Define C11 como padrão C que será usado na compilação
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(MovimentoXadrez xadrez.c)
