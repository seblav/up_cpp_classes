//
//  main.cpp
//  classes
//
//  Created by Sebastien Lavoie on 2016-08-06.
//  Copyright © 2016 Sebastien Lavoie. All rights reserved.
//

#include <iostream>
#include "movie.hpp"
#include <string>
using namespace std;

void printMovie(Movie movie) {
    // print movie information
    cout<<"Movie name: "<<movie.getName()
            <<"\nMovie year: "<<movie.getYear()
                <<"\nMovie rating: "<<movie.getRating()
                    <<endl<<endl;
}

int main() {
    string temp_name;
    int temp_year;
    int temp_rating;
    
    // Create instances of movie
    Movie movie1;
    Movie movie2("The Godfather", 1973, 95);
    Movie movie_input;
    
    // Print movies info
    printMovie(movie1);
    printMovie(movie2);
    
    // Get user input
    cout<<"What is you favortite movie name?"<<endl;
    cin>>temp_name;
    cout<<"In what yeart did it come out?"<<endl;
    cin>>temp_year;
    cout<<"What is it rating?"<<endl;
    cin>>temp_rating;
    
    movie_input.setName(temp_name);
    movie_input.setYear(temp_year);
    movie_input.setRating(temp_rating);
    
    printMovie(movie_input);
    
    return 0;
}
