#include "Person.h"

Person::Person() : mWeight(0.0), mFirstName(""), mAge(0) {}

Person::Person(string firstName, float newWeight) : mFirstName(firstName), mWeight(newWeight), mAge(0) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) const {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return this->mFirstName != otherPerson.mFirstName;
}

bool Person::operator<(const Person& otherPerson) const {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const {
    return this->mAge > otherPerson.mAge;
}

void Person::setAge(int age) {
    mAge = age;
}
