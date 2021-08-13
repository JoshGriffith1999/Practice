from random import *
from array import *
from numpy import *
import sys

ROWS = 5
COLS = 5

grid = zeros([ROWS, COLS])
a = int(sys.argv[1])
b = int(sys.argv[2])
c = int(sys.argv[3])

if a > ROWS or b > COLS:
    print("Not Possible, since either the number for the ROW/COL exceedes the grid limit")
else:
    grid[a][b] = c
    print(grid)