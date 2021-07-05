#!/usr/bin/python3
"""5-island_perimeter"""


def island_perimeter(grid):
    """perimeter of the island described in grid"""
    e = 0
    leng = len(grid) - 1
    wid = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    e += 1
                if j == 0 or grid[i][j - 1] != 1:
                    e += 1
                if j == wid or grid[i][j + 1] != 1:
                    e += 1
                if i == leng or grid[i + 1][j] != 1:
                    e += 1
    return e