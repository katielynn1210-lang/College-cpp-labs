// Header file (podcast.h)
#ifndef PODCAST_PODCAST_H
#define PODCAST_PODCAST_H

#include <vector>
#include <string>
using namespace std;

class Podcast {
private:
    string title;
    string host;
    int duration;

public:
    // Default constructor
    Podcast();

    // Parameterized constructor
    Podcast(string title, string host, int duration);

    // Setters
    void setTitle(string title);
    void setHost(string host);
    void setDuration(int duration);

    // Getters
    string getTitle() const;
    string getHost() const;
    int getDuration() const;

    // Function declaration
    void addPodcast(vector<Podcast>& list);
    void displayInfo(const vector<Podcast>& list);
    void viewPodcasts(const vector<Podcast>& list);
    void searchPodcastByTitle(const vector<Podcast>& list);
    void sortByDuration(vector<Podcast>& list);


};

#endif //PODCAST_PODCAST_H