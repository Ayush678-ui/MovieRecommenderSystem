import pandas as pd
import streamlit as st
import pickle

def recommend(movie):
    movie_index = movies[movies["title"] == movie].index[
        0]  # this code fetches the index position for avatar movie and stores in movie index
    distances = similarity[movie_index]  # calculating distances for the movie index provided
    movies_list = sorted(list(enumerate(distances)), reverse=True, key=lambda x: x[1])[1:6]

    recommended_movies=[]
    for i in movies_list:
        recommended_movies.append(movies.iloc[i[0]].title)
    return recommended_movies
movies_dict = pickle.load(open('movie_dict.pkl','rb'))
movies= pd.DataFrame(movies_dict)
similarity = pickle.load(open('similarity','rb'))
st.title('Movie Recommender')

import streamlit as st

selected_movie_name = st.selectbox(
"How would you like to be contacted?",movies['title'].values
)

if st.button("Recommend"):
    recommendations = recommend(selected_movie_name)
    for j in recommendations:
        st.write(j)