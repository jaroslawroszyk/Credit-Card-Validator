#pragma once

struct Date
{
    Date(int day,int month,int year);
    int day;
    int month;
    int year;
    bool isValid() const;

    bool dependenciesValid() const;
};