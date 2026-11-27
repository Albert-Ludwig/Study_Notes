import urllib.request
url = 'https://s3.amazonaws.com/files.douglas.stebila.ca/files/pictures/me/McMaster_staff_photo_2016.jpg'
response = urllib.request.urlopen(url)
s = response.read()
print(s)


