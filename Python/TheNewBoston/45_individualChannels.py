from PIL import Image

img1 = Image.open("GNU.jpg")

r,g,b = img1.split()

r.show()
g.show()
b.show()