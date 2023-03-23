#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def island_perimeter(grid: list):
    """
    Calculates perimeter of Island
    1: land
    0: water
    """

    width, length = len(grid), len(grid[0])
    perimeter = 0

    for i in range(width):
        for j in range(length):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
