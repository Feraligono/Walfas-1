#include "includes/master.h" /*Only include necessary for main*/
#include "includes/gui.h"
#include "includes/buffer.h"
#include "includes/image.h"

int main(int argc, char **argv){
        //Testing GUI
        gui *test = new gui(argc, argv);
        test->setWindowSize(400,300);
        test->runIt();

        //Making test image
        std::string name = "first object";
        image testImage(name); 
        testImage.addData("Hello World!");
        testImage.addData("How are you!");
        testImage.addData("end o line.");

        image test2("type2");
        test2.addData("Does this work too?");
        test2.addData("I sure hope so.");

        //Testing rwBuffer
        std::string filename = "test";
        rwBuffer generic(filename);
        generic.fillBuffer(testImage);
        generic.fillBuffer(test2);
        generic.writeOut();

        return 0;
}
