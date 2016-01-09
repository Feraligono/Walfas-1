#include "includes/image.h"

image::image(std::string objectType):type(objectType)
{
        VisualData = new std::vector<std::string>();
}

int image::addData(std::string Values)
{
        VisualData->push_back(Values);
        return 0;
}

std::string image::readData(int x)
{
        return (*VisualData)[x];
}

std::vector<std::string> *image::getData()
{
        return VisualData;
}

int parseData(std::ifstream& fin)//TODO
{
        return 0;
}

int image::getDataString(std::ofstream& fout)
{
        for (std::vector<std::string>::iterator it = VisualData->begin(); it != VisualData->end(); it++) 
                fout<<*it<<std::endl;
        return 0;
}

std::string image::getName()
{
        return type;
}
