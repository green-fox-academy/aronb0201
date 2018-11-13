//
// Created by Titkos on 13/11/2018.
//

#include "BlogPost.h"


BlogPost::BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate) {
    _authorName = authorName;
    _publicationDate = publicationDate;
    _text = text;
    _title = title;
}

void BlogPost::setAuthorName(std::string authorName) {
    _authorName = authorName;
}

std::string BlogPost::getAuthorName() {
    return _authorName;
}

void BlogPost::setTitle(std::string title) {
    _title = title;
}

std::string BlogPost::getTitle() {
    return _title;
}

void BlogPost::setText(std::string text) {
    _text = text;


}

std::string BlogPost::getText() {
    return _text;

}

void BlogPost::setPublicationDate(std::string publicationDate) {
    _publicationDate = publicationDate;
}

std::string BlogPost::getPublicationDate() {
    return _publicationDate;
}