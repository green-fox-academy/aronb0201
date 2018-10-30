#include <iostream>

int main() {

    std::string url("https//www.reddit.com/r/nevertellmethebots");
    std::string from = "bots";


    int start_pos = url.find(from);
    url.replace(start_pos, from.length(), "odds");

    url.push_back('/');

    std::cout << url << std::endl;
    return 0;
}

// Accidentally I got the wrong URL for a funny subreddit. It's probably "odds" and not "bots"
// Also, the URL is missing a crucial component, find out what it is and insert it too!