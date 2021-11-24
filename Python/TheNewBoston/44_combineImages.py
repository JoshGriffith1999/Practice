from PIL import Image

img1 = Image.open("GNU.jpg")
img2 = Image.open("GNU2.jpg")

area = (10, 10, 20, 20)

img1.paste(img2, area)

img1.show()