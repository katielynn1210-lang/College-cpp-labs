/*
 * Author: Katie Williams
 * Date: 03/19/26
 * Lab Number: 1
 * Lab Description: Create a menu-driven application to add,
 * view, search for, and sort podcasts.
 */

#include <iostream>
#include <vector>
#include "podcast.h"

using namespace std;
int main() {
    vector<Podcast> list;
    Podcast p;

    int choice;
    do {
        cout << "\nMenu\n";
        cout << "1. Add Podcasts\n";
        cout << "2. View Podcasts\n";
        cout << "3. Search Podcasts by Title\n";
        cout << "4. Sort Podcasts by Duration\n";
        cout << "5. Exit\n";
        cout << "Enter your choice:  ";
        cin >> choice;

        switch (choice) {
            case 1:
                p.addPodcast(list);
                break;
            case 2:
                cout << "\n----Podcast List----\n";
                p.viewPodcasts(list);
                break;
            case 3:
                p.searchPodcastByTitle(list);
                break;
            case 4:
                p.sortByDuration(list);
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
                cin.clear();
                cin.ignore(1000, '\n');
        }
    } while (choice != 5);


    return 0;
}
