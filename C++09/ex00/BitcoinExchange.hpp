/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:06:08 by msumon            #+#    #+#             */
/*   Updated: 2024/08/22 08:51:26 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <climits>
#include <map>
#include <iterator>
#include <vector>
#include <iomanip>
#include <utility>


bool         file_is_valid(std::string filename, std::string &content);
bool         headline_checker(std::string headline);
bool         is_valid_number(std::string &str);
std::string* data_extractor(const std::string& str, int &line_count);
std::string* get_values(std::string* input, int line_count, int start);
std::string* get_dates(std::string* input, int line_count, int start);
void         make_multimap(std::string* dates, std::string* values, int line_count, std::multimap<std::string, float> &bitcoin);
void         search_data(std::string *dates, std::string *values, const std::multimap<std::string, float> &bitcoin, unsigned int size);
