#include "View/ImageView.hpp"
#include "Model/ImageModel.hpp"
#include "Controller/ImageController.hpp"

#define windowH 900
#define windowW 1200

namespace SovImage {

    class ImageEditor {
    private:
        ImageView imageview;
        ImageModel imagemodel;
        ImageController imagecontroller;
        sf::RenderWindow window;
        int windowHeight;
        int windowWidth;
        sf::Event ev;

    public:

        ImageEditor(ImageView iv, ImageModel im, ImageController ic);

        void startProgramm();

    }

}