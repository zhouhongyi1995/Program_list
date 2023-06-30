import requests
from bs4 import BeautifulSoup

url = 'https://movie.douban.com/top250'
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.36'}

def get_movies(url):
    movie_list = []
    html = requests.get(url, headers=headers).content
    soup = BeautifulSoup(html, 'html.parser')
    movie_items = soup.find_all('div', class_='info')
    for movie_item in movie_items:
        movie_title = movie_item.find('span', class_='title').text
        movie_rating = movie_item.find('span', class_='rating_num').text
        movie_list.append({'title': movie_title, 'rating': movie_rating})
    return movie_list

movies = []
for i in range(0, 250, 25):
    url = 'https://movie.douban.com/top250?start={}&filter='.format(i)
    movies += get_movies(url)

for movie in movies:
    print(movie['title'], movie['rating'])