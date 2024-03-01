#include "./FileReader.hpp"

FileReader::FileReader()
{

}

FileReader::~FileReader()
{
    this->stream.close();
}

std::string FileReader::read(const std::string& filename)
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