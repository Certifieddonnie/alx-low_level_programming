#!/usr/bin/python3
"""Module that calculates the perimeter of the island
described in grid.
"""


def island_perimeter(grid):
    """Returns the perimetr of the island"""

    perimeter = 0
    # Loops through the grid cell by cell.
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # If the cell is not 0.
            if grid[i][j]:
                # Increments the perimeter by counting the water around the cell.
                perimeter += num_water(grid, i, j)

    return perimeter


def num_water(grid, i, j):
    """Returns the number of water a cell has in a grid."""

    # num increases if water is detected.
    num = 0
    # First Condition to check water on the cell's top side.
    if i <= 0 or not grid[i - 1][j]:
        num += 1
        #print(f"first if, {i},{j}")
    # Second Condition to check water on the cell's left side.
    if j <= 0 or not grid[i][j - 1]:
        num += 1
        #print(f"second if, {i},{j}")
    # Third Condition checks water on the cell's left side and the if it's at the end grid.
    if j >= len(grid[i]) - 1 or not grid[i][j - 1]:
        num += 1
        #print(f"third if, {i},{j}")
    # Fourth Condition checks water on the cell's down side.
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1
        #print(f"fourth if, {i},{j}")

    return num
