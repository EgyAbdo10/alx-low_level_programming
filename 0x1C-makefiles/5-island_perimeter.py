#!/usr/bin/python3

"""this module is provides a function
for calculating the perimter of an island"""


def island_perimeter(grid):
    """calculate the perimeter of an island"""
    n_iteration = len(grid)
    connections = 0
    total_boxes = 0
    if len(grid[0]) < len(grid):
        n_iteration = len(grid[0])
    for i in range(len(grid)):
        total_boxes += grid[i].count(1)
        for row_index in range(len(grid[i]) - 1):
            if (grid[i][row_index] == 1 and grid[i][row_index + 1] == 1):
                connections += 1
    for i in range(len(grid[0])):         
        for col_idx in range(len(grid) - 1):
            if (grid[col_idx][i] == 1 and grid[col_idx + 1][i] == 1):
                connections += 1
    return (total_boxes * 4) - (connections * 2)
