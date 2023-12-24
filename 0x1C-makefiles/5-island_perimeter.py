#!/usr/bin/python3

"""this module is provides a function
for calculating the perimter of an island"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    connections = 0
    total_boxes = 0
    for i in range(len(grid)):
        total_boxes += grid[i].count(1)
        for idx_in_row in range(len(grid[i]) - 1):
            if (grid[i][idx_in_row] == 1 and grid[i][idx_in_row + 1] == 1):
                connections += 1
    for i in range(len(grid[0])):
        for idx_in_col in range(len(grid) - 1):
            if (grid[idx_in_col][i] == 1 and grid[idx_in_col + 1][i] == 1):
                connections += 1
    return (total_boxes * 4) - (connections * 2)
