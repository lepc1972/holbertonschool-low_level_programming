#!/usr/bin/python3
"""Preparation for tech interview"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    p = 0
    for x in range(0, len(grid), 1):
        for y in range(0, len(grid[0]), 1):
            if grid[x][y] == 1:
                p = p + 4
                if y - 1 >= 0 and grid[x][y - 1] == 1:
                    p -= 2
                if x - 1 >= 0 and grid[x - 1][y] == 1:
                    p -= 2
    return (p)
