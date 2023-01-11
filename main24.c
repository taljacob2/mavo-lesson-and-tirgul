#include <stdlib.h>
#include <string.h>

#define TRUE  1
#define FALSE 0
typedef int BOOLEAN;

typedef struct movie {
    char *name;
    int   session;
    int   chapter;
    int   length;
} Movie;

typedef struct country {
    Movie **arrMovies;
    int     arrMoviesSize;
} Country;

typedef struct member {
    char     nameMem[20];
    int      id;
    Country *country;
} Member;


/// This function should be named as "findMovieWithinCountryByMovieName".
Movie *searchMovieByCountry(Country *country, char *movieName) {
    if (country == NULL) { return NULL; }

    for (int i = 0; i < country->arrMoviesSize; ++i) {
        Movie *movie = country->arrMovies[i];
        if (strcmp(movie->name, movieName) == 0) { return movie; }
    }
    return NULL;
}

BOOLEAN addMovieToCountry(Country *country, Movie *movie) {
    Movie *movieEntry = searchMovieByCountry(country, movie->name);
    if (movieEntry == NULL) {

        /*
         * 1. `realloc` `arrMovies`.
         * 2. Update `arrMoviesSize` and add `movie` as an element.
         */
        Movie **allocatedArrMovies = (Movie **) realloc(
                country->arrMovies,
                sizeof(Movie *) * (country->arrMoviesSize + 1));

        if (allocatedArrMovies != NULL) {
            country->arrMovies = allocatedArrMovies;
            country->arrMoviesSize++;
            country->arrMovies[country->arrMoviesSize - 1] = movie;
        } else {
            return FALSE;
        }
    }

    return TRUE;
}

int main() { return 0; }
