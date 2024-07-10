import os
from bing_image_downloader import downloader

image_path = "Images"

skin_problems = ["Eye Bags", " Oily Skin", "Acne", "Forehead Wrinkles", "Face Redness", "Under Eye Wrinkles"]

def setup_file_enviroment():
    for skin_problem in skin_problems:
        os.makedirs(image_path +"/"+ skin_problem)
    

if os.path.exists(image_path):
    print("Replacing current image directory")
    os.rmdir(image_path)
    setup_file_enviroment()

else:
    print("No directory for images found, creating new one.")
    setup_file_enviroment()

for skin_problem in skin_problems:
    downloader.download(skin_problem, limit=100, output_dir=image_path+"/"+skin_problem, adult_filter_off=False, force_replace=False, timeout=60, verbose=True)

