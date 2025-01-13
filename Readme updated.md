
# MOVIE RECOMMENDER SYSTEM

Content-Based Filtering for Movie Recommendations
In this Movie Recommender System, we use a Content-Based Filtering approach to suggest movies to users. Content-Based Filtering focuses on recommending items (in this case, movies) based on the attributes and features of the items themselves rather than user behavior or preferences. The primary idea behind this technique is to analyze the characteristics of movies that a user has shown interest in (e.g., watched, rated highly) and recommend other movies with similar attributes.




## how it works
How it Works:
Movie Features Extraction:

Movies are represented by a set of features like genre, director, actors, keywords, plot description, and production year. These features are essential because they define the movie and help in making accurate recommendations.
For instance, if a user enjoys Action movies with Superheroes, the recommender system will prioritize movies that share these features in their characteristics.
Similarity Computation:

To measure the similarity between movies, we use techniques like TF-IDF (Term Frequency-Inverse Document Frequency) or Cosine Similarity.
These methods calculate how similar the content of two movies is based on their features. The higher the similarity score, the more likely the movie is to be recommended to the user.
For example, if a user watches a movie like The Dark Knight, the system will find other action-packed superhero films with a similar plot and suggest them to the user.
Personalized Recommendations:

The system takes a user's preferences (their watched or rated movies) and identifies movies with similar characteristics. By leveraging the content information, it recommends movies that are aligned with the user’s tastes.
The system continuously refines the recommendations as the user interacts with it, leading to more personalized suggestions over time.


## Technologies used
Jupyter Notebook
Libraries used-numpy,pandas,sklearn,ast
## Features

- Content Based filtering of movies based on features such as genres,directors,keywords,plot description,etc.


## Roadmap

- 1-loading datasets
- 2-Data Preprocessing
- 3-Model
- 4-Website


## Datasets used 

 - [TMDB 5000 movie dataset credits file](http://localhost:8888/lab/tree/Desktop/MACHINE%20LEARNING/tmdb_5000_credits.csv)
 - [TMDB 5000 movie dataset movies file](http://localhost:8888/lab/tree/Desktop/MACHINE%20LEARNING/tmdb_5000_movies.csv)


## demo

To open a project on the web page open app.py file from repository and run below command in the pycharm terminal

```bash
  streamlit app.py
```

