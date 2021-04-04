/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:40:54 by mlasrite          #+#    #+#             */
/*   Updated: 2021/04/04 12:41:48 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::fstream file;
    std::fstream resultfile;
    std::string line;
    size_t index = 0;
    std::string s1, s2, filename, newfilename;

    if (argc == 4)
    {
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];

        file.open(filename, std::fstream::in | std::fstream::out);
        if (file)
        {
            index = filename.find(".", 0);
            if (index != std::string::npos)
                newfilename = filename.substr(0, index) + ".";

            resultfile.open(newfilename + "replace", std::fstream::out);

            while (std::getline(file, line, '\0'))
            {
                index = 0;
                while ((index = line.find(s1, index)) != std::string::npos)
                {
                    line.replace(index, s1.length(), s2);
                    index += s2.length();
                }
                resultfile << line;
            }
            resultfile.close();
        }
        file.close();
    }
}
