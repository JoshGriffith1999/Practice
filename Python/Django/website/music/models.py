#Template/blueprint for how we want to store data in our database
#Create a class of our data that we want to store in the database
#each variable is going to be a colum
#Primary Key: Used to identify a unique object in a local database
#Foreien Key: Reference the primary key of an object in a different database
#on_delete=models.CASCADE): whenever the object in the forien database is deleted\n
# delete anything in the local database that was connected to it
from django.db import models
from django.urls import reverse



class Album(models.Model):
    artist = models.CharField(max_length=250)
    album_title = models.CharField(max_length=500)
    genre = models.CharField(max_length=50)
    album_logo = models.FileField()
    
    def get_absolute_url(self):
        return reverse('music/details', kwargs={'pk':self.pk})
    
    
    def __str__(self):
        return self.album_title + ' - ' + self.artist

class Song(models.Model):
    album = models.ForeignKey(Album, on_delete=models.CASCADE)
    file_type = models.CharField(max_length=5)
    artist = models.CharField(max_length=250)
    song_title = models.CharField(max_length=500)
    genre = models.CharField(max_length=50)
    album_logo = models.CharField(max_length=1000)
    is_favorite = models.BooleanField(default=False)
    
    def __str__(self):
        return self.song_title