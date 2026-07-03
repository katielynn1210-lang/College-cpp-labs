// Source file (podcast.cpp)

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "podcast.h"
#include "Validation.h"

using namespace std;

// Default constructor description
Podcast::Podcast() {
    title = "Untitled";
    host = "Unnamed";
    duration = 0;
}

// Parameterized constructor description
Podcast::Podcast(string title, string host, int duration) {
    this->title = title;
    this->host = host;
    this->duration = duration;
}

// Setters description
void Podcast::setTitle(string title) {
    this->title = title;
}
void Podcast::setHost(string host) {
    this->host = host;
}
void Podcast::setDuration(int duration) {
    this->duration = duration;
}

// Getters description

string Podcast::getTitle() const {
    return title;
}
string Podcast::getHost() const {
    return host;
}
int Podcast::getDuration() const {
    return duration;
}

// Function descriptions

void Podcast::addPodcast(vector<Podcast>& list) {
    cin.ignore(); // Clear newline for getline
    int num = positiveInput("How many podcasts would you like to add? ");

    for (int i = 0; i < num; i++) {
        string title, host;
        int duration;

        cout << "Enter title:  ";
        getline(cin, title);

        cout << "Enter host:  ";
        getline(cin, host);

        duration = positiveInput("Enter duration:  ");
        cin.ignore(); // Prepare for next string input

        Podcast p(title, host, duration); // Use constructor
        list.push_back(p); // Add to vector
    }
}

void Podcast::viewPodcasts(const vector<Podcast>& list) {
    for (const Podcast& p : list) {
        cout << "--" << p.getTitle() << "-- Hosted by: " <<
        p.getHost() << "  (" << p.getDuration() << ") "<< endl;
    }
}

// Searches for and displays podcast title
void Podcast::searchPodcastByTitle(const vector<Podcast>& list) {
    string searchTitle;
    cin.ignore();
    cout << "Enter podcast title to search: ";
    getline(cin, searchTitle);

    bool found = false;
    for (int i = 0; i < list.size(); i++) {
        if (list[i].getTitle() == searchTitle) {
            cout << "\n---Podcast Found!---\n";
            cout << "Title: " << list[i].getTitle() << endl;
            cout << "Host: " << list[i].getHost() << endl;
            cout << "Duration: " << list[i].getDuration() << " minutes" << endl;
            found = true;
            break; // Exit loop after finding the first match
        }
    }

    if (!found) {
        cout << "No podcast found." << endl;
    }
}

// Sorts podcasts by duration
void Podcast::sortByDuration(vector<Podcast>& list) {
    cin.ignore();
    if (list.empty()) {
        cout << "No podcasts to sort.\n";
        return;
    }

    // Use lambda to compare durations
    sort(list.begin(), list.end(), [](const Podcast& a, const Podcast& b) {
        return a.getDuration() > b.getDuration();
    });

    cout << "Podcasts sorted by duration." << endl;
}
