#!/usr/bin/python3

"""this module is provides a function
for calculating the perimter of an island"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    height = 0
    width = 1
    index = -1
    for i in range(len(grid)):
        if 1 in grid[i]:
            index = grid[i].index(1)
            break
    if index > 0:
        height += 1
        for j in range(i + 1, len(grid)):
            if 1 == grid[j][index]:
                height += 1
            else:
                width = grid[j - 1].count(1)
                break
        if j == len(grid) - 1:
            width = grid[j - 1].count(1)
    return (width + height) * 2
