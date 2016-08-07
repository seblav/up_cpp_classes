//
//  movie.hpp
//  classes
//
//  Created by Sebastien Lavoie on 2016-08-07.
//  Copyright © 2016 Sebastien Lavoie. All rights reserved.
//

#ifndef movie_hpp
#define movie_hpp

#include <stdio.h>

#endif /* movie_hpp */

#include <string>
using namespace std;

class Movie {
private:
    string name;
    int year;
    int rating;
    
public:
    // Constructors
    Movie();
    Movie(string, int, int);
    
    // Destructor
    ~Movie();
    
    //Accessor
    string getName();
    int getYear();
    int getRating;
    
    //Mutator
    
};