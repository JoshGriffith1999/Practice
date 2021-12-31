from django.contrib import admin
from .models import Album, Song

# Allows out Album table to be present in the admin dashboard
admin.site.register(Album)
admin.site.register(Song)
