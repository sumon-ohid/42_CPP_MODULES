/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:08:35 by msumon            #+#    #+#             */
/*   Updated: 2024/08/25 10:09:18 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Initialize a stack to store operands.
// Split the input string by spaces to get individual tokens.
// Iterate through each token:
// If the token is a number, push it onto the stack.
// If the token is an operator (+, -, *, /), pop the required number of operands from the stack, perform the operation, and push the result back onto the stack.
// The final result should be the only element left in the stack.

float evaluateRPN(const std::string &expression)
{
    std::list<float> stack;
    std::istringstream tokens(expression);
    std::string token;

    while (tokens >> token)
    {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-'))
        {
            if (std::find(token.begin(), token.end(), '.') != token.end())
                throw std::runtime_error("Error");
            int num = std::atoi(token.c_str());
            if (num < 0 || num > 10)
                throw std::runtime_error("Error");
            stack.push_back(std::atof(token.c_str()));
        }
        else 
        {
            if (stack.size() < 2)
                throw std::runtime_error("Error");
            float b = stack.back();
            stack.pop_back();
            float a = stack.back();
            stack.pop_back();

            if (token == "+")
                stack.push_back(a + b);
            else if (token == "-")
                stack.push_back(a - b);
            else if (token == "*")
                stack.push_back(a * b);
            else if (token == "/")
            {
                if (b == 0)
                    throw std::runtime_error("Error: Division by zero");
                stack.push_back(a / b);
            }
            else
                throw std::runtime_error("Error: Unknown operator: " + token);
        }
    }
    if (stack.size() != 1)
        throw std::runtime_error("Error");
    return stack.back();
}
