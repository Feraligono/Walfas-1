#ifndef __buffer

        #include "image.h"

        #ifndef MASTER
        #include "master.h"
        #define MASTER
        #endif

class rwBuffer {
        /*
         * This class keep hold of the read/write buffer
         * I will delete the copy and move constructors because
         * the image class buffer is the one that will be allowed 
         * to actually hold object data -this class will really
         * only read and write the stream.
         */

        public:
                rwBuffer(std::string fileName); 

                void fillBuffer(image& drawing);

                void clearBuffer();

                int writeOut();

                image getObject(int x);

                void changeName(std::string newName);

                ~rwBuffer(); 

        private:
                std::vector<image> *buffer;
                std::string name;
};

#define __buffer
#endif
