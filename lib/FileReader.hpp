#ifndef FILE_READER_HPP

#define FILE_READER_HPP

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

#endif