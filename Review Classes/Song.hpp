//
//  Song.hpp
//  Review Classes
//
//  Created by Kensuke Fukutomi on 6/26/24.
//

#ifndef Song_hpp
#define Song_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Song {
private:
    
    string title;
    string artist;
    
public:
    
    Song(string title, string artist);
    
    Song();
    
    // Destructor: Function: Deallocate Memory and Cleanup
    ~Song();
    
    // Functions of Song Class
    void setsetTitle(string title);
    void setArtist(string artist);
    void displaySong();
};

#endif /* Song_hpp */
