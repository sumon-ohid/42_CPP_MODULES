/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:42:28 by msumon            #+#    #+#             */
/*   Updated: 2024/08/12 15:05:57 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>
#include <climits>

class Span
{
    private:
        unsigned int N;
        std::vector<int> num;
        Span();
        
    protected:

    public: 
        Span(unsigned int N);
        ~Span();
        Span(const Span &copy);
        Span &operator=(const Span &copy);

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addManyNumbers(unsigned int _howMany);
};
