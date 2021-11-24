from urllib import request

#Following csv comes from fianance.yahoo.com
google_url = "https://query1.finance.yahoo.com/v7/finance/download/GOOG?period1=1606013768&period2=1637549768&interval=1d&events=history&includeAdjustedClose=true"
tesla_url = "https://query1.finance.yahoo.com/v7/finance/download/TSLA?period1=1606021966&period2=1637557966&interval=1d&events=history&includeAdjustedClose=true"
def download_stock_data(csv_url, dest_url):
    response = request.urlopen(csv_url)
    csv = response.read()
    csv_str = str(csv)
    lines = csv_str.split("\\n")
    
    fx = open(dest_url, "w")
    for line in lines:
        fx.write(line + "\n")
    fx.close()

download_stock_data(google_url, r"google.csv")
download_stock_data(tesla_url, r"tesla.csv")