//
//  movie.cpp
//  classes
//
//  Created by Sebastien Lavoie on 2016-08-07.
//  Copyright © 2016 Sebastien Lavoie. All rights reserved.
//

#include "movie.hpp"
#include <iostream>
#include <string>
using namespace std;

// Constructors
Movie::Movie() {
    name = "Lord of the Rings";
    year = 2001;
    rating = 90;
}
Movie::Movie(string in_name, int in_year, int in_rating) {
    name = in_name;
    year = in_year;
    rating = in_rating;
}

// Destructor
Movie::~Movie() {
    
}

//Accessor
string Movie::getName() {
    return name;
}
int Movie::getYear() {
    return year;
}
int Movie::getRating() {
    return rating;
}

//Mutator
void Movie::setName(string in_name) {
    name = in_name;
}
void Movie::setYear(int in_year) {
    year = in_year;
}
void Movie::setRating(int in_rating) {
    rating = in_rating;
}