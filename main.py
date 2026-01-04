# ======================================
#               functions 
# ======================================
def get_row_count(heights, height):
    row_count = 0
    for h in heights:
        if int(h) > int(height):
            row_count += 1
        row_count += 1
    return row_count

# firsst line input have only 2 integer
number, height = input().split()
heights = input().split()

row_count = get_row_count(heights, height)
print(row_count)