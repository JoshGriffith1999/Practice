from urllib import request
def download_stock_data(csv_url, dest_url):
    response = request.urlopen(csv_url)
    csv = response.read()
    csv_str = str(csv)
    lines = csv_str.split("\\n")
    
    fx = open(dest_url, "w")
    for line in lines:
        fx.write(line + "\n")
    fx.close()


#Following csv comes from fianance.yahoo.com
google_csv_url = "https://query1.finance.yahoo.com/v7/finance/download/GOOG?period1=1606013768&period2=1637549768&interval=1d&events=history&includeAdjustedClose=true"
tesla_csv_url = "https://query1.finance.yahoo.com/v7/finance/download/TSLA?period1=1606022789&period2=1637558789&interval=1d&events=history&includeAdjustedClose=true"
microsoft_csv_url = "https://query1.finance.yahoo.com/v7/finance/download/MSFT?period1=1606022168&period2=1637558168&interval=1d&events=history&includeAdjustedClose=true"
exxonMobil_csv_url = "https://query1.finance.yahoo.com/v7/finance/download/XOM?period1=1606023185&period2=1637559185&interval=1d&events=history&includeAdjustedClose=true"
#Path to save csv file
google_save_url = r"google.csv"
tesla_save_url = r"tesla.csv"
microsoft_save_url = r"microsoft.csv"
exxonMobil_save_url = "exxonMobile.csv"

download_stock_data(google_csv_url, google_save_url)
download_stock_data(tesla_csv_url, google_save_url)
download_stock_data(microsoft_csv_url, microsoft_save_url)
download_stock_data(exxonMobil_csv_url, exxonMobil_save_url)