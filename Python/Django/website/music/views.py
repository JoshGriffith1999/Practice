#functions to handle user requests - send back http response
from django.http import HttpResponse

def index(request):
    return HttpResponse("<h1>this is the music homepage</h1>")