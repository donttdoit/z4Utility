import json

def save_dict_to_json(filename, dict):
    with open(filename, 'w', encoding='utf-8') as file:
        json.dump(dict, file, indent=4, ensure_ascii=False)

def load_json_to_dict(filename):
    with open(filename, 'r', encoding='utf-8') as file:  
        dict = json.load(file)
    return dict