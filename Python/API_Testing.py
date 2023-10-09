import requests
import json

api_response = requests.get("https://api.modrinth.com/")
print(api_response.text)