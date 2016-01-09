#ifndef __image
#define __image
        
        #ifndef MASTER
        #define MASTER
        #include "master.h"
        #endif

        #ifndef __boostXml
        #define __boostXml
        #include <boost/property_tree/xml_parser.hpp>
        #include <boost/property_tree/ptree.hpp>
        #endif


class image {
        /*
         * This class will hold the ability to hold svg 
         * objects as a universal containter
         * NOTE: add copy constructor
         */
        public:
                image(std::string objectType);

                int addData(std::string Values);

                std::string readData(int x);

                std::vector<std::string> *getData();

                int parseData(std::ifstream& fin);

                int getDataString(std::ofstream& fout);

                std::string getName();
                
        private:
                std::vector<std::string> *VisualData;//xml

                std::string type;//image and action

};
#endif
