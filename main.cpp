#include <iostream>
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
		FileReader()
		{
			this->stream;
		}

		~FileReader()
		{
			this->stream.close();
		}

		std::string read(std::string filename)
		{
			std::string content(""), buffer("");

			this->stream.open(filename, std::fstream::in);

			if ( this->stream.is_open() )
			{
				while ( not this->stream.eof() )
				{
					getline(this->stream, buffer);

					content.append(buffer);
				}
			}

			return content;
		}
};

/**
 *
 */
int main(int argc, const char** argv)
{
	std::string method { std::getenv("REQUEST_METHOD") };

	if ( method.compare("POST") == 0 )
	{
		std::string data;

		std::cin >> data;

		std::cout << "Content-Type: application/json; charset=UTF-8\n\n";
		std::cout << data;
	}
	else
	{
		std::cout << "Content-Type: text/html\n\n";
		std::cout << FileReader().read("./index.html") << '\n';
	}

	return 0;
}