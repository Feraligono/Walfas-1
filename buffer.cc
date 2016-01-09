#include "includes/buffer.h"

rwBuffer::rwBuffer(std::string fileName)
{
        /*
         * Innitializes the name and rw buffer vector
         * the vector is deleted in the destructor so there 
         * is no worry for mem management
         */

        buffer = new std::vector<image>();
        name = fileName + ".svg";
}

void rwBuffer::fillBuffer(image& drawing)
{
        /*
         * This will be the most important part of the 
         * rwBuffer, it takes an image reference and 
         * push_back the contents. Thus: the vector should 
         * be read beginning to end.
         */
        
        buffer->push_back(drawing);
}

void rwBuffer::clearBuffer()
{
        /*
         * deletes the current buffer and restarts it anew
         * DOES NOT change the name, changeName must be 
         * called.
         */
        
        delete buffer;
        buffer = new std::vector<image>;
}

int rwBuffer::writeOut()
{
        /*
         * Outputs the current contents of the rwBuffer
         * to the current filename. Use changeName method 
         * to change name if necessary before saving.
         */
        
        std::ofstream fout(name);
        
        for (std::vector<image>::iterator it = buffer->begin(); it != buffer->end(); it++){
                it->getDataString(fout);
        }

        fout.close();
        
        return 0;
}
                        
image rwBuffer::getObject(int x)
{
        /*
         * Returns the full image object to the user,
         * This functionality, alongside makeing the 
         * writeOut buffer take an object reference will
         * likely be moved to the image.h class.
         */
        
        return (*buffer)[x];
}

void rwBuffer::changeName(std::string newName)
{
        /*
         * Self explanitory but should be called everytime
         * the new file should written -as this is simply the
         * object writing buffer.
         */
        name = newName;
}

rwBuffer::~rwBuffer() 
{
        delete buffer;
}

