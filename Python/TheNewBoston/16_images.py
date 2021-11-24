import random
import urllib.request

def download_web_image(url):
    name = random.randrange(1, 1000)
    
    full_name = str(name) + ".jpg"
    urllib.request.urlretrieve(url, full_name)

#Does work, please don't go downloading random pictures off of the internet
#I am not responsible for misuses of this code
#If you want to test this, run your own local python server and download an image from there
download_web_image("http://<your IP address here>/631.jpg")