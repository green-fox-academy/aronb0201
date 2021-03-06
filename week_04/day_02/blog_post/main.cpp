#include <iostream>
#include "BlogPost.h"

int main() {
    BlogPost blog1("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet", " 2000.05.04");
    BlogPost blog2("Tim Urban", "Wait But Why",
                   "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10");
    BlogPost blog3("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump",
                   "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.",
                   "2017.03.28");


    std::cout << blog1.getAuthorName() << std::endl;
    std::cout << blog2.getText() << std::endl;
    std::cout << blog3.getPublicationDate() << std::endl;
    return 0;
}