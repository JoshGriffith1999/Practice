#area = tupple whre first two numbers are coordinates of the top left corner, last two are coordinates of the bottom right corner
from PIL import Image

img = Image.open("GNU2.jpg")
area = (25, 25, 125, 125)

cropped_img = img.crop(area)


cropped_img.show()