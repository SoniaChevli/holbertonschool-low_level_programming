#!/usr/bin/python3
''' island-permiter module '''


def island_perimeter(grid):
    ''' island_perimeter function '''
    perimeter = 0
    for i, d in enumerate(grid):
        for j, b in enumerate(d):
            if b == 1:
                if j != len(d) and d[j + 1] == 0:
                    perimeter += 1
                if j != 0 and d[j - 1] == 0:
                    perimeter += 1
                if i != 0 and grid[i - 1][j] == 0:
                    perimeter += 1
                if i != len(grid) - 1 and grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
