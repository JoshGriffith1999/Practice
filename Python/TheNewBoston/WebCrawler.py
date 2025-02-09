#Note the page https://buckysroom.org IS NOT the same as displayed in the video

import requests
from bs4 import BeautifulSoup

def trade_spider(max_pages = 5):
    page = 1
    
    while page <= max_pages:
        url = "https://buckysroom.org/trade/search.php?page=" + str(page)
        source_code = requests.get(url)
        plain_text = source_code.text
        soup = BeautifulSoup(plain_text)
        
        for link in soup.findAll("a", {"class":"item-name"}):
            href = "https://buckysroom.org" + link.get("href")
            title = link.string
            get_single_item_data(href)
        
        page += 1


def get_single_item_data(item_url):
    source_code = requests.get(item_url)
    plain_text = source_code.text
    soup = BeautifulSoup(plain_text)
    
    for item_name in soup.findAll("div", {"class":"i-name"}):
        print(item_name.string)
    
    for link in soup.findAll("a"):
        href = "https://buckysroom.org" + link.get("href")