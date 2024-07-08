/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:07:08 by msumon            #+#    #+#             */
/*   Updated: 2024/07/08 06:29:42 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

void Welcome(void);

class PhoneBook
{
  private:
	Contact contacts[8];
	int num_contacts;

  public:
	PhoneBook();
	void addContact(const Contact &contact);
	void searchContact(int index);
	void displayContacts();
};

std::string format_string(const std::string &str);

#endif