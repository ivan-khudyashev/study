# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("\n#1. Print some details for dictionary")
    movie = {
        "title": "The Godfather",
        "director": "Francis Ford Coppola",
        "year": 1972,
        "rating": 9.2
    }
    print(movie['year'])
    print("\n#2. Update dictionary field")
    movie['rating'] = (movie['rating'] + 9.3 ) / 2
    print(movie['rating'])
    print("\n#3. Construct dictionary from scratch")
    movie = {}
    movie['title'] = "The Godfather"
    movie['director'] = "Fracis Ford Coppola"
    movie['year'] = 1972
    movie['rating'] = 9.2
    movie['actors'] = [
        'Marlon Brando', 'Al Pacino', 'James Caan'
    ]
    movie['other_details'] = {
        'runtime': 175,
        'language': 'English'
    }
    print(movie)

def main():
    doAction()

if __name__ == "__main__":
    main()
