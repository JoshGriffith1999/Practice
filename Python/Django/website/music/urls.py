from django.conf.urls import url
from django.urls import path

from music.models import Album
from . import views

app_name = 'music'

urlpatterns = [
   #/music/
   url(r'^$', views.IndexView.as_view(), name='index'),
   
   #/music/id
   url(r'^(?P<pk>[0-9]+)/$', views.DetailView.as_view(), name='detail'),
   #/music/album/add/
   url(r'album/add$', views.AlbumCreate.as_view(), name='Album-Add'),
   #/music/album/id/
   #url(r'album/?P<pk>[0-9]+)/$', views.AlbumUpdate.as_view(), name='Album-Update'),
   #/music/album/id/delete
   #url(r'album/?P<pk>[0-9]+)/delete/$', views.AlbumDelete.as_view(), name='Album-Delete'),
]