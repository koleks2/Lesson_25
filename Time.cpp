#include "Time.h"

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    normalize();
}

void Time::normalize() {
    long long total = (long long)hours * 3600 + minutes * 60 + seconds;

    if (total < 0) {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    else {
        hours = total / 3600;
        minutes = (total % 3600) / 60;
        seconds = total % 60;
    }
}

Time Time::operator+(const Time& t) const {
    return Time(hours + t.hours, minutes + t.minutes, seconds + t.seconds);
}

Time Time::operator-(const Time& t) const {
    return Time(hours - t.hours, minutes - t.minutes, seconds - t.seconds);
}

std::ostream& operator<<(std::ostream& out, const Time& t) {
    if (t.hours < 10) out << '0';
    out << t.hours << ':';

    if (t.minutes < 10) out << '0';
    out << t.minutes << ':';

    if (t.seconds < 10) out << '0';
    out << t.seconds;

    return out;
}

std::istream& operator>>(std::istream& in, Time& t) {
    char sep1, sep2;
    in >> t.hours >> sep1 >> t.minutes >> sep2 >> t.seconds;

    t.normalize();

    return in;
}