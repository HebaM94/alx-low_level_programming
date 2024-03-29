#!/usr/bin/python3
"""Defines island perimeter function"""


def island_perimeter(grid):
    """function of the perimiter of the island described in grid

    Args:
        grid (list): A list of list of integers

    Returns:
        The perimeter of the island described in grid
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter -= 2
    return perimeter
