/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:01:22 by amaligno          #+#    #+#             */
/*   Updated: 2025/05/16 13:35:27 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <cstring>
#include <iostream>

using std::cout;
using std::string;

void    addOne(int &i)
{
    i+= 1;
}

void    charToUpper(char &c)
{
    if (c >='a' && c <= 'z')
        c -= 32;
}

void    stringToUpper(string &str)
{
    for (string::iterator it = str.begin(); it != str.end(); it++)
        *it = toupper(*it);
}

template <typename T> void printElement(T &value)
{
    cout << value << ", ";   
}

int main()
{
    int     int_array[5] = {0, 1, 2, 3, 4};
    char    char_array[] = "hello world";
    string  str_array[3] = {"something", "hello", "world"};
    
    cout << "--------int-array--------\n";
    iter(int_array, 5, printElement<int>);
    cout << '\n';
    iter(int_array, 5, addOne);
    iter(int_array, 5, printElement<int>);
    cout << '\n';

    cout << "--------char-array--------\n";
    iter(char_array, strlen(char_array), printElement<char>);
    cout << '\n';
    iter<char>(char_array, strlen(char_array), charToUpper);
    iter(char_array, strlen(char_array), printElement<char>);
    cout << '\n';
    
    cout << "--------string-array--------\n";
    iter(str_array, 3, printElement<string>);
    cout << '\n';
    iter(str_array, 3, stringToUpper);
    iter(str_array, 3, printElement<string>);
    cout << '\n';
}