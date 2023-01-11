#include <stdlib.h>
#include <string.h>

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

int main() { return 0; }
