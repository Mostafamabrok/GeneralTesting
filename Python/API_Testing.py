import requests
import json

parameters = {
    'query' : "sodium",
    'categories' : "game-mechanics",
}

api_response = requests.get("https://api.modrinth.com/v2/search", params=parameters)
print(api_response.json())