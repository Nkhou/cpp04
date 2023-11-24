/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:28 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/11/24 14:39:29 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
class Brain
{
    private:
        std::string	ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
//         std::string getIdeas(int index) const;
//         void setIdeas(int index , std::string ideas);
};

#endif