#include "./FileReader.hpp";

FileReader::FileReader()
{
    this->stream();
}

FileReader::~FileReader()
{
    this->stream.close();
}

std::string FileReader::read(std::string filename)
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