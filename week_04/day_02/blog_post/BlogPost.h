//
// Created by Titkos on 13/11/2018.
//

#ifndef BLOG_POST_BLOGPOST_H
#define BLOG_POST_BLOGPOST_H

#include <string>

class BlogPost {

public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);

    void setAuthorName(std::string authorName);

    std::string getAuthorName();

    void setTitle(std::string title);

    std::string getTitle();

    void setText(std::string text);

    std::string getText();

    void setPublicationDate(std::string publicationDate);

    std::string getPublicationDate();

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;

};


#endif //BLOG_POST_BLOGPOST_H
