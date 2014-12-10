class Engine {
protected:
    unsigned int width_;
    unsigned int height_;
    unsigned int frame_rate_;
    bool quit_;

    Engine(int width, int height, int frame_rate) {
        width_ = width;
        height_ = height;
        frame_rate_ = frame_rate;
    }

};