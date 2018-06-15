# Makefiles
* the purpose of this reposityory is to learn how to create and use makefiles

### Requirements
* gcc 4.8.4
* make version 3.81
* Ubuntu 14.04 LTS

## 0-Makefile
first makefile with:
* name of executable
* rules: All

## 1-Makefile
* rules: all
* name: holberton
* variables: CC, SRC

## 2-Makefile
* name: holberton
* rules: all
* variables: CC, SRC, OBJ, NAMe

## 3-Makefile
* name: holberton
* rules: all, clean, oclean, fclean, re
* variables: CC, SRC, OBJ, NAME, RM

## 4-Makefile
* name: holberton
* rules: all, clean, fclean, oclean, re
* variables: CC, SRC, OBJ, NAME, RM, CFLAGS

## 5-island_perimeter.py
* technical interview prep
* function returns perimeter of the island described in grid
* grid is a list of list of integers:
  0 represents a water zone
  1 represents a land zone
  One cell is a square with side length 1
  Grid cells are connected horizontally/vertically (not diagonally).
  Grid is rectangular, width and height don’t exceed 100