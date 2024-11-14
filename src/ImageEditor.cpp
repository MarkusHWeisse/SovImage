ImageEditor(ImageView iv, ImageModel im, ImageController ic) {
            this.imageview = iv;
            this.imagemodel = im;
            this.imagecontroller = ic;

            this.windowHeight = windowH;
            this.windowWidth = windowW;

            window.window(sf::VideoMode(windowHeight, windowWidth), "Soviet Image Editor");
        }

        void startProgramm() {

            while(window.isOpen()) {

                while{window.pollEvent(ev) {
                    if(ev.type == sf::Event::Closed) {
                        window.close();
                    }

                    if(ev.type == sf::Event::Resized) {
                        window.setSize(ev.size.width, ev.size.height);
                    }
                }
                window.clear();

                window.display();
            }

        }