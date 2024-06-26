//
//  Song.cpp
//  Review Classes
//
//  Created by Kensuke Fukutomi on 6/26/24.
//

#include "Song.hpp"
#include <iostream>
using namespace std;

//*************************************
// Constructors                       *
//*************************************

Song::Song(string title, string artist) {
    this->title = title;
    this->artist = artist;
}

// Default Constructor
Song::Song(){
    title = "";
    artist = "";
}

// Destructor
Song::~Song(){
}

// Helper Functions
void Song::displaySong() {
    cout << "Your Song: " << endl;
    cout << "\nTitle: " << title << "\n";
    cout << "Artist: " << artist << "\n";
}

void Song::setsetTitle(string title){
    this->title = title;
}

void Song::setArtist(string artist){
    this->artist = artist;
}
