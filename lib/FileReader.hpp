#ifndef FILE_READER_HPP

#define FILE_READER_HPP

#include <fstream>
#include <string>

/**
 *
 */
class FileReader
{

	private:
		std::fstream stream;

	public:

        /**
         *
         */
		FileReader();

        /**
         *
         */
		~FileReader();

        /**
         *
         */
		std::string read(std::string);
};

#endif