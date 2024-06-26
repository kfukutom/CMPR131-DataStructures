//
//  main.cpp
//  Review Classes
//
//  Created by Kensuke Fukutomi on 6/26/24.
//
#include "Song.hpp"
#include <iostream>

int main() {
    Song song1;
    Song song2("Strawberry Swing", "Frank Ocean");
    
    song1.setArtist("Giveon");
    song1.setsetTitle("Heartbreak Anniversary");
    
    song1.displaySong();
    song2.displaySong();
    return 0;
}
