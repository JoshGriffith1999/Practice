#PIL is the older version of Pillow
#Captiable with some newer versions of python
#.show() opens with file witht the defualt image viewer
from PIL import Image

img = Image.open("GNU2.jpg")

print(img.size)
print(img.format)

img.show()